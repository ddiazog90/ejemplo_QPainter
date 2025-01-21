#ifndef LIENZO_H
#define LIENZO_H
#include <QApplication>
#include <QWidget>
#include <QPainter>
class lienzo: public QWidget
{
private:
    int x=10, y=10,rotate=0;
    void paintEvent(QPaintEvent *);
public:
    lienzo();
    void setX(int&);
    void setY(int&);
    void setRotate(int&);
};

#endif // LIENZO_H
