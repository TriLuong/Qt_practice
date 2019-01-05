#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pbExit,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->pbStart,SIGNAL(clicked()),this,SLOT(displayText()));
}

void MainWindow::displayText()
{
    ui->lb1->setText("Hello Word!!!");
}
MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::on_pbStart_clicked()
//{
//    ui->lb1->setText("Hello Word");
//}
