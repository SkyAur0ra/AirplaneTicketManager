/********************************************************************************
** Form generated from reading UI file 'userinfowidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFOWIDGET_H
#define UI_USERINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInfoWidget
{
public:
    QTableWidget *Passenger_tableWidget;
    QLabel *label;
    QPushButton *addBtn;
    QPushButton *deleteBtn;

    void setupUi(QWidget *UserInfoWidget)
    {
        if (UserInfoWidget->objectName().isEmpty())
            UserInfoWidget->setObjectName("UserInfoWidget");
        UserInfoWidget->resize(641, 466);
        Passenger_tableWidget = new QTableWidget(UserInfoWidget);
        Passenger_tableWidget->setObjectName("Passenger_tableWidget");
        Passenger_tableWidget->setGeometry(QRect(130, 239, 350, 171));
        label = new QLabel(UserInfoWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 190, 91, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        addBtn = new QPushButton(UserInfoWidget);
        addBtn->setObjectName("addBtn");
        addBtn->setGeometry(QRect(130, 420, 71, 31));
        deleteBtn = new QPushButton(UserInfoWidget);
        deleteBtn->setObjectName("deleteBtn");
        deleteBtn->setGeometry(QRect(230, 420, 71, 31));

        retranslateUi(UserInfoWidget);

        QMetaObject::connectSlotsByName(UserInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *UserInfoWidget)
    {
        UserInfoWidget->setWindowTitle(QCoreApplication::translate("UserInfoWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("UserInfoWidget", "\345\270\270\347\224\250\344\271\230\345\256\242:", nullptr));
        addBtn->setText(QCoreApplication::translate("UserInfoWidget", "\346\267\273\345\212\240+", nullptr));
        deleteBtn->setText(QCoreApplication::translate("UserInfoWidget", "\345\210\240\351\231\244-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserInfoWidget: public Ui_UserInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFOWIDGET_H
