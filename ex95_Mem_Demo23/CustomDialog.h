#ifndef CXX_CUSTOMDIALOG_H
#define CXX_CUSTOMDIALOG_H

#include <QtGui>

class MyLabel;
class MyButton;

class CustomDialog : public QDialog
{
public:
	explicit CustomDialog(QWidget *parent = 0, Qt::WindowFlags f = 0);
	virtual ~CustomDialog();

private:
	MyLabel *msgLabelPtr;
	MyButton *okButtonPtr;
	MyButton *cancelButtonPtr;
};

#endif /* CXX_CUSTOMDIALOG_H */
