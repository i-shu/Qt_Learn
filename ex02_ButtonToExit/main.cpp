#include <QtGui>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	QPointer<QPushButton> button = new QPushButton("&Quit"); // shortcut ALT+Q
	button->setAttribute(Qt::WA_DeleteOnClose, true);
	QObject::connect(button, SIGNAL(clicked()), &app, SLOT(quit()));
	button->show();

	return app.exec();
}

