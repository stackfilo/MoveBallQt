#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"
#include <QPointF>
class rectangle : public shape
{
public:
	rectangle(QPointF point, double len, double width, QRectF rect, double moveX, double moveY);
	~rectangle();

	void move();

	QPointF getCenter() const;

	double getCenterX() const;
	double getCenterY() const;

	void setCenter(double x, double y);
	void setCenter(QPointF point);

	double getLength() const;
	void setLength(double len);

	double getWidth() const;
	void setWidth(double width);

private:
	QPointF _point;
	double _len;
	double _width;
};
#endif // !RECTANGLE_H
