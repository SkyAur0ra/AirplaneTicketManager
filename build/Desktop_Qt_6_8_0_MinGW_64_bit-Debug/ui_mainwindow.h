/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *sidebar;
    QGridLayout *gridLayout_2;
    QToolButton *loginBtn;
    QSpacerItem *verticalSpacer;
    QToolButton *orderBtn;
    QToolButton *userInfoBtn;
    QToolButton *mainBtn;
    QStackedWidget *stackedWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 550);
        MainWindow->setTabShape(QTabWidget::TabShape::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        sidebar = new QWidget(centralwidget);
        sidebar->setObjectName("sidebar");
        sidebar->setStyleSheet(QString::fromUtf8("background-color: rgb(228, 228, 228);"));
        gridLayout_2 = new QGridLayout(sidebar);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        loginBtn = new QToolButton(sidebar);
        loginBtn->setObjectName("loginBtn");
        QFont font;
        font.setPointSize(14);
        loginBtn->setFont(font);
        loginBtn->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"              border-top: 3px outset transparent;\n"
"              border-bottom: 7px outset transparent;\n"
"              border-right: 30px outset transparent;\n"
"              border-left: 20px outset transparent;\n"
"\n"
"              background-color: rgb(228, 228, 228);\n"
"        }\n"
"\n"
"        /* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"        QToolButton:hover{\n"
"              background-color: rgb(205, 205, 205);\n"
"        }\n"
"\n"
"        /* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"        QToolButton:pressed,QToolButton:checked{\n"
"              background-color: rgb(246, 246, 246);\n"
"        }\n"
"\n"
"        QPushButton:default {\n"
"          border-color: navy; /* make the default button prominent */\n"
"        }"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::SystemLogOut));
        loginBtn->setIcon(icon);
        loginBtn->setIconSize(QSize(25, 25));
        loginBtn->setCheckable(true);
        loginBtn->setAutoExclusive(true);
        loginBtn->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        gridLayout_2->addWidget(loginBtn, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 0, 1, 1);

        orderBtn = new QToolButton(sidebar);
        orderBtn->setObjectName("orderBtn");
        orderBtn->setFont(font);
        orderBtn->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        orderBtn->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"              border-top: 3px outset transparent;\n"
"              border-bottom: 7px outset transparent;\n"
"              border-right: 30px outset transparent;\n"
"              border-left: 20px outset transparent;\n"
"\n"
"              background-color: rgb(228, 228, 228);\n"
"        }\n"
"\n"
"        /* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"        QToolButton:hover{\n"
"              background-color: rgb(205, 205, 205);\n"
"        }\n"
"\n"
"        /* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"        QToolButton:pressed,QToolButton:checked{\n"
"              background-color: rgb(246, 246, 246);\n"
"        }\n"
"\n"
"        QPushButton:default {\n"
"          border-color: navy; /* make the default button prominent */\n"
"        }"));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentNew));
        orderBtn->setIcon(icon1);
        orderBtn->setIconSize(QSize(25, 25));
        orderBtn->setCheckable(true);
        orderBtn->setAutoRepeat(false);
        orderBtn->setAutoExclusive(true);
        orderBtn->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);
        orderBtn->setAutoRaise(false);

        gridLayout_2->addWidget(orderBtn, 1, 0, 1, 1);

        userInfoBtn = new QToolButton(sidebar);
        userInfoBtn->setObjectName("userInfoBtn");
        userInfoBtn->setFont(font);
        userInfoBtn->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"              border-top: 3px outset transparent;\n"
"              border-bottom: 7px outset transparent;\n"
"              border-right: 30px outset transparent;\n"
"              border-left: 20px outset transparent;\n"
"\n"
"              background-color: rgb(228, 228, 228);\n"
"        }\n"
"\n"
"        /* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"        QToolButton:hover{\n"
"              background-color: rgb(205, 205, 205);\n"
"        }\n"
"\n"
"        /* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"        QToolButton:pressed,QToolButton:checked{\n"
"              background-color: rgb(246, 246, 246);\n"
"        }\n"
"\n"
"        QPushButton:default {\n"
"          border-color: navy; /* make the default button prominent */\n"
"        }"));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::AddressBookNew));
        userInfoBtn->setIcon(icon2);
        userInfoBtn->setIconSize(QSize(25, 25));
        userInfoBtn->setCheckable(true);
        userInfoBtn->setAutoExclusive(true);
        userInfoBtn->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        gridLayout_2->addWidget(userInfoBtn, 3, 0, 1, 1);

        mainBtn = new QToolButton(sidebar);
        mainBtn->setObjectName("mainBtn");
        mainBtn->setFont(font);
        mainBtn->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"              border-top: 3px outset transparent;\n"
"              border-bottom: 7px outset transparent;\n"
"              border-right: 30px outset transparent;\n"
"              border-left: 20px outset transparent;\n"
"\n"
"              background-color: rgb(228, 228, 228);\n"
"        }\n"
"\n"
"        /* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"        QToolButton:hover{\n"
"              background-color: rgb(205, 205, 205);\n"
"        }\n"
"\n"
"        /* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"        QToolButton:pressed,QToolButton:checked{\n"
"    			background-color: rgb(246, 246, 246);\n"
"        }\n"
"\n"
"        QPushButton:default {\n"
"          border-color: navy; /* make the default button prominent */\n"
"        }"));
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::GoHome));
        mainBtn->setIcon(icon3);
        mainBtn->setIconSize(QSize(25, 25));
        mainBtn->setCheckable(true);
        mainBtn->setAutoExclusive(true);
        mainBtn->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        gridLayout_2->addWidget(mainBtn, 0, 0, 1, 1);


        gridLayout->addWidget(sidebar, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");

        gridLayout->addWidget(stackedWidget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        loginBtn->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        orderBtn->setText(QCoreApplication::translate("MainWindow", "\350\241\214\347\250\213", nullptr));
        userInfoBtn->setText(QCoreApplication::translate("MainWindow", "\346\210\221\347\232\204", nullptr));
        mainBtn->setText(QCoreApplication::translate("MainWindow", "\344\270\273\351\241\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
