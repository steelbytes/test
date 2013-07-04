#include <QtWebKitWidgets\qwebframe.h>
#include "mainwindow.h"
#include "bridge.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QWebView *webview = ui.webView;
	QWebPage *webpage = webview->page();
	QWebFrame *webframe = webpage->mainFrame();
	connect(webframe,SIGNAL(javaScriptWindowObjectCleared()),this,SLOT(addJSObjects()));
	webview->load(QUrl("file:///Users/Louis/Desktop/test/html/index.html"));
}

MainWindow::~MainWindow()
{

}

void MainWindow::addJSObjects()
{
	QWebView *webview = ui.webView;
	QWebPage *webpage = webview->page();
	QWebFrame *webframe = webpage->mainFrame();
	webframe->addToJavaScriptWindowObject("bridge",&gBridge);
}
