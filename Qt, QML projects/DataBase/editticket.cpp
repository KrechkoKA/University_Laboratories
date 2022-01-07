#include "editticket.h"
#include "ui_editticket.h"
#include <QMessageBox>

EditTicket::EditTicket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditTicket)
{
    ui->setupUi(this);
}

EditTicket::~EditTicket()
{
    delete ui;
}

void EditTicket::on_pushButtonBack_clicked()
{
    close();
}

void EditTicket::on_pushButtonEdit_clicked()
{
    QString passport = ui->lineEditPassport->text();

    QString firstname = ui->lineEditFirstname->text();
    QString lastname = ui->lineEditLastName->text();
    QString patronymic = ui->lineEditPatronymic->text();
    QString raceNumber = ui->lineEditRaceNumber->text();
    QString dateOfFlight = ui->lineEditDateOfFligth->text();

    dbase = QSqlDatabase::addDatabase("QSQLITE");
    dbase.setDatabaseName("./DB.db");

    if (!dbase.open())
        qDebug("open DataBase error");

    query = new QSqlQuery(dbase);

    if (query->exec("UPDATE DB SET firstname = '"+firstname+"' WHERE passportNumber = '"+passport+"'")) {
        QMessageBox::information(this, "Успех", "Пассажир успешно изменен!");
        query->exec("UPDATE DB SET lastname = '"+lastname+"' WHERE passportNumber = '"+passport+"'");
        query->exec("UPDATE DB SET patronymic = '"+patronymic+"' WHERE passportNumber = '"+passport+"'");
        query->exec("UPDATE DB SET raceNumber = '"+raceNumber+"' WHERE passportNumber = '"+passport+"'");
        query->exec("UPDATE DB SET dateOfFlight = '"+dateOfFlight+"' WHERE passportNumber = '"+passport+"'");
    }
    else
        QMessageBox::information(this, "Ошибка", "Такого пассажира нет!");
}

