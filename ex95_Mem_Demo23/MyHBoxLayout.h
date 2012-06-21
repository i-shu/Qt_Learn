#ifndef CXX_MYHBOXLAYOUT_H
#define CXX_MYHBOXLAYOUT_H

#include <QtGui>

class MyHBoxLayout : public QHBoxLayout
{
public:
	MyHBoxLayout();
	explicit MyHBoxLayout(QWidget *parent);
	virtual ~MyHBoxLayout();
};

#endif /* CXX_MYHBOXLAYOUT_H */
