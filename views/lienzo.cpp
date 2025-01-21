#include "lienzo.h"

lienzo::lienzo() {}

void lienzo::paintEvent(QPaintEvent *e){
    QPainter g(this);
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
