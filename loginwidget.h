#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>

namespace Ui {
class LoginWidget;
}

class LoginWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWidget(QWidget *parent = nullptr);
    ~LoginWidget();

private slots:
    void on_LoginBtn_clicked();

    void on_Register_Label_linkActivated(const QString &link);

    void on_CancelBtn_clicked();

    //void closeEvent(QCloseEvent *event);


private:
    Ui::LoginWidget *ui;
};

#endif // LOGINWIDGET_H
