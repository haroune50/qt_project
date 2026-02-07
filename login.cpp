#include "login.h"
#include "ui_login.h"
#include<QtSql/QSqlDatabase>
#include<QTypeInfo>
#include<QtDebug>
#include<QMessageBox>
Widget::Widget(QWidget *parent): QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect_database();
}
Widget::~Widget()
{
    delete ui;
}




void Widget::on_b2_exit_clicked()
{
  Widget::~Widget();
}
void Widget::connect_database()
{
    QSqlDatabase DATA=QSqlDatabase::addDatabase("QSQLITE");
    DATA.setDatabaseName("student.db");
    if(!DATA.open()){
        ui->label_data->setText("error to open dataabse");
    }else
    {
        ui->label_data->setText("success open database");
    }

}

void Widget::on_b1_login_clicked()
{
    QString user=ui->lineEdit->text();

    QString pass=ui->lineEdit_2->text();

    if(user=="red_med" && pass=="12345"){
        QMessageBox::information(this, "login","login successfull");
    }
    else{
         QMessageBox::information(this, "failled_login","login failled:user or pass incorrect");
    }
}

