#include "MyDialog.h"

#include <iostream>

MyDialog::MyDialog(QWidget *parent, Qt::WindowFlags f) :
		QDialog(parent, f)
{
	infoLabel = new QLabel("Info: This application can convert integer between decimal and binary.");
	infoLabel->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

	decLabel = new QLabel("Decimal:");
	binLabel = new QLabel("Binary:");
	decLabel->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
	binLabel->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

	decLineEdit = new QLineEdit;
	binLineEdit = new QLineEdit;
	decLineEdit->setAlignment(Qt::AlignRight);
	binLineEdit->setAlignment(Qt::AlignRight);

	decLabel->setBuddy(decLineEdit);
	binLabel->setBuddy(binLineEdit);

	QVBoxLayout *mainLayout = new QVBoxLayout;
	setLayout(mainLayout);

	QHBoxLayout *funcLayout = new QHBoxLayout;
	mainLayout->addLayout(funcLayout);
	mainLayout->addWidget(infoLabel);
	mainLayout->addStretch();

	QVBoxLayout *layout = new QVBoxLayout;
	layout->addWidget(decLabel);
	layout->addWidget(binLabel);
	funcLayout->addLayout(layout);

	layout = new QVBoxLayout;
	layout->addWidget(decLineEdit);
	layout->addWidget(binLineEdit);
	funcLayout->addLayout(layout);

	QObject::connect(decLineEdit, SIGNAL(textChanged(const QString &)), this,
			SLOT(decTextChanged(const QString &)));
	QObject::connect(binLineEdit, SIGNAL(textChanged(const QString &)), this,
			SLOT(binTextChanged(const QString &)));

}

void MyDialog::decTextChanged(const QString & text)
{
	//std::cout << text.toStdString() << std::endl;
	binLineEdit->setText(toBin(text));
}

void MyDialog::binTextChanged(const QString & text)
{
	//std::cout << text.toStdString() << std::endl;
	decLineEdit->setText(toDec(text));
}

QString MyDialog::toBin(const QString &dec)
{
	bool ok = false;
	int value = dec.toInt(&ok, 10);
	QString bin("");
	if (ok)
	{
		int temp = value;
		int v = 0;
		while (temp > 0)
		{
			v = temp % 2;
			temp = temp / 2;
			bin.insert(0, QChar('0' + v));
		}
	}

	return bin;
}
QString MyDialog::toDec(const QString &bin)
{
	bool ok = false;
	int value = bin.toInt(&ok, 2);
	QString dec("");
	if (ok)
	{
		dec.setNum(value, 10);
	}

	return dec;
}
