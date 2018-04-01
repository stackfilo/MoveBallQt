#include "moveshape.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	moveShape w;
	w.show();
	return a.exec();
}
