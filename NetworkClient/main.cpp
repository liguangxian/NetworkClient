#include "NetworkClient.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	NetworkClient w;
	w.show();
	return a.exec();
}
