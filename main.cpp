#include "mainwindow.h"
#include <QtWidgets/QApplication>

#if defined(_MSC_VER) && !defined(_DEBUG)
#pragma comment(lib,"Qt5WebKit.lib")
#pragma comment(lib,"Qt5WebKitWidgets.lib")
#elif defined(_MSC_VER) && defined(_DEBUG)
#pragma comment(lib,"Qt5WebKitd.lib")
#pragma comment(lib,"Qt5WebKitWidgetsd.lib")
#endif

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	return a.exec();
}
