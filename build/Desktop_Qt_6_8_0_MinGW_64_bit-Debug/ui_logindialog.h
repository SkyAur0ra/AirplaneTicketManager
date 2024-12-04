/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *Account_Label;
    QLabel *Password_Label;
    QPushButton *LoginBtn;
    QPushButton *CancelBtn;
    QLabel *Register_Label;
    QLineEdit *Account_LineEdit;
    QLineEdit *Password_LineEdit;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(600, 400);
        Account_Label = new QLabel(LoginDialog);
        Account_Label->setObjectName("Account_Label");
        Account_Label->setGeometry(QRect(150, 110, 61, 41));
        QFont font;
        font.setPointSize(14);
        Account_Label->setFont(font);
        Password_Label = new QLabel(LoginDialog);
        Password_Label->setObjectName("Password_Label");
        Password_Label->setGeometry(QRect(150, 180, 61, 61));
        Password_Label->setFont(font);
        LoginBtn = new QPushButton(LoginDialog);
        LoginBtn->setObjectName("LoginBtn");
        LoginBtn->setGeometry(QRect(160, 290, 91, 31));
        LoginBtn->setFont(font);
        CancelBtn = new QPushButton(LoginDialog);
        CancelBtn->setObjectName("CancelBtn");
        CancelBtn->setGeometry(QRect(330, 290, 91, 31));
        CancelBtn->setFont(font);
        Register_Label = new QLabel(LoginDialog);
        Register_Label->setObjectName("Register_Label");
        Register_Label->setGeometry(QRect(340, 250, 191, 21));
        Account_LineEdit = new QLineEdit(LoginDialog);
        Account_LineEdit->setObjectName("Account_LineEdit");
        Account_LineEdit->setGeometry(QRect(230, 120, 171, 20));
        Password_LineEdit = new QLineEdit(LoginDialog);
        Password_LineEdit->setObjectName("Password_LineEdit");
        Password_LineEdit->setGeometry(QRect(230, 200, 171, 20));
        QWidget::setTabOrder(Account_LineEdit, Password_LineEdit);
        QWidget::setTabOrder(Password_LineEdit, LoginBtn);
        QWidget::setTabOrder(LoginBtn, CancelBtn);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        Account_Label->setText(QCoreApplication::translate("LoginDialog", "\350\264\246\345\217\267:", nullptr));
        Password_Label->setText(QCoreApplication::translate("LoginDialog", "\345\257\206\347\240\201:", nullptr));
        LoginBtn->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        CancelBtn->setText(QCoreApplication::translate("LoginDialog", "\345\217\226\346\266\210", nullptr));
        Register_Label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
