#include <QtGui>

#include "MyDialog.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPointer<MyDialog> dialog = new MyDialog;
    dialog->setAttribute(Qt::WA_DeleteOnClose, true);
    dialog->show();
	
    return app.exec();
}
