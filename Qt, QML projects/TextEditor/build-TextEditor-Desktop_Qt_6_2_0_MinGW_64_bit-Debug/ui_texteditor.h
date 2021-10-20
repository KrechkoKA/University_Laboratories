/********************************************************************************
** Form generated from reading UI file 'texteditor.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTEDITOR_H
#define UI_TEXTEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextEditor
{
public:
    QAction *actionNew;
    QAction *actionClose;
    QAction *actionExit;
    QAction *actionSelectFont;
    QAction *actionCut;
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QToolBar *toolBar;

    void setupUi(QMainWindow *TextEditor)
    {
        if (TextEditor->objectName().isEmpty())
            TextEditor->setObjectName(QString::fromUtf8("TextEditor"));
        TextEditor->resize(803, 643);
        TextEditor->setMinimumSize(QSize(800, 600));
        TextEditor->setLayoutDirection(Qt::LeftToRight);
        actionNew = new QAction(TextEditor);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("QtLab2Pictures/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionClose = new QAction(TextEditor);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionExit = new QAction(TextEditor);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionSelectFont = new QAction(TextEditor);
        actionSelectFont->setObjectName(QString::fromUtf8("actionSelectFont"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/QtLab2Pictures/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectFont->setIcon(icon1);
        actionCut = new QAction(TextEditor);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/QtLab2Pictures/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon2);
        actionAbout = new QAction(TextEditor);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAboutQt = new QAction(TextEditor);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));
        actionCopy = new QAction(TextEditor);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/QtLab2Pictures/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon3);
        actionPaste = new QAction(TextEditor);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/QtLab2Pictures/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon4);
        actionUndo = new QAction(TextEditor);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(TextEditor);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionOpen = new QAction(TextEditor);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/QtLab2Pictures/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon5);
        actionSave = new QAction(TextEditor);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/QtLab2Pictures/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon6);
        actionSaveAs = new QAction(TextEditor);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        centralwidget = new QWidget(TextEditor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, -1, 800, 601));
        TextEditor->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(TextEditor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TextEditor->setStatusBar(statusbar);
        menubar = new QMenuBar(TextEditor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 803, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        TextEditor->setMenuBar(menubar);
        toolBar = new QToolBar(TextEditor);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        TextEditor->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_4->menuAction());
        menu->addAction(actionOpen);
        menu->addSeparator();
        menu->addAction(actionNew);
        menu->addSeparator();
        menu->addAction(actionSave);
        menu->addAction(actionSaveAs);
        menu->addSeparator();
        menu->addAction(actionClose);
        menu->addSeparator();
        menu->addAction(actionExit);
        menu_2->addAction(actionSelectFont);
        menu_3->addAction(actionCut);
        menu_3->addSeparator();
        menu_3->addAction(actionCopy);
        menu_3->addSeparator();
        menu_3->addAction(actionPaste);
        menu_3->addSeparator();
        menu_3->addAction(actionUndo);
        menu_3->addSeparator();
        menu_3->addAction(actionRedo);
        menu_4->addAction(actionAbout);
        menu_4->addSeparator();
        menu_4->addAction(actionAboutQt);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addSeparator();
        toolBar->addAction(actionCut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);

        retranslateUi(TextEditor);

        QMetaObject::connectSlotsByName(TextEditor);
    } // setupUi

    void retranslateUi(QMainWindow *TextEditor)
    {
        TextEditor->setWindowTitle(QCoreApplication::translate("TextEditor", "TextEditor", nullptr));
        actionNew->setText(QCoreApplication::translate("TextEditor", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("TextEditor", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \320\264\320\276\320\272\321\203\320\265\320\275\321\202", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("TextEditor", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("TextEditor", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        actionClose->setToolTip(QCoreApplication::translate("TextEditor", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \321\202\320\265\320\272\321\203\321\211\320\265\320\265 \320\276\320\272\320\275\320\276", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionClose->setShortcut(QCoreApplication::translate("TextEditor", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("TextEditor", "\320\222\321\213\321\205\320\276\320\264", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("TextEditor", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSelectFont->setText(QCoreApplication::translate("TextEditor", "Select Font", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectFont->setToolTip(QCoreApplication::translate("TextEditor", "Select the display font", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCut->setText(QCoreApplication::translate("TextEditor", "Cut", nullptr));
#if QT_CONFIG(tooltip)
        actionCut->setToolTip(QCoreApplication::translate("TextEditor", "Cut", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("TextEditor", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("TextEditor", "About", nullptr));
        actionAboutQt->setText(QCoreApplication::translate("TextEditor", "About Qt", nullptr));
        actionCopy->setText(QCoreApplication::translate("TextEditor", "Copy", nullptr));
#if QT_CONFIG(tooltip)
        actionCopy->setToolTip(QCoreApplication::translate("TextEditor", "Copy", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("TextEditor", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("TextEditor", "Paste", nullptr));
#if QT_CONFIG(tooltip)
        actionPaste->setToolTip(QCoreApplication::translate("TextEditor", "Paste", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("TextEditor", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("TextEditor", "Undo", nullptr));
#if QT_CONFIG(tooltip)
        actionUndo->setToolTip(QCoreApplication::translate("TextEditor", "Undo the last action", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("TextEditor", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("TextEditor", "Redo", nullptr));
#if QT_CONFIG(tooltip)
        actionRedo->setToolTip(QCoreApplication::translate("TextEditor", "Redo the last action", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("TextEditor", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("TextEditor", "Open..", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("TextEditor", "Open a document", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("TextEditor", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("TextEditor", "Save", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("TextEditor", "Save document", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("TextEditor", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveAs->setText(QCoreApplication::translate("TextEditor", "Save As..", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveAs->setToolTip(QCoreApplication::translate("TextEditor", "Save document as", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSaveAs->setShortcut(QCoreApplication::translate("TextEditor", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        menu->setTitle(QCoreApplication::translate("TextEditor", "&\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("TextEditor", "\320\222\320\270\320\264", nullptr));
        menu_3->setTitle(QCoreApplication::translate("TextEditor", "\320\237\321\200\320\260\320\262\320\272\320\260", nullptr));
        menu_4->setTitle(QCoreApplication::translate("TextEditor", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("TextEditor", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextEditor: public Ui_TextEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTEDITOR_H
