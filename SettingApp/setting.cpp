#include "setting.h"
#include "ui_setting.h"

setting::setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setting)
{
    ui->setupUi(this);
}

setting::~setting()
{
    delete ui;
}

void setting::on_cancel_clicked()
{
    reject();
}


void setting::on_save_clicked()
{
    mData.setStr(ui->lineEdit->text());
    accept();

}

const database &setting::data() const
{
    return mData;
}

void setting::setData(const database &newData)
{
    mData = newData;
    ui->lineEdit->setText(mData.getStr());
}


