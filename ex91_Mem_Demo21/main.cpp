#include <QtGui>
#include "MyButton.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    window->setAttribute(Qt::WA_DeleteOnClose, true); // when close, auto delete

    // create a button with *parent*, in the case,
    // when parent deleted, the button deleted
    MyButton *button = new MyButton("Demo21", window);

    // show window
    window->show();
	
    return app.exec();
}
