#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<setting.h>
#include<database.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    setting* dia = new setting(this);
    dia->setData(mData);
    dia->exec();
    mData = dia->data();
    update();
}


void MainWindow::update()
{
    ui->label->setText(mData.getStr());
}
