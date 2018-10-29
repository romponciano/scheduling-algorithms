#include "sa.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SA w;
	w.show();
	return a.exec();
}
