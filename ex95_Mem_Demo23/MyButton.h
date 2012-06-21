#ifndef CXX_MYBUTTON_H
#define CXX_MYBUTTON_H

#include <QtGui>

class MyButton: public QPushButton
{
Q_OBJECT
public:
	explicit MyButton(const QString &text, QWidget *parent = 0);
	virtual ~MyButton();
};

#endif /* CXX_MYBUTTON_H */
