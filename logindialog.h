#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "registerdialog.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

private slots:
    void on_Register_Label_linkActivated(const QString &link);

    void on_CancelBtn_clicked();

    void on_LoginBtn_clicked();

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
