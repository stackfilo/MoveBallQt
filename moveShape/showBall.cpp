#include "showBall.h"
#include "ball.h"
#include <QtMath>


showBall::showBall(QWidget* widget, double moveX, double moveY)
{
    initial(widget, moveX, moveY);
}

void showBall::initial(QWidget* widget, double moveX, double moveY)
{
    if (_shape)
    {
        delete _shape;
        _shape = nullptr;
    }
    
    double width = widget->width();
    double height = widget->height();
    QRectF rect(0, 0, width, height);
    double radius = qMin(width, height)*0.05;
    QPointF position(width/2, height/2);
    _shape = new ball(position, radius, rect, moveX, moveY);
}

void showBall::show(QPainter* painter)
{
    ball* shapeBall = dynamic_cast<ball*>(getShape());
    QPointF position = shapeBall->getCenter();
    double radius = shapeBall->getRadius();
    painter->setBrush(Qt::red);
    painter->translate(position.x() - radius, position.y() - radius);
    painter->drawEllipse(0, 0, 2 * radius, 2 * radius);
}

void showBall::move()
{
    _shape->move();
}
