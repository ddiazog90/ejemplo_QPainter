#include "lienzo.h"

lienzo::lienzo() {}

void lienzo::paintEvent(QPaintEvent *e){
    QPainter g(this);
    QString ruta="D:/tempfiles/fondos/"+fondo;
    QImage fondo(ruta);
    g.drawImage(10,10,fondo);
    g.setPen(Qt::blue);
    g.setBrush(Qt::cyan);
    g.rotate(rotate);
    g.drawRect(x,y,50,50);
}
void lienzo::setX(int &x_){
    this->x=x_;
    repaint();
}
void lienzo::setY(int &y_){
    this->y=y_;
    repaint();
}
void lienzo::setRotate(int &r){
    this->rotate=r;
    repaint();
}
void lienzo::setFondo(QString& fondo_){
    this->fondo=fondo_;
    repaint();
}
