#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QCloseEvent>

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

void MainWindow::closeEvent(QCloseEvent *event)
{
    if(QMessageBox::question(this,"Close","Do you want to close this application?")==QMessageBox::No){
        event->ignore(); //No close app
    }
}

void MainWindow::on_pbInfor_clicked()
{
    QMessageBox::information(this,"Infor","Xin chao cac ban!!");
}

void MainWindow::on_pbWarning_clicked()
{
    QMessageBox::warning(this,"Warning","Canh bao!!");
}

void MainWindow::on_pbCritical_clicked()
{
    QMessageBox::critical(this,"Critical","Critical!!",QMessageBox::Ok | QMessageBox::Cancel);
}


void MainWindow::on_pbQuestrion_clicked()
{
    if(QMessageBox::question(this,"Question","Hoi cai gi?", QMessageBox::Ok | QMessageBox::Cancel)==QMessageBox::Ok){
        this->setWindowTitle("Yes");
    }
    else{
        this->setWindowTitle("No");
    }
}
