#ifndef WIDGET_H
#define WIDGET_H

#include "views/lienzo.h"
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

private:
    Ui::Widget *ui;
    lienzo l;
    int x=0,y=0,r=0;

private slots:
    void move();
    void rotate();
};
#endif // WIDGET_H
