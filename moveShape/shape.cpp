#include "shape.h"


shape::shape(QRectF rect, double moveX, double moveY) :_rect(rect), _moveX(moveX), _moveY(moveY)
{

}

shape::~shape()
{

}

QRectF shape::getRect() const
{
	return _rect;
}

void shape::setRect(QRectF rect)
{
	_rect = rect;
}

double shape::getTop() const
{
	return _rect.top();
}

double shape::getButtom() const
{
	return _rect.bottom();
}

double shape::getLeft() const
{
	return _rect.left();
}

double shape::getRight() const
{
	return _rect.right();
}

double shape::getMoveX() const
{
	return _moveX;
}

void shape::setMoveX(double moveX)
{
	_moveX = moveX;
}

double shape::getMoveY() const
{
	return _moveY;
}

void shape::setMoveY(double moveY)
{
	_moveY = moveY;
}

void shape::move()
{

}

