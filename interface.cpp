#include "interface.h"
#include "ui_interface.h"

Interface::Interface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Interface)
{
    ui->setupUi(this);
}

Interface::~Interface()
{
    delete ui;
}

void Interface::on_do_but_clicked()
{
    if(ui->sin_but->isChecked())
    {
        int accur = ui->accure_edit->text().toInt();

        Fsin<complex> sin_func(accur);
        QString s;

        s += "p";
        s << complex(ui->re_edit->text().toDouble(), ui->im_edit->text().toDouble());
        s += " = ";
        s << sin_func(complex(ui->re_edit->text().toDouble(), ui->im_edit->text().toDouble()));

        ui->res_line->setText(s);
    }
    else if(ui->si_but->isChecked())
    {
        int accur = ui->accure_edit->text().toInt();

        FSi<complex> si_func(accur);
        QString s;

        s += "p";
        s << complex(ui->re_edit->text().toDouble(), ui->im_edit->text().toDouble());
        s += " = ";
        s << si_func(complex(ui->re_edit->text().toDouble(), ui->im_edit->text().toDouble()));

        ui->res_line->setText(s);
    }
}

