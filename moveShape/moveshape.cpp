#include "moveshape.h"
#include "showBall.h"
#include "showTriangle.h"
#include "showRectangle.h"


moveShape::moveShape(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
    QTime midnight(0, 0, 0);
    qsrand(midnight.secsTo(QTime::currentTime()));
    QRectF rect = this->geometry();
    double velocityX = getTwoRandNum().x();
    double velocityY = getTwoRandNum().y();
    timer = new QTimer;
    shape = new showBall(this, velocityX, velocityY);
    setUpdateTime(50);
    setMinUpdateTime(1);
    setMaxUpdateTime(60000);
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    connect(ui.startButton, SIGNAL(clicked()), this, SLOT(start()));
    connect(ui.pauseButton, SIGNAL(clicked()), this, SLOT(pause()));
    connect(ui.stopButton, SIGNAL(clicked()), this, SLOT(stop()));
    connect(ui.accelerateButton, SIGNAL(clicked()), this, SLOT(accelerate()));
    connect(ui.decelerateButton, SIGNAL(clicked()), this, SLOT(declerate()));
    connect(ui.chosenButton, SIGNAL(currentIndexChanged(int )), this, SLOT(changeShape(int )));
}

moveShape::~moveShape()
{

}


int moveShape::getUpdateTime() const
{
    return perTimeUpdate;
}

void moveShape::setUpdateTime(int msec)
{
    perTimeUpdate = msec;
}

int moveShape::getMinUpdateTime() const
{
    return minTimeUpdate;
}

void moveShape::setMinUpdateTime(int msec)
{
    minTimeUpdate = msec;
}

int moveShape::getMaxUpdateTime() const
{
    return maxTimeUpdate;
}

void moveShape::setMaxUpdateTime(int msec)
{
    maxTimeUpdate = msec;
}

void moveShape::chosenBall(double moveX, double moveY)
{
    if (shape)
    {
        delete shape;
    }
    shape = new showBall(this, moveX, moveY);
}

void moveShape::chosenTriangle(double moveX, double moveY)
{
    if (shape)
    {
        delete shape;
    }
    shape = new showTriangle(this, moveX, moveY);
}

void moveShape::chosenRectangle(double moveX, double moveY)
{
    if (shape)
    {
        delete shape;
    }
    shape = new showRectangle(this, moveX, moveY);
}

void moveShape::paintEvent(QPaintEvent* event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    shape->show(&painter);
}

void moveShape::move()
{
    shape->move();
    update();
}

void moveShape::start()
{
    timer->start(getUpdateTime());
}

void moveShape::pause()
{
    timer->stop();
}

void moveShape::stop()
{
    double velocityX = getTwoRandNum().x();
    double velocityY = getTwoRandNum().y();
    shape->initial(this, velocityX, velocityY);
    setUpdateTime(50);
    setMinUpdateTime(1);
    setMaxUpdateTime(60000);
    timer->stop();
    update();
}

void moveShape::accelerate()
{
    perTimeUpdate /= 2;
    if (perTimeUpdate<=minTimeUpdate)
    {
        perTimeUpdate = minTimeUpdate;
    }
    timer->setInterval(perTimeUpdate / 2);
}

void moveShape::declerate()
{
    perTimeUpdate *= 2;
    if (perTimeUpdate >= maxTimeUpdate)
    {
        perTimeUpdate = maxTimeUpdate;
    }
    timer->setInterval(perTimeUpdate * 2);
}

void moveShape::changeShape(int index)
{
    double velocityX = getTwoRandNum().x();
    double velocityY = getTwoRandNum().y();
    if (index == 0)
    {
        chosenBall(velocityX, velocityY); 
    }
    else if (index == 1)
    {
        chosenTriangle(velocityX, velocityY);
    }
    else
    {
        chosenRectangle(velocityX, velocityY);
    }
    shape->initial(this, velocityX, velocityY);
    timer->stop();
    update();
}


QPointF moveShape::getTwoRandNum()
{
    double moveX = width()*0.125*(-0.5 + qrand() / (double)(RAND_MAX + 1));
    double moveY = height()*0.125*(-0.5 + qrand() / (double)(RAND_MAX + 1));
    return QPointF(moveX, moveY);
}

