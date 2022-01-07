#ifndef DELETETICKET_H
#define DELETETICKET_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>

namespace Ui {
class DeleteTicket;
}

class DeleteTicket : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteTicket(QWidget *parent = nullptr);
    ~DeleteTicket();

private slots:
    void on_pushButtonBack_clicked();

    void on_pushButtonDelete_clicked();

private:
    Ui::DeleteTicket *ui;

    QSqlDatabase dbase;
    QSqlQuery *query;
    QSqlTableModel *model;
};

#endif // DELETETICKET_H
