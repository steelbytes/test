#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	// test
	ui.webView->load(QUrl("file:///Users/Louis/Desktop/test/html/index.html"));
}

MainWindow::~MainWindow()
{

}
