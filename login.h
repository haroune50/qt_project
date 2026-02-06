#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

    void connect_database();

    void on_b2_exit_clicked();

    void on_b1_login_clicked();





private:
    Ui::Widget *ui;
};
#endif // LOGIN_H
