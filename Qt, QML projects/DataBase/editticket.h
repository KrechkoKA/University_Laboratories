#ifndef EDITTICKET_H
#define EDITTICKET_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>

namespace Ui {
class EditTicket;
}

class EditTicket : public QDialog
{
    Q_OBJECT

public:
    explicit EditTicket(QWidget *parent = nullptr);
    ~EditTicket();

private slots:
    void on_pushButtonBack_clicked();

    void on_pushButtonEdit_clicked();

private:
    Ui::EditTicket *ui;

    QSqlDatabase dbase;
    QSqlQuery *query;
    QSqlTableModel *model;
};

#endif // EDITTICKET_H
