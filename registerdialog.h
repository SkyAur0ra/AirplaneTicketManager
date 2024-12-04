#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QDialog>

namespace Ui {
class RegisterDialog;
}

class RegisterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterDialog(QWidget *parent = nullptr);
    ~RegisterDialog();

private slots:
    void on_RegisterBtn1_clicked();

    void on_CancelBtn1_clicked();

    void on_setAccount_LineEdit_textChanged(const QString &arg1);

    void on_setPassword_LineEdit_textChanged(const QString &arg1);

private:
    Ui::RegisterDialog *ui;
};

#endif // REGISTERDIALOG_H
