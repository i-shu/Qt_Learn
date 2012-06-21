#include "MyButton.h"
#include <iostream>

MyButton::MyButton(const QString &text, QWidget *parent) :
		QPushButton(text, parent)
{
	std::cout << "+++ MyButton::MyButton() +++" << std::endl;
}

MyButton::~MyButton()
{
	std::cout << "--- MyButton::~MyButton() ---" << std::endl;
}

