#ifndef SHOWTRIANGLE_H
#define SHOWTRIANGLE_H
#include "showShape.h"
class showTriangle : public showShape
{
public:
    showTriangle(QWidget* widget, double moveX, double moveY);
    virtual void initial(QWidget* widget, double moveX, double moveY);
    void show(QPainter* painter);
    void move();
};
#endif