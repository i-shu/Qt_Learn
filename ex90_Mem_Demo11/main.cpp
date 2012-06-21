#include <QApplication>
#include "MyButton.h"
#include <iostream>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	MyButton *button = new MyButton("Demo11");
	button->setAttribute(Qt::WA_DeleteOnClose, true); // when close, auto delete
	button->show();

	std::cout << "Qt status: " << app.exec() << std::endl; // until app quit.

	// attention: button has already been deleted, please don't use it at here!
	if (NULL == button)
	{
		std::cout << "NULL == button" << std::endl;
	}
	else
	{
		std::cout << "NULL != button" << std::endl;
	}

	return 0;
}
