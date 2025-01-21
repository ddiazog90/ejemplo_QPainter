#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    l.show();
    connect(ui->btn_move,SIGNAL(clicked()),this,SLOT(move()));
    connect(ui->btn_rotate,SIGNAL(clicked()),this,SLOT(rotate()));
}

Widget::~Widget()
{
    delete ui;
}
void Widget::move(){
    x+=10;
    y+=10;
    l.setX(x);
   // l.setY(y);
}
void Widget::rotate(){
    r+=5;
    l.setRotate(r);
}
