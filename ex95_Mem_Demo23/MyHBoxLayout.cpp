#include "MyHBoxLayout.h"
#include <iostream>

MyHBoxLayout::MyHBoxLayout() :
		QHBoxLayout()
{
	std::cout << "+++ MyHBoxLayout::MyHBoxLayout() +++" << std::endl;
}

MyHBoxLayout::MyHBoxLayout(QWidget *parent) :
		QHBoxLayout(parent)
{
	std::cout << "+++ MyHBoxLayout::MyHBoxLayout() +++" << std::endl;
}

MyHBoxLayout::~MyHBoxLayout()
{
	std::cout << "--- MyHBoxLayout::~MyHBoxLayout() ---" << std::endl;
}

