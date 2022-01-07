#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QDialog>
#include "lookingtickets.h"
#include "deleteticket.h"
#include "editticket.h"

namespace Ui {
class MenuWindow;
}

class MenuWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MenuWindow(QWidget *parent = nullptr);
    ~MenuWindow();

private slots:
    void on_pushButtonBack_clicked();
    void on_pushButtonLookingTickets_clicked();

    void on_pushButtonDelete_clicked();

    void on_pushButtonEdit_clicked();

private:
    Ui::MenuWindow *ui;

    LookingTickets *lookingTicketsWindow;
    DeleteTicket *deleteTicketWindow;
    EditTicket *editTicketWindow;
};

#endif // MENUWINDOW_H
