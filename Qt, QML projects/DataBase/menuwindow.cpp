#include "menuwindow.h"
#include "ui_menuwindow.h"

MenuWindow::MenuWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuWindow)
{
    ui->setupUi(this);
}

MenuWindow::~MenuWindow()
{
    delete ui;
}

void MenuWindow::on_pushButtonBack_clicked()
{
    close();
}

void MenuWindow::on_pushButtonLookingTickets_clicked()
{
    lookingTicketsWindow = new LookingTickets(this);
    lookingTicketsWindow->show();
}

void MenuWindow::on_pushButtonDelete_clicked()
{
    deleteTicketWindow = new DeleteTicket(this);
    deleteTicketWindow->show();
}

void MenuWindow::on_pushButtonEdit_clicked()
{
    editTicketWindow = new EditTicket(this);
    editTicketWindow->show();
}

