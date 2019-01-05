#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void on_pbInfor_clicked();

    void on_pbWarning_clicked();

    void on_pbCritical_clicked();

    void on_pbQuestrion_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
