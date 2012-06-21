#ifndef CXX_MYLABEL_H
#define CXX_MYLABEL_H

#include <QtGui>

class MyLabel: public QLabel
{
public:
	explicit MyLabel(const QString &text, QWidget *parent = 0,
			Qt::WindowFlags f = 0);
	virtual ~MyLabel();
};

#endif /* CXX_MYLABEL_H */
