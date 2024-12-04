#ifndef ADDPASSENGERDIALOG_H
#define ADDPASSENGERDIALOG_H

#include <QDialog>

namespace Ui {
class AddPassengerDialog;
}

class AddPassengerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddPassengerDialog(QWidget *parent = nullptr);
    ~AddPassengerDialog();
    QString getName()const;
    int getAge()const;
    QString getIdentityCard()const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::AddPassengerDialog *ui;
};

#endif // ADDPASSENGERDIALOG_H
