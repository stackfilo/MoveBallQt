#include "ball.h"
ball::ball(QPointF pointf, qreal radius, QRectF rect, double moveX, double moveY) :shape(rect,moveX,moveY),
		_point(pointf), _radius(radius)
{

}

ball::~ball()
{

}

void ball::move()
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
	if (xMove > 0 && xLabel+_radius >= xMax)
	{
		xLabel = 2 * (xMax - _radius) - xLabel;
		setMoveX(-xMove);
	}
	else if (xMove < 0 && xLabel-_radius <= xMin)
	{
		xLabel = 2 * (xMin + _radius) - xLabel;
		setMoveX(-xMove);
	}
	if (yMove > 0 && yLabel+_radius >= yMax)
	{
		yLabel = 2 * (yMax - _radius) - yLabel;
		setMoveY(-yMove);
	}
	else if (yMove < 0 && yLabel-_radius <= yMin)
	{
		yLabel = 2 * (yMin + _radius) - yLabel;
		setMoveY(-yMove);
	}
	setCenter(xLabel, yLabel);
}

QPointF ball::getCenter() const
{
	return _point;
}

double ball::getCenterX() const
{
	return _point.x();
}

double ball::getCenterY() const
{
	return _point.y();
}

void ball::setCenter(double x, double y)
{
	setCenter(QPointF(x,y));
}

void ball::setCenter(QPointF point)
{
	_point = point;
}

double ball::getRadius() const
{
	return _radius;
}

void ball::setRadius(double radius)
{
	_radius = radius;
}

