#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

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

void MainWindow::on_pbCal_clicked()
{
    double a,b,result;
    a = ui->lEa->text().toDouble();
    b = ui->lEb->text().toDouble();
    result = a + b;
    ui->lbResult->setText(QString("%1").arg(result));
}
