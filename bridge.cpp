#include <QMessageBox>
#include <QTimer>
#include "bridge.h"

Bridge gBridge;

Bridge::Bridge()
{
}

Bridge::~Bridge()
{
}

void Bridge::func1(QString param1)
{
    QMessageBox msgBox;
    msgBox.setText(param1);
    msgBox.setWindowTitle("Bridge::func1");
    msgBox.addButton(QMessageBox::Ok);
    msgBox.exec();
	QTimer *qtimer = new QTimer();
	connect(qtimer,SIGNAL(timeout()),this,SLOT(onTimeout()));
	qtimer->setSingleShot(true);
	qtimer->setInterval(1000);
	qtimer->start();
}

void Bridge::onTimeout()
{
	QTimer *qtimer = (QTimer *)sender();
	delete qtimer;
	emit boo();
}