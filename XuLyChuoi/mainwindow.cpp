#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString str1 = "Hello Everyone";
    QString str2 = QString(3,'T');
    QString str3;
    QString str4 = QString("");
//    this->setWindowTitle(str1);
    qDebug() << str1;
    qDebug() <<str2;
    qDebug() << "Kiem tra kich thuoc chuoi";
    qDebug()<<str1.size();
    qDebug() <<str2.length();

    qDebug() << "Kiem tra chuoi co Empty ko";
    qDebug() <<str1.isEmpty();
    qDebug() <<str2.isEmpty();
    qDebug() <<str3.isEmpty(); //->true
    qDebug() <<str4.isEmpty(); //->true

    qDebug() << "Kiem tra chuoi co NULL ko";
    qDebug() <<str1.isNull();
    qDebug() <<str2.isNull();
    qDebug() <<str3.isNull(); //->true
    qDebug() <<str4.isNull(); //->false ""

    qDebug() << "Kiem tra chuoi co bat dau bang mot chuoi hay khong";
    qDebug() << str1.startsWith("Hello");
    qDebug() << str1.startsWith("Hello ");
    qDebug() << str1.startsWith("Hello E");
    qDebug() << str1.startsWith("Hello  ");
    qDebug() << str2.startsWith("Hello");

    qDebug() << "Kiem tra chuoi co ket thuc bang mot chuoi hay khong";
    qDebug() << str1.endsWith("Everyone");
    qDebug() << str2.endsWith("Hello");

    qDebug() << "Kiem tra chuoi co chua chuoi con nao hay khong";
    qDebug() << str1.contains("Hello");
    qDebug() << str1.contains("Hell");

    qDebug() << "Xoa n ky tu o cuoi chuoi va xoa het mot chuoi";
    str1.chop(2);
    qDebug() << str1;

    str1.clear();
    qDebug() << str1;
    qDebug() << str1.isEmpty();
    qDebug() << str1.isNull();

    qDebug() << "Xoa n ky tu o chuoi chuoi";
    str1 = "Hello Everone";
    str1.truncate(6);
    qDebug() << str1;

    qDebug() << "Ghep chuoi";
    QString str = str1 + str2;
    qDebug() << str;

    qDebug() << "Them mot chuoi vao dang sau va truoc mot chuoi khac";
    str1. append("Tri"); // them dang sau
    qDebug() << str1;
    str1.prepend("Hi "); // them dang truoc
    qDebug() << str1;

    qDebug() << "Doi chu thuong sang chu in HOA\n. Chu y la hai ham toLower() va toUpper() chi tra ve ket qua va khong anh huong den chuoi ban dau";
    qDebug() << str1.toLower();
    qDebug() << str1.toUpper();
    qDebug() << str1;

}

MainWindow::~MainWindow()
{
    delete ui;
}
