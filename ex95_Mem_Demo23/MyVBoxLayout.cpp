#include "MyVBoxLayout.h"
#include <iostream>

MyVBoxLayout::MyVBoxLayout() :
		QVBoxLayout()
{
	std::cout << "+++ MyVBoxLayout::MyVBoxLayout() +++" << std::endl;
}

MyVBoxLayout::MyVBoxLayout(QWidget *parent) :
		QVBoxLayout(parent)
{
	std::cout << "+++ MyVBoxLayout::MyVBoxLayout() +++" << std::endl;
}

MyVBoxLayout::~MyVBoxLayout()
{
	std::cout << "--- MyVBoxLayout::~MyVBoxLayout() ---" << std::endl;
}
