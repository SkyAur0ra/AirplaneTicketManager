#ifndef REGISTERWIDGET_H
#define REGISTERWIDGET_H

#include <QWidget>

namespace Ui {
class RegisterWidget;
}

class RegisterWidget : public QWidget
{
    Q_OBJECT

public:
    explicit RegisterWidget(QWidget *parent = nullptr);
    ~RegisterWidget();

private slots:

    void on_RegisterBtn1_clicked();

    void on_CancelBtn1_clicked();

    void closeEvent(QCloseEvent *event) override;
    void on_setAccount_LineEdit_textChanged(const QString &arg1);

private:
    Ui::RegisterWidget *ui;
};

#endif // REGISTERWIDGET_H
