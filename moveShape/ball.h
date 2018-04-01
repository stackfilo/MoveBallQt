#ifndef BALL_H
#define BALL_H
#include "shape.h"
#include <QPointF>
class ball:public shape
{
public:
	ball(QPointF pointf, qreal radius, QRectF rect,double moveX, double moveY);
	~ball();
	void move();

	QPointF getCenter() const;

	double getCenterX() const;
	double getCenterY() const;

	void setCenter(double x, double y);
	void setCenter(QPointF point);

	double getRadius() const;
	void setRadius(double radius);

private:
	QPointF _point;
	double _radius;
};


#endif