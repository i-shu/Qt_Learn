#include <QtGui>
#include "MyButton.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	// when handler deleted, it deleted all objects it kept.
	QObjectCleanupHandler *cleaner = new QObjectCleanupHandler;

	MyButton *button1 = new MyButton("Delete Me");
	cleaner->add(button1);
	QObject::connect(button1, SIGNAL(clicked()), button1, SLOT(deleteLater()));
	MyButton *button2 = new MyButton("Demo31");
	cleaner->add(button2);
	MyButton *button3 = new MyButton("Delete All");
	cleaner->add(button3);
	QObject::connect(button3, SIGNAL(clicked()), cleaner, SLOT(deleteLater()));
	button1->setGeometry(100, 100, 100, 30);
	button2->setGeometry(100, 180, 100, 30);
	button3->setGeometry(100, 260, 100, 30);
	button1->show();
	button2->show();
	button3->show();

	return app.exec();
}
