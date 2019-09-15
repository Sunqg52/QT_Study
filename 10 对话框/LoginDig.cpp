#include "LoginDig.h"

LoginDig::LoginDig(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.btnOK, SIGNAL(clicked()), this, 
SLOT(onBtnOK()));
	connect(ui.btnCancel, SIGNAL(clicked()), this, 
SLOT(onBtnCancel()));
}

LoginDig::~LoginDig()
{
}

int LoginDig::onBtnOK()
{
	m_user = ui.textUser->text();
	m_password = ui.textPassword->text();

	accept();	//关闭对话框并且让exec()对话框返回Accepted
	return 0;
}
int LoginDig::onBtnCancel()
{
	reject();		//关闭窗口，返回值给exec
	return 0;
}
