#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <QMainWindow>
#include <QTextEdit>
#include <QString>
#include <QMessageBox>
#include <QCloseEvent>
#include <QWidget>
#include <QApplication>
#include <QSettings>
#include <QFontDialog>
#include <qstring.h>
#include <QFile>
#include <QTextStream>
#include <QFileInfo>
#include <QFileDialog>
#include <QTextEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class TextEditor; }
QT_END_NAMESPACE

class TextEditor : public QMainWindow
{
    Q_OBJECT

public:
    TextEditor(const QString &fileName = QString(), QWidget *parent=nullptr);
    ~TextEditor();

protected:
void closeEvent(QCloseEvent *e);

private slots:
    void on_actionNew_triggered();
    void on_actionClose_triggered();
    void on_actionExit_triggered();

    void documentModified();

    void on_actionSelectFont_triggered();

    void on_actionAboutQt_triggered();
    void on_actionAbout_triggered();

    void on_actionCut_triggered();
    void on_actionCopy_triggered();
    void on_actionPaste_triggered();
    void on_actionUndo_triggered();
    void on_actionRedo_triggered();

    void on_actionOpen_triggered();

    bool saveFile();
    bool saveFileAs();

private:
    void loadFile(const QString &fileName);
    void setFileName(const QString &fileName);

    Ui::TextEditor *ui;
    QString m_fileName;
};
#endif // TEXTEDITOR_H
