#ifndef SHOWSHAPE_H
#define SHOWSHAPE_H
#include "shape.h"
#include <QtWidgets/QWidget>
#include <QPainter>
class showShape{
public:
    showShape();
    virtual ~showShape();
    shape* getShape();
    virtual void move();
    virtual void show(QPainter* painter);
    virtual void initial(QWidget* widget, double moveX, double moveY);
protected:
    shape* _shape;
};

#endif // !SHOWSHAPE_H
