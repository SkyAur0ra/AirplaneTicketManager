#ifndef WINDOWSMANAGER_H
#define WINDOWSMANAGER_H

#include "loginwidget.h"
#include "registerwidget.h"
#include "mainwidget.h"
#include "mainwindow.h"

class WindowsManager
{
public:
    WindowsManager();
    LoginWidget* lgWidget;
    RegisterWidget* rgWidget;
    //MainWidget* mWidget;
    //MainWindow *mWindow;
};
extern WindowsManager wm;
#endif // WINDOWSMANAGER_H
