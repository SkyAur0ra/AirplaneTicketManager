/********************************************************************************
** Form generated from reading UI file 'loginwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIDGET_H
#define UI_LOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWidget
{
public:
    QLabel *Account_Label;
    QLabel *Password_Label;
    QLineEdit *Account_LineEdit;
    QPushButton *LoginBtn;
    QPushButton *CancelBtn;
    QLabel *Register_Label;
    QLineEdit *Password_LineEdit;

    void setupUi(QWidget *LoginWidget)
    {
        if (LoginWidget->objectName().isEmpty())
            LoginWidget->setObjectName("LoginWidget");
        LoginWidget->resize(600, 400);
        Account_Label = new QLabel(LoginWidget);
        Account_Label->setObjectName("Account_Label");
        Account_Label->setGeometry(QRect(170, 130, 71, 41));
        QFont font;
        font.setPointSize(14);
        Account_Label->setFont(font);
        Password_Label = new QLabel(LoginWidget);
        Password_Label->setObjectName("Password_Label");
        Password_Label->setGeometry(QRect(170, 200, 71, 41));
        Password_Label->setFont(font);
        Account_LineEdit = new QLineEdit(LoginWidget);
        Account_LineEdit->setObjectName("Account_LineEdit");
        Account_LineEdit->setGeometry(QRect(240, 140, 161, 20));
        LoginBtn = new QPushButton(LoginWidget);
        LoginBtn->setObjectName("LoginBtn");
        LoginBtn->setGeometry(QRect(160, 290, 91, 31));
        QFont font1;
        font1.setPointSize(12);
        LoginBtn->setFont(font1);
        CancelBtn = new QPushButton(LoginWidget);
        CancelBtn->setObjectName("CancelBtn");
        CancelBtn->setGeometry(QRect(360, 290, 91, 31));
        CancelBtn->setFont(font1);
        Register_Label = new QLabel(LoginWidget);
        Register_Label->setObjectName("Register_Label");
        Register_Label->setGeometry(QRect(290, 250, 181, 21));
        QFont font2;
        font2.setPointSize(10);
        Register_Label->setFont(font2);
        Password_LineEdit = new QLineEdit(LoginWidget);
        Password_LineEdit->setObjectName("Password_LineEdit");
        Password_LineEdit->setGeometry(QRect(240, 210, 161, 20));
        Password_LineEdit->setCursor(QCursor(Qt::CursorShape::SizeVerCursor));
        Password_LineEdit->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        retranslateUi(LoginWidget);

        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginWidget)
    {
        LoginWidget->setWindowTitle(QCoreApplication::translate("LoginWidget", "Form", nullptr));
        Account_Label->setText(QCoreApplication::translate("LoginWidget", "\350\264\246\345\217\267:", nullptr));
        Password_Label->setText(QCoreApplication::translate("LoginWidget", "\345\257\206\347\240\201:", nullptr));
        LoginBtn->setText(QCoreApplication::translate("LoginWidget", "\347\231\273\345\275\225", nullptr));
        CancelBtn->setText(QCoreApplication::translate("LoginWidget", "\345\217\226\346\266\210", nullptr));
        Register_Label->setText(QCoreApplication::translate("LoginWidget", "\350\277\230\346\262\241\346\234\211\350\264\246\345\217\267\357\274\237\345\277\253\346\235\245\346\263\250\345\206\214\344\270\200\344\270\252", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
