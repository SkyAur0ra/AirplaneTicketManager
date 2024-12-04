#ifndef USERINFOWIDGET_H
#define USERINFOWIDGET_H

#include <QWidget>

namespace Ui {
class UserInfoWidget;
}

class UserInfoWidget : public QWidget
{
    Q_OBJECT

public:
    explicit UserInfoWidget(QWidget *parent = nullptr);
    ~UserInfoWidget();
    void insertTableItems();
    void clearTableItems();

private slots:
    void on_deleteBtn_clicked();

    void on_addBtn_clicked();

private:
    Ui::UserInfoWidget *ui;
};

#endif // USERINFOWIDGET_H
