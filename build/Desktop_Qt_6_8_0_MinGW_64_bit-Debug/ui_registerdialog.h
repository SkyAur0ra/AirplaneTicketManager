/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QLabel *setAccount_Label;
    QLabel *setPassword_Label;
    QLabel *confirmPassword_Label;
    QLineEdit *setAccount_LineEdit;
    QLineEdit *setPassword_LineEdit;
    QLineEdit *confirmPassword_LineEdit;
    QPushButton *RegisterBtn1;
    QPushButton *CancelBtn1;
    QLabel *accountRequire_Label;
    QLabel *passwordRequire_Label;
    QLabel *accountUnmatch_Label;
    QLabel *passwordUnmatch_Label;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName("RegisterDialog");
        RegisterDialog->resize(600, 400);
        setAccount_Label = new QLabel(RegisterDialog);
        setAccount_Label->setObjectName("setAccount_Label");
        setAccount_Label->setGeometry(QRect(110, 90, 91, 41));
        QFont font;
        font.setPointSize(14);
        setAccount_Label->setFont(font);
        setPassword_Label = new QLabel(RegisterDialog);
        setPassword_Label->setObjectName("setPassword_Label");
        setPassword_Label->setGeometry(QRect(110, 150, 91, 41));
        setPassword_Label->setFont(font);
        confirmPassword_Label = new QLabel(RegisterDialog);
        confirmPassword_Label->setObjectName("confirmPassword_Label");
        confirmPassword_Label->setGeometry(QRect(110, 220, 91, 41));
        confirmPassword_Label->setFont(font);
        setAccount_LineEdit = new QLineEdit(RegisterDialog);
        setAccount_LineEdit->setObjectName("setAccount_LineEdit");
        setAccount_LineEdit->setGeometry(QRect(240, 100, 171, 20));
        setPassword_LineEdit = new QLineEdit(RegisterDialog);
        setPassword_LineEdit->setObjectName("setPassword_LineEdit");
        setPassword_LineEdit->setGeometry(QRect(240, 160, 171, 20));
        confirmPassword_LineEdit = new QLineEdit(RegisterDialog);
        confirmPassword_LineEdit->setObjectName("confirmPassword_LineEdit");
        confirmPassword_LineEdit->setGeometry(QRect(240, 230, 171, 20));
        RegisterBtn1 = new QPushButton(RegisterDialog);
        RegisterBtn1->setObjectName("RegisterBtn1");
        RegisterBtn1->setGeometry(QRect(160, 320, 101, 31));
        RegisterBtn1->setFont(font);
        CancelBtn1 = new QPushButton(RegisterDialog);
        CancelBtn1->setObjectName("CancelBtn1");
        CancelBtn1->setGeometry(QRect(350, 320, 101, 31));
        CancelBtn1->setFont(font);
        accountRequire_Label = new QLabel(RegisterDialog);
        accountRequire_Label->setObjectName("accountRequire_Label");
        accountRequire_Label->setGeometry(QRect(440, 100, 141, 21));
        passwordRequire_Label = new QLabel(RegisterDialog);
        passwordRequire_Label->setObjectName("passwordRequire_Label");
        passwordRequire_Label->setGeometry(QRect(440, 160, 131, 21));
        accountUnmatch_Label = new QLabel(RegisterDialog);
        accountUnmatch_Label->setObjectName("accountUnmatch_Label");
        accountUnmatch_Label->setGeometry(QRect(240, 130, 81, 21));
        passwordUnmatch_Label = new QLabel(RegisterDialog);
        passwordUnmatch_Label->setObjectName("passwordUnmatch_Label");
        passwordUnmatch_Label->setGeometry(QRect(240, 200, 81, 21));

        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "Dialog", nullptr));
        setAccount_Label->setText(QCoreApplication::translate("RegisterDialog", "\350\256\276\347\275\256\350\264\246\345\217\267:", nullptr));
        setPassword_Label->setText(QCoreApplication::translate("RegisterDialog", "\350\256\276\347\275\256\345\257\206\347\240\201:", nullptr));
        confirmPassword_Label->setText(QCoreApplication::translate("RegisterDialog", "\347\241\256\350\256\244\345\257\206\347\240\201:", nullptr));
        RegisterBtn1->setText(QCoreApplication::translate("RegisterDialog", "\346\263\250\345\206\214", nullptr));
        CancelBtn1->setText(QCoreApplication::translate("RegisterDialog", "\345\217\226\346\266\210", nullptr));
        accountRequire_Label->setText(QCoreApplication::translate("RegisterDialog", "6-11\344\275\215\346\225\260\345\255\227\343\200\201\345\244\247\345\260\217\345\206\231\345\255\227\346\257\215", nullptr));
        passwordRequire_Label->setText(QCoreApplication::translate("RegisterDialog", "\346\225\260\345\255\227\343\200\201\345\244\247\345\260\217\345\206\231\345\255\227\346\257\215", nullptr));
        accountUnmatch_Label->setText(QCoreApplication::translate("RegisterDialog", "\350\264\246\345\217\267\344\270\215\347\254\246\345\220\210\350\246\201\346\261\202", nullptr));
        passwordUnmatch_Label->setText(QCoreApplication::translate("RegisterDialog", "\345\257\206\347\240\201\344\270\215\347\254\246\345\220\210\350\246\201\346\261\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
