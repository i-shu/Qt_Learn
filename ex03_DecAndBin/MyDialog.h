#ifndef CXX_MYLABEL_H
#define CXX_MYLABEL_H

#include <QtGui>

#include <iostream>

using namespace std;

class MyDialog : public QDialog
{
    Q_OBJECT
public:
    MyDialog(QWidget *parent = 0, Qt::WindowFlags f = 0);

private slots:
	void decTextChanged(const QString &);
	void binTextChanged(const QString &);

private:
	QString toBin(const QString &);
	QString toDec(const QString &);

	QLabel *infoLabel;

    QLabel *decLabel;
    QLabel *binLabel;

    QLineEdit *decLineEdit;
    QLineEdit *binLineEdit;
};

#endif /* CXX_MYLABEL_H */
