#ifndef INTERFACE_H
#define INTERFACE_H

#include <QMainWindow>
#include "fsin.h"
#include "fsi.h"
#include "complex.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Interface;
}
QT_END_NAMESPACE

class Interface : public QMainWindow
{
    Q_OBJECT

public:
    Interface(QWidget *parent = nullptr);
    ~Interface();

private slots:
    void on_do_but_clicked();

private:
    Ui::Interface *ui;
};
#endif // INTERFACE_H
