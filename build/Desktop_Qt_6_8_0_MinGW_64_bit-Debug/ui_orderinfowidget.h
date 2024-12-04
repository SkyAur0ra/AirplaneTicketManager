/********************************************************************************
** Form generated from reading UI file 'orderinfowidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERINFOWIDGET_H
#define UI_ORDERINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderInfoWidget
{
public:
    QLabel *label;

    void setupUi(QWidget *OrderInfoWidget)
    {
        if (OrderInfoWidget->objectName().isEmpty())
            OrderInfoWidget->setObjectName("OrderInfoWidget");
        OrderInfoWidget->resize(400, 300);
        label = new QLabel(OrderInfoWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 70, 41, 16));

        retranslateUi(OrderInfoWidget);

        QMetaObject::connectSlotsByName(OrderInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *OrderInfoWidget)
    {
        OrderInfoWidget->setWindowTitle(QCoreApplication::translate("OrderInfoWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("OrderInfoWidget", "\350\241\214\347\250\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderInfoWidget: public Ui_OrderInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERINFOWIDGET_H
