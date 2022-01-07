#include "deleteticket.h"
#include "ui_deleteticket.h"
#include <QMessageBox>

DeleteTicket::DeleteTicket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteTicket)
{
    ui->setupUi(this);
}

DeleteTicket::~DeleteTicket()
{
    delete ui;
}

void DeleteTicket::on_pushButtonBack_clicked()
{
    close();
}

void DeleteTicket::on_pushButtonDelete_clicked()
{
    QString passport = ui->lineEditPassport->text();

    dbase = QSqlDatabase::addDatabase("QSQLITE");
    dbase.setDatabaseName("./DB.db");

    if (!dbase.open())
        qDebug("open DataBase error");

    query = new QSqlQuery(dbase);

    if (query->exec("DELETE FROM DB WHERE passportNumber = '"+passport+"'") && passport != "")
        QMessageBox::information(this, "Успех", "Пассажир успешно удален!");
    else
        QMessageBox::information(this, "Ошибка", "Такого пассажира нет!");
}

