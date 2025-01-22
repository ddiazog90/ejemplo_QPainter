#ifndef LIENZO_H
#define LIENZO_H
#include <QApplication>
#include <QWidget>
#include <QPainter>
using namespace std;
class lienzo: public QWidget
{
private:
    int x=10, y=10,rotate=0;
    void paintEvent(QPaintEvent *);
    QString fondo="fondo";
public:
    lienzo();
    void setX(int&);
    void setY(int&);
    void setRotate(int&);
    void setFondo(QString&);
};

#endif // LIENZO_H
