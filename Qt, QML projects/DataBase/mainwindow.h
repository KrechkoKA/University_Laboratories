#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include "menuwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_pushButtonOrderTicket_clicked();

    void on_pushButtonExit_clicked();

private:
    Ui::MainWindow *ui;

    MenuWindow *menuWindow;

    QSqlDatabase dbase;
    QSqlQuery *query;
    QSqlTableModel *model;
};
#endif // MAINWINDOW_H
