#ifndef SHOWRECTANGLE_H
#define SHOWRECTANGLE_H
#include "showShape.h"
class showRectangle : public showShape
{
public:
    showRectangle(QWidget* widget, double moveX, double moveY);
    virtual void initial(QWidget* widget, double moveX, double moveY);
    void show(QPainter* painter);
    void move();
};
#endif //!SHOWRECTANGLE_H