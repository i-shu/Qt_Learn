#include "MyLabel.h"
#include <iostream>

MyLabel::MyLabel(const QString &text, QWidget *parent, Qt::WindowFlags f) :
		QLabel(text, parent, f)
{
	std::cout << "+++ MyLabel::MyLabel() +++" << std::endl;
}

MyLabel::~MyLabel()
{
	std::cout << "--- MyLabel::~MyLabel() ---" << std::endl;
}

