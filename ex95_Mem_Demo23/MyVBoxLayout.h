#ifndef CXX_MYVBOXLAYOUT_H
#define CXX_MYVBOXLAYOUT_H

#include <QtGui>

class MyVBoxLayout : public QVBoxLayout
{
public:
	MyVBoxLayout();
	explicit MyVBoxLayout(QWidget *parent);
	virtual ~MyVBoxLayout();
};

#endif /* CXX_MYVBOXLAYOUT_H */
