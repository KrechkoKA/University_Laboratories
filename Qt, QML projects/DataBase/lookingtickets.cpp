#include "lookingtickets.h"
#include "ui_lookingtickets.h"

LookingTickets::LookingTickets(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LookingTickets)
{
    ui->setupUi(this);

    openDataBase();
}

LookingTickets::~LookingTickets()
{
    delete ui;
}

void LookingTickets::openDataBase()
{
    dbase = QSqlDatabase::addDatabase("QSQLITE");
    dbase.setDatabaseName("./DB.db");

    if (!dbase.open())
        qDebug("open DataBase error");

    query = new QSqlQuery(dbase);

    model = new QSqlTableModel(this, dbase);
    model->setTable("DB");
    model->select();

    ui->tableView->setModel(model);
}

void LookingTickets::on_pushButtonBack_clicked()
{
    close();
}

