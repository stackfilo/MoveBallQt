#include "rectangle.h"

rectangle::rectangle(QPointF point, double len, double width, QRectF rect, double moveX, double moveY) :shape(rect, moveX, moveY), _point(point), _len(len), _width(width)
{

}

rectangle::~rectangle()
{

}

void rectangle::move()
{
    double xMin = getLeft();
    double xMax = getRight();
    double yMin = getTop();
    double yMax = getButtom();
    double xLabel = getCenterX();
    double yLabel = getCenterY();
    double xMove = getMoveX();
    double yMove = getMoveY();
    xLabel += xMove;
    yLabel += yMove;
    if (xMove > 0 && xLabel + _len/2.0>= xMax)
    {
        xLabel = 2 * (xMax - _len / 2.0) - xLabel;
        setMoveX(-xMove);
    }
    else if (xMove < 0 && xLabel - _len/2.0<= xMin)
    {
        xLabel = 2 * (xMin + _len / 2.0) - xLabel;
        setMoveX(-xMove);
    }
    if (yMove > 0 && yLabel + _width/2.0 >= yMax)
    {
        yLabel = 2 * (yMax - _width/2.0) - yLabel;
        setMoveY(-yMove);
    }
    else if (yMove < 0 && yLabel - _width/2.0 <= yMin)
    {
        yLabel = 2 * (yMin + _width/2.0) - yLabel;
        setMoveY(-yMove);
    }
    setCenter(xLabel, yLabel);
}

QPointF rectangle::getCenter() const
{
    return _point;
}

double rectangle::getCenterX() const
{
    return _point.x();
}

double rectangle::getCenterY() const
{
    return _point.y();
}

void rectangle::setCenter(double x, double y)
{
    setCenter(QPointF(x, y));
}

void rectangle::setCenter(QPointF point)
{
    _point = point;
}

double rectangle::getLength() const
{
	return _len;
}

void rectangle::setLength(double len)
{
	_len = len;
}

double rectangle::getWidth() const
{
	return _width;
}

void rectangle::setWidth(double width)
{
	_width = width;
}

