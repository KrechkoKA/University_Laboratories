#ifndef LOOKINGTICKETS_H
#define LOOKINGTICKETS_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>

namespace Ui {
class LookingTickets;
}

class LookingTickets : public QDialog
{
    Q_OBJECT

public:
    explicit LookingTickets(QWidget *parent = nullptr);
    ~LookingTickets();

private slots:
    void on_pushButtonBack_clicked();

private:
    Ui::LookingTickets *ui;

    void openDataBase();

    QSqlDatabase dbase;
    QSqlQuery *query;
    QSqlTableModel *model;
};

#endif // LOOKINGTICKETS_H
