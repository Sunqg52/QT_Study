#include "QT4_4B.h"

QT4_4B::QT4_4B(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(
		ui.btnShow_2,
		SIGNAL(clicked(bool)),
		this,
		SLOT(OnShowClicked(bool))
	);
}
int QT4_4B::OnShowClicked(bool checked)
{
	ui.plainTextEdit->setPlaceholderText("hello word");
	return 0;
}
