#ifndef SETTING_H
#define SETTING_H
#include<database.h>
#include <QDialog>

namespace Ui {
class setting;
}

class setting : public QDialog
{
    Q_OBJECT

public:
    explicit setting(QWidget *parent = nullptr);
    ~setting();
    const database &data() const;
    void setData(const database &newData);
private slots:
    void on_cancel_clicked();

    void on_save_clicked();

private:
    Ui::setting *ui;
    database mData;
};

#endif // SETTING_H
