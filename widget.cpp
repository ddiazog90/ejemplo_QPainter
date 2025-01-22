#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    l.show();
    setfondos();
    connect(ui->btn_move,SIGNAL(clicked()),this,SLOT(move()));
    connect(ui->btn_rotate,SIGNAL(clicked()),this,SLOT(rotate()));
    connect(ui->sp_ejeX,SIGNAL(valueChanged(int)),this,SLOT(ejeX()));
    connect(ui->sp_ejeY,SIGNAL(valueChanged(int)),this,SLOT(ejeY()));
    connect(ui->btn_reinicar,SIGNAL(clicked()),this,SLOT(reiniciar()));
    connect(ui->cmb_fondo,SIGNAL(currentIndexChanged(int)),this,SLOT(loadFondo()));
}

Widget::~Widget()
{
    delete ui;
}
void Widget::move(){
    x+=10;
    y+=10;
    l.setX(x);
    l.setY(y);
}
void Widget::rotate(){
    r+=5;
    l.setRotate(r);
}
void Widget::ejeX(){
    int value=ui->sp_ejeX->value();
    if(value>=lastValueX){
        x+=value;
    }else{
        x-=value;
    }
    l.setX(x);
    lastValueX=value;
}
void Widget::ejeY(){
    int value=ui->sp_ejeY->value();
    if(value>=lastValueY){
        y+=value;
    }else{
        y-=value;
    }
    l.setY(y);
    lastValueY=value;
}
void Widget::reiniciar(){
    x=0;
    y=0;
    r=0;
    ui->sp_ejeX->setValue(0);
    ui->sp_ejeY->setValue(0);
    l.setX(x);
    l.setY(y);
    l.setRotate(r);

}
void Widget::setfondos(){
    ui->cmb_fondo->addItem("Elija un Fondo");
    logicImages limg;//Instancia a la logica del controlador
    vector<string>images=limg.loadImages();
    for(const auto& img:images){
        ui->cmb_fondo->addItem(QString::fromStdString(img));
    }
    /*
    ui->cmb_fondo->addItem("fondo_bandera");
    ui->cmb_fondo->addItem("fondo_kart");
    ui->cmb_fondo->addItem("fondo");*/
}
void Widget::loadFondo(){
    QString f=ui->cmb_fondo->currentText();
    l.setFondo(f);
}
