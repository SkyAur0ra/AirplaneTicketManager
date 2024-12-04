/********************************************************************************
** Form generated from reading UI file 'addpassengerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPASSENGERDIALOG_H
#define UI_ADDPASSENGERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddPassengerDialog
{
public:
    QLabel *Name_Label;
    QLabel *Age_Label;
    QLabel *IdentityCard_Label;
    QLineEdit *Name_LineEdit;
    QLineEdit *Age_LineEdit;
    QLineEdit *IdentityCard_LineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddPassengerDialog)
    {
        if (AddPassengerDialog->objectName().isEmpty())
            AddPassengerDialog->setObjectName("AddPassengerDialog");
        AddPassengerDialog->resize(499, 366);
        Name_Label = new QLabel(AddPassengerDialog);
        Name_Label->setObjectName("Name_Label");
        Name_Label->setGeometry(QRect(120, 90, 61, 41));
        QFont font;
        font.setPointSize(14);
        Name_Label->setFont(font);
        Age_Label = new QLabel(AddPassengerDialog);
        Age_Label->setObjectName("Age_Label");
        Age_Label->setGeometry(QRect(120, 150, 61, 51));
        Age_Label->setFont(font);
        IdentityCard_Label = new QLabel(AddPassengerDialog);
        IdentityCard_Label->setObjectName("IdentityCard_Label");
        IdentityCard_Label->setGeometry(QRect(120, 220, 61, 61));
        IdentityCard_Label->setFont(font);
        Name_LineEdit = new QLineEdit(AddPassengerDialog);
        Name_LineEdit->setObjectName("Name_LineEdit");
        Name_LineEdit->setGeometry(QRect(190, 100, 131, 20));
        Age_LineEdit = new QLineEdit(AddPassengerDialog);
        Age_LineEdit->setObjectName("Age_LineEdit");
        Age_LineEdit->setGeometry(QRect(190, 170, 131, 20));
        IdentityCard_LineEdit = new QLineEdit(AddPassengerDialog);
        IdentityCard_LineEdit->setObjectName("IdentityCard_LineEdit");
        IdentityCard_LineEdit->setGeometry(QRect(190, 240, 131, 20));
        buttonBox = new QDialogButtonBox(AddPassengerDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(150, 280, 164, 41));
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        buttonBox->setCenterButtons(false);

        retranslateUi(AddPassengerDialog);

        QMetaObject::connectSlotsByName(AddPassengerDialog);
    } // setupUi

    void retranslateUi(QDialog *AddPassengerDialog)
    {
        AddPassengerDialog->setWindowTitle(QCoreApplication::translate("AddPassengerDialog", "Dialog", nullptr));
        Name_Label->setText(QCoreApplication::translate("AddPassengerDialog", "\345\247\223\345\220\215:", nullptr));
        Age_Label->setText(QCoreApplication::translate("AddPassengerDialog", "\345\271\264\351\276\204:", nullptr));
        IdentityCard_Label->setText(QCoreApplication::translate("AddPassengerDialog", "\350\257\201\344\273\266\345\217\267:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPassengerDialog: public Ui_AddPassengerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPASSENGERDIALOG_H
