#include "showRectangle.h"
#include "rectangle.h"

showRectangle::showRectangle(QWidget* widget, double moveX, double moveY)
{
    initial(widget, moveX, moveY);
}

void showRectangle::initial(QWidget* widget, double moveX, double moveY)
{
    if (_shape)
    {
        delete _shape;
        _shape = nullptr;
    }
    double width = widget->width();
    double height = widget->height();
    QRectF rect(0, 0, width, height);
    double w = qMin(width, height)*0.1;
    double h = qMin(width, height)*0.1;
    QPointF position(width/2, height/2);
    _shape = new rectangle(position, w, h, rect, moveX, moveY);
}

void showRectangle::show(QPainter* painter)
{
    rectangle* shapeRect = dynamic_cast<rectangle*>(getShape());
    QPointF position = shapeRect->getCenter();
    double len = shapeRect->getLength();
    double width = shapeRect->getWidth();
    painter->setBrush(Qt::red);
    painter->translate(position.x() - len/2, position.y() - width/2);
    painter->drawRect(0, 0, len, width);
    
}

void showRectangle::move()
{
    _shape->move();
}

