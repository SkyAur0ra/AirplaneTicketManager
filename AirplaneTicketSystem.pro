QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addpassengerdialog.cpp \
    database.cpp \
    dbconnector.cpp \
    global.cpp \
    logindialog.cpp \
    main.cpp \
    mainwidget.cpp \
    mainwindow.cpp \
    orderinfowidget.cpp \
    registerdialog.cpp \
    userinfowidget.cpp

HEADERS += \
    addpassengerdialog.h \
    database.h \
    dbconnector.h \
    global.h \
    logindialog.h \
    mainwidget.h \
    mainwindow.h \
    orderinfowidget.h \
    registerdialog.h \
    userinfowidget.h

FORMS += \
    addpassengerdialog.ui \
    logindialog.ui \
    mainwidget.ui \
    mainwindow.ui \
    orderinfowidget.ui \
    registerdialog.ui \
    userinfowidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
