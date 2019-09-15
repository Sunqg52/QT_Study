#include "QT_5B_.h"
#include<QMessageBox>

QT_5B_::QT_5B_(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.btnHelp, SIGNAL(clicked()), this, SLOT(onBtnHelp()));
	connect(ui.btnHelp, SIGNAL(toggled(bool)), this, SLOT(onBtnHelpChange(bool)));
}


int QT_5B_::onBtnHelp()
{
	
	return 0;
}

int QT_5B_::onBtnHelpChange(bool check)
{
	QMessageBox::information(this, "yes", "help");
	return 0;
}
