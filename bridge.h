#ifndef BRIDGE_H
#define BRIDGE_H

#include <QtCore/QObject>

class Bridge : public QObject
{
	Q_OBJECT

public:
	Bridge();
	virtual ~Bridge();
	
public slots:
	void func1(QString param1);

signals:
	void boo();

private slots:
	void onTimeout();

private:
};

extern Bridge gBridge;

#endif
