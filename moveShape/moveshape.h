#ifndef MOVESHAPE_H
#define MOVESHAPE_H

#include <QtWidgets/QWidget>
#include <QTime>
#include <QTimer>
#include <QPaintEvent>
#include "ui_moveshape.h"
#include "showShape.h"

class moveShape : public QWidget
{
	Q_OBJECT

public:
	moveShape(QWidget *parent = 0);
	~moveShape();

    int getUpdateTime() const;
    void setUpdateTime(int msec);

    int getMinUpdateTime() const;
    void setMinUpdateTime(int msec);

    int getMaxUpdateTime() const;
    void setMaxUpdateTime(int msec);

private:
    void chosenBall(double moveX, double moveY);
    void chosenTriangle(double moveX, double moveY);
    void chosenRectangle(double moveX, double moveY);
    
protected:
    void paintEvent(QPaintEvent* event);
private slots:
    void move();
    void start();
    void pause();
    void stop();
    void accelerate();
    void declerate();
    void changeShape(int index);

private:
    QPointF getTwoRandNum();
private:
	Ui::moveShapeClass ui;
    showShape* shape;
    QTimer* timer;
    int perTimeUpdate;

    int minTimeUpdate;
    int maxTimeUpdate;
};

#endif // MOVESHAPE_H
