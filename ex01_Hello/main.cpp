#include <QtGui>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	QPointer<QLabel> label = new QLabel("Hello Qt!");
	label->setAttribute(Qt::WA_DeleteOnClose, true); // when close, auto delete
	label->show();

	return app.exec();
}
