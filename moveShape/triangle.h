#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <QPointF>
#include "shape.h"
class triangle:public shape
{
public:
	triangle(QPointF pointf, double len, QRectF rect, double moveX, double moveY);
	~triangle();

	void move();

	QPointF getCenter() const;

	double getCenterX() const;
	double getCenterY() const;

	void setCenter(double x, double y);
	void setCenter(QPointF point);

	double getLen() const;
	double setLen(double Len);

private:
	QPointF _point;
	double _len;
};


#endif