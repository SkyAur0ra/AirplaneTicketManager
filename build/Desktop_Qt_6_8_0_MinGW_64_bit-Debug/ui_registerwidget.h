/********************************************************************************
** Form generated from reading UI file 'registerwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWIDGET_H
#define UI_REGISTERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWidget
{
public:
    QLabel *setAccount_Label;
    QLabel *setPassword_Label;
    QLineEdit *setAccount_LineEdit;
    QLineEdit *setPassword_LineEdit;
    QLabel *accountRequire_Label;
    QLabel *passwordRequire_Label;
    QLabel *confirmPassword_Label;
    QLineEdit *confirmPassword_LineEdit;
    QPushButton *RegisterBtn1;
    QPushButton *CancelBtn1;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *RegisterWidget)
    {
        if (RegisterWidget->objectName().isEmpty())
            RegisterWidget->setObjectName("RegisterWidget");
        RegisterWidget->resize(600, 420);
        setAccount_Label = new QLabel(RegisterWidget);
        setAccount_Label->setObjectName("setAccount_Label");
        setAccount_Label->setGeometry(QRect(110, 100, 81, 31));
        QFont font;
        font.setPointSize(14);
        setAccount_Label->setFont(font);
        setPassword_Label = new QLabel(RegisterWidget);
        setPassword_Label->setObjectName("setPassword_Label");
        setPassword_Label->setGeometry(QRect(110, 170, 81, 31));
        setPassword_Label->setFont(font);
        setAccount_LineEdit = new QLineEdit(RegisterWidget);
        setAccount_LineEdit->setObjectName("setAccount_LineEdit");
        setAccount_LineEdit->setGeometry(QRect(210, 110, 161, 20));
        setPassword_LineEdit = new QLineEdit(RegisterWidget);
        setPassword_LineEdit->setObjectName("setPassword_LineEdit");
        setPassword_LineEdit->setGeometry(QRect(210, 180, 161, 20));
        accountRequire_Label = new QLabel(RegisterWidget);
        accountRequire_Label->setObjectName("accountRequire_Label");
        accountRequire_Label->setGeometry(QRect(380, 110, 181, 21));
        QFont font1;
        font1.setPointSize(10);
        accountRequire_Label->setFont(font1);
        passwordRequire_Label = new QLabel(RegisterWidget);
        passwordRequire_Label->setObjectName("passwordRequire_Label");
        passwordRequire_Label->setGeometry(QRect(380, 180, 111, 21));
        passwordRequire_Label->setFont(font1);
        confirmPassword_Label = new QLabel(RegisterWidget);
        confirmPassword_Label->setObjectName("confirmPassword_Label");
        confirmPassword_Label->setGeometry(QRect(110, 240, 71, 31));
        confirmPassword_Label->setFont(font);
        confirmPassword_LineEdit = new QLineEdit(RegisterWidget);
        confirmPassword_LineEdit->setObjectName("confirmPassword_LineEdit");
        confirmPassword_LineEdit->setGeometry(QRect(210, 250, 161, 20));
        RegisterBtn1 = new QPushButton(RegisterWidget);
        RegisterBtn1->setObjectName("RegisterBtn1");
        RegisterBtn1->setGeometry(QRect(130, 320, 101, 31));
        QFont font2;
        font2.setPointSize(12);
        RegisterBtn1->setFont(font2);
        CancelBtn1 = new QPushButton(RegisterWidget);
        CancelBtn1->setObjectName("CancelBtn1");
        CancelBtn1->setGeometry(QRect(320, 320, 101, 31));
        CancelBtn1->setFont(font2);
        label = new QLabel(RegisterWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 140, 111, 21));
        label_2 = new QLabel(RegisterWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 220, 101, 21));

        retranslateUi(RegisterWidget);

        QMetaObject::connectSlotsByName(RegisterWidget);
    } // setupUi

    void retranslateUi(QWidget *RegisterWidget)
    {
        RegisterWidget->setWindowTitle(QCoreApplication::translate("RegisterWidget", "Form", nullptr));
        setAccount_Label->setText(QCoreApplication::translate("RegisterWidget", "\350\256\276\347\275\256\350\264\246\345\217\267:", nullptr));
        setPassword_Label->setText(QCoreApplication::translate("RegisterWidget", "\350\256\276\347\275\256\345\257\206\347\240\201:", nullptr));
        accountRequire_Label->setText(QCoreApplication::translate("RegisterWidget", "6-11\344\275\215\346\225\260\345\255\227\343\200\201\345\244\247\345\260\217\345\206\231\345\255\227\346\257\215", nullptr));
        passwordRequire_Label->setText(QCoreApplication::translate("RegisterWidget", "\346\225\260\345\255\227\343\200\201\345\244\247\345\260\217\345\206\231\345\255\227\346\257\215", nullptr));
        confirmPassword_Label->setText(QCoreApplication::translate("RegisterWidget", "\347\241\256\350\256\244\345\257\206\347\240\201:", nullptr));
        RegisterBtn1->setText(QCoreApplication::translate("RegisterWidget", "\346\263\250\345\206\214", nullptr));
        CancelBtn1->setText(QCoreApplication::translate("RegisterWidget", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("RegisterWidget", "\350\264\246\345\217\267\344\270\215\347\254\246\345\220\210\350\246\201\346\261\202", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterWidget", "\345\257\206\347\240\201\344\270\215\347\254\246\345\220\210\350\246\201\346\261\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWidget: public Ui_RegisterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWIDGET_H
