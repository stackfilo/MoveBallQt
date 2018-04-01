#include "triangle.h"
#include <cmath>

triangle::triangle(QPointF pointf, double len, QRectF rect, double moveX, double moveY)
		:shape(rect, moveX, moveY), _point(pointf), _len(len)
{

}

triangle::~triangle()
{

}

void triangle::move()
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
	if (xMove > 0 && xLabel + _len/2.0 >= xMax)
	{
		xLabel = 2 * (xMax - _len/2.0) - xLabel;
		setMoveX(-xMove);
	}
	else if (xMove < 0 && xLabel - _len/2 <= xMin)
	{
		xLabel = 2 * (xMin + _len/2) - xLabel;
		setMoveX(-xMove);
	}
	if (yMove > 0 && yLabel + sqrtf(3)*_len/4.0 >= yMax)
	{
		yLabel = 2 * (yMax - sqrtf(3)*_len / 4.0) - yLabel;
		setMoveY(-yMove);
	}
	else if (yMove < 0 && yLabel - sqrtf(3)*_len / 4.0 <= yMin)
	{
		yLabel = 2 * (yMin + sqrtf(3)*_len / 4.0) - yLabel;
		setMoveY(-yMove);
	}
	setCenter(xLabel, yLabel);
}

QPointF triangle::getCenter() const
{
	return _point;
}

double triangle::getCenterX() const
{
	return _point.x();
}

double triangle::getCenterY() const
{
	return _point.y();
}

void triangle::setCenter(double x, double y)
{
	setCenter(QPointF(x, y));
}

void triangle::setCenter(QPointF point)
{
	_point = point;
}

double triangle::getLen() const
{
	return _len;
}
