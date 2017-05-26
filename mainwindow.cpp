#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

int sp;
int t;

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

void MainWindow::on_speeds_valueChanged(int value)
{
    sp=ui->speeds->value();
    QString s;
    s.setNum(sp);
    ui->speeds1->setText(s);
}

void MainWindow::on_go_clicked()
{
    QString wnd, lght, conc, s;
    t=ui->transfer->value();
    QString tr;
    tr.setNum(t);
        s.setNum(sp);
        if (sp==0)
            QMessageBox::information(0, "So,", "You are stop!!!!!\nCheck your speed!");
        else
        {
    if (ui->windows1->isChecked())
        wnd="Window is open;\n";
        else wnd="Window is close;\n";
    if (ui->lights1->isChecked())
        lght="Lights are switch on;\n";
        else lght="Lights are switch off;\n";
    conc=wnd+lght+"Transfer is "+tr+";\n"+"Speed is "+s;
    QMessageBox::information(0, "So,", conc);
        }
}

void MainWindow::on_exit_clicked()
{
   this->close();
}
