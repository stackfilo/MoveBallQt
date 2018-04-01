#ifndef SHOWBALL_H
#define SHOWBALL_H
#include "showShape.h"
class showBall:public showShape
{
public:
    showBall(QWidget* widget,double moveX, double moveY);
    virtual void initial(QWidget* widget, double moveX, double moveY);
    void show(QPainter* painter);
    void move();
};
#endif