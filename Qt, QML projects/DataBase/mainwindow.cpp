#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonOrderTicket_clicked()
{
    QString passportNumber = ui->lineEditPassportNumber->text();
    QString lastname = ui->lineEditLastname->text();
    QString firstname = ui->lineEditFirstName->text();
    QString patronymic = ui->lineEditPatronymic->text();
    QString raceNumber = ui->lineEditRaceNumber->text();
    QString dateOfFligth = ui->lineEditDateofFligth->text();

    if (!passportNumber.isEmpty() &&
        !lastname.isEmpty() &&
        !firstname.isEmpty() &&
        !patronymic.isEmpty() &&
        !raceNumber.isEmpty() &&
        !dateOfFligth.isEmpty())
            QMessageBox::information(this, "Успех", "Вы успешно забронировали билет!");
    else {
        QMessageBox::warning(this, "Error", "Заполните все поля");
        return;
    }

    // запись в базу данных

    dbase = QSqlDatabase::addDatabase("QSQLITE");
    dbase.setDatabaseName("./DB.db");

    if (!dbase.open())
        qDebug("open DataBase error");

    query = new QSqlQuery(dbase);

    model = new QSqlTableModel(this, dbase);
    model->setTable("DB");
    model->select();

    QString str = "CREATE TABLE DB(passportNumber TEXT PRIMARY KEY NOT NULL UNIQUE, lastname TEXT, firstname TEXT, patronymic TEXT, raceNumber TEXT, dateOfFligth TEXT);";

    if (!query->exec(str))
        qDebug() << "Вроде не удается создать таблицу, возможно она уже создана!";

    QString str_insert = "INSERT INTO DB(passportNumber, lastname, firstname, patronymic, raceNumber, dateOfFligth) "
    "VALUES ('%1', '%2', '%3', '%4', '%5', '%6');";
    str = str_insert
            .arg(passportNumber)
            .arg(lastname)
            .arg(firstname)
            .arg(patronymic)
            .arg(raceNumber)
            .arg(dateOfFligth);

    if (!query->exec(str))
        qDebug() << "Кажется данные не вставляются, проверьте дверь, может она закрыта?";

    dbase.close();

    // переход на следующий экран
    menuWindow = new MenuWindow(this);
    menuWindow->show();
}

void MainWindow::on_pushButtonExit_clicked()
{
    close();
}

