#include <QtGui>
#include "MyButton.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	// create window, and set auto delete
	QWidget *window = new QWidget;
	window->setAttribute(Qt::WA_DeleteOnClose, true);

	// create layout with parent, so no need to delete manually
	QHBoxLayout *layout = new QHBoxLayout(window);

	// create button with no parent, and add into layout
	MyButton *button = new MyButton("Demo22");
	layout->addWidget(button); // auto set parent of button

	// show window
	window->show();

	return app.exec();
}
