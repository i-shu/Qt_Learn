#include "CustomDialog.h"
#include <iostream>

#include "MyLabel.h"
#include "MyButton.h"
#include "MyHBoxLayout.h"
#include "MyVBoxLayout.h"

CustomDialog::CustomDialog(QWidget *parent, Qt::WindowFlags f) :
		QDialog(parent, f), msgLabelPtr(NULL), okButtonPtr(NULL), cancelButtonPtr(
				NULL)
{
	msgLabelPtr = new MyLabel("This area is for some message!");
	okButtonPtr = new MyButton("OK");
	cancelButtonPtr = new MyButton("Cancel");
	QObject::connect(okButtonPtr, SIGNAL(clicked()), this, SLOT(close()));
	QObject::connect(cancelButtonPtr, SIGNAL(clicked()), this, SLOT(close()));

	MyVBoxLayout *mainLayout = new MyVBoxLayout;
	setLayout(mainLayout);
	MyHBoxLayout *layout = new MyHBoxLayout;
	layout->addWidget(okButtonPtr);
	layout->addWidget(cancelButtonPtr);
	mainLayout->addWidget(msgLabelPtr);
	mainLayout->addLayout(layout);

}

CustomDialog::~CustomDialog()
{
}

