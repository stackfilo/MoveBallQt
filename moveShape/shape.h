#ifndef SHAPE_H
#define SHAPE_H
#include <QRectF>
class shape{
public:
	shape(QRectF rect, double moveX, double moveY);
	virtual ~shape();

	QRectF getRect() const;
	void setRect(QRectF rect);

	double getTop() const;
	double getButtom() const;

	double getLeft() const;
	double getRight() const;

	double getMoveX() const;
	void setMoveX(double moveX);

	double getMoveY() const;
	void setMoveY(double moveY);
	virtual void  move();
private:
	QRectF _rect;
	double _moveX;
	double _moveY;
};
#endif