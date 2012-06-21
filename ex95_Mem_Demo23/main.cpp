#include <QtGui>

#include "CustomDialog.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	CustomDialog *dialog = new CustomDialog;
	dialog->setAttribute(Qt::WA_DeleteOnClose, true);
	dialog->show();

	return app.exec();
}
