#include "texteditor.h"
#include "ui_texteditor.h"

TextEditor::TextEditor(const QString &fileName, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TextEditor)
{
    ui->setupUi(this);

    setWindowTitle(QString("TextEditor[*]"));

    connect(ui->actionClose, SIGNAL(triggered()), this, SLOT(close(true)));
    connect(ui->actionExit, SIGNAL(triggered()), qApp, SLOT(closeAllWindows()));
    connect(ui->textEdit, SIGNAL(textChanged()), this, SLOT(documentModified()));

    connect(ui->actionAboutQt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
    connect(ui->actionAbout, SIGNAL(triggered()), qApp, SLOT(about()));

    connect(ui->actionCut, SIGNAL(triggered()), this, SLOT(cut()));
    connect(ui->actionCopy, SIGNAL(triggered()), this, SLOT(copy()));
    connect(ui->actionPaste, SIGNAL(triggered()), this, SLOT(paste()));
    connect(ui->actionUndo, SIGNAL(triggered()), this, SLOT(undo()));
    connect(ui->actionRedo, SIGNAL(triggered()), this, SLOT(redo()));

    connect(ui->textEdit, SIGNAL(cutAvailable(bool)), ui->actionCut, SLOT(setEnabled(false)));
    connect(ui->textEdit, SIGNAL(copyAvailable(bool)), ui->actionCopy, SLOT(setEnabled(false)));
    connect(ui->textEdit, SIGNAL(undoAvailable(bool)), ui->actionUndo, SLOT(setEnabled(false)));
    connect(ui->textEdit, SIGNAL(redoAvailable(bool)), ui->actionRedo, SLOT(setEnabled(false)));

    connect(ui->actionOpen, SIGNAL(triggered()), this, SLOT(open()));

    connect(ui->actionSave, SIGNAL(triggered()), this, SLOT(saveFile()));
    connect(ui->actionSaveAs, SIGNAL(triggered()), this, SLOT(saveFileAs()));

    QFont Font = QSettings(this).value("VIEWF").value<QFont>();
    ui->textEdit->setFont(Font);

    loadFile(fileName);
}

TextEditor::~TextEditor()
{
    delete ui;
}

void TextEditor::closeEvent(QCloseEvent *e)
{
    if (isWindowModified())
        {
            switch (QMessageBox::warning(this, "Document Modified",
               "The document has been modified. "
               "Do you want to save your changes?\n"
               "You will lose and unsaved changes.",
               QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel,
               QMessageBox::Cancel))
            {
            case QMessageBox::Yes:
                saveFile();
                e->ignore();
                break;
            case QMessageBox::No:
                e->accept();
                break;
            case QMessageBox::Cancel:
                e->ignore();
                break;
            }
        }
        else
             e->accept();
}

void TextEditor::on_actionNew_triggered()
{
    TextEditor *obj1 = new TextEditor();
    obj1->show();
}

void TextEditor::on_actionClose_triggered()
{
    close();
}

void TextEditor::on_actionExit_triggered()
{
    qApp->closeAllWindows();
}

void TextEditor::documentModified()
{
   setWindowModified(true);
}

void TextEditor::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void TextEditor::on_actionAboutQt_triggered()
{
    qApp->aboutQt();
}

void TextEditor::on_actionAbout_triggered()
{
    QMessageBox::about(this, "Это программка", "Текстовый редактор");
}

void TextEditor::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void TextEditor::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void TextEditor::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void TextEditor::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void TextEditor::loadFile(const QString &fileName)
{
    if(fileName.isEmpty()){
        setFileName(QString());
        return;
    }

    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){      //Создает новый QFileInfo, который дает информацию о данном файле
        QMessageBox::warning(this,"Error", "Can't open file");  //Данное свойство хранит имя приложения.
        setFileName(QString());
        return;
    }

    QTextStream textStream(&file);

    ui->textEdit->setText(textStream.readAll());
    file.close();

    setFileName(fileName);
    setWindowModified(false);
}

void TextEditor::setFileName(const QString &fileName)
{
    m_fileName = fileName;
    setWindowTitle(QString("%1[*] - %2")
                .arg(m_fileName.isNull()?"intitled":QFileInfo(m_fileName).fileName())
                .arg(QApplication::applicationName()));
}

void TextEditor::on_actionSelectFont_triggered()
{
    bool Changed;
    QFont newFont = QFontDialog::getFont(&Changed);
    if (Changed) {
        ui->textEdit->setFont(newFont);
        QSettings settings(this);
        settings.setValue("VIEWF", newFont);
    }
}

void TextEditor::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,
          "Open document", QDir::currentPath(), "Text documents (*.txt)");
    if (fileName.isNull())
        return;
    if (m_fileName.isNull() && !isWindowModified())
        loadFile(fileName);
    else{
       TextEditor *p =new TextEditor(fileName);
        p->show();
    }

}

bool TextEditor::saveFileAs()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save document",
        m_fileName.isNull()?QDir::currentPath():m_fileName, "Text documents (*.txt)");

    if (fileName.isNull()) return false;
    setFileName(fileName);
    return saveFile();
}

bool TextEditor::saveFile()
{
    if(m_fileName.isNull())
        return saveFileAs();

    QFile file(m_fileName);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QMessageBox::warning(this,"Error", "Can't open file");
        setFileName(m_fileName);
        return false;
    }

    QTextStream textstream(&file);

    textstream << ui->textEdit->toPlainText();

    file.close();
    setWindowModified(false);
    return true;
}
