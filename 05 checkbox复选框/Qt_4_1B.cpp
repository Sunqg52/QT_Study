#include "Qt_4_1B.h"

Qt_4_1B::Qt_4_1B(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.cbAgree, SIGNAL(stateChanged(int)), this, SLOT(onClickChanged()));
}

int Qt_4_1B::onClickChanged()
{
	if (ui.cbAgree->isChecked())
	{
		ui.btnNext->setEnabled(true);
	}
	else
	{
		ui.btnNext->setEnabled(false);
	}
	return 0;
}
