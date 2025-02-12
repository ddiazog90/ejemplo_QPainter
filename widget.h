#ifndef WIDGET_H
#define WIDGET_H

#include "views/lienzo.h"
#include <QWidget>
#include <headers/logicImages.h>
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

private:
    Ui::Widget *ui;
    lienzo l;
    int x=0,y=0,r=0,lastValueX=0,lastValueY=0;
    //logicImages limg;//Instancia a la logica del controlador
    void setfondos();

private slots:
    void move();
    void rotate();
    void ejeX();
    void ejeY();
    void reiniciar();
    void loadFondo();
};
#endif // WIDGET_H
