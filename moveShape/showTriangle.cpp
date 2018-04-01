#include "showTriangle.h"
#include <triangle.h>

showTriangle::showTriangle(QWidget* widget, double moveX, double moveY)
{
    initial(widget, moveX, moveY);
}

void showTriangle::initial(QWidget* widget, double moveX, double moveY)
{
    if (_shape)
    {
        delete _shape;
        _shape = nullptr;
    }
    double width = widget->width();
    double height = widget->height();
    double len = qMin(width, height)*0.1;
    QRectF rect(0, 0, width, height);
    QPointF position(width/2, height/2);
    _shape = new triangle(position, len, rect, moveX, moveY);
}

void showTriangle::show(QPainter* painter)
{
    triangle* shapeTriangle = dynamic_cast<triangle*>(getShape());
    QPointF position = shapeTriangle->getCenter();
    double len = shapeTriangle->getLen();
    painter->setBrush(Qt::red);
    QPointF point[3];
    point[0] = QPointF(position.x() - len / 2.0, position.y() - sqrtf(3.0) / 4 * len);
    point[1] = QPointF(position.x() + len / 2.0, position.y() - sqrtf(3.0) / 4 * len);
    point[2] = QPointF(position.x(), position.y() + sqrtf(3.0) / 4 * len);
    painter->drawPolygon(point, 3);
}

void showTriangle::move()
{
    _shape->move();
}
