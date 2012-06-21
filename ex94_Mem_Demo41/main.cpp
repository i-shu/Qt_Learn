#include <QtGui>
#include "MyButton.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
	
    QPointer<MyButton> buttonPtr = new MyButton("Demo41");
    buttonPtr->setAttribute(Qt::WA_DeleteOnClose, true);
    buttonPtr->show();

    // check the pointer
	if (buttonPtr.isNull())
	{
		std::cout << "[ Before Close ] isNull() == True" << std::endl;
	}
	else
	{
		std::cout << "[ Before Close ] isNull() == False" << std::endl;
	}

	// until quit app
    std::cout << "Qt status: " << app.exec() << std::endl;

	// check the pointer
	if (buttonPtr.isNull())
	{
		std::cout << "[ After Close ] isNull() == True" << std::endl;
	}
	else
	{
		std::cout << "[ After Close ] isNull() == False" << std::endl;
	}

    return EXIT_SUCCESS;
}
