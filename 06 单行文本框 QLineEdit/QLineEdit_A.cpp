#include "QLineEdit_A.h"
#include<QMessageBox>			//包含弹窗

QLineEdit_A::QLineEdit_A(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	connect(ui.btnSignIn, SIGNAL(clicked()),
		this, SLOT(onBtnClick()));
	connect(ui.ediPssword, SIGNAL(returnPressed()),
		this, SLOT(onReturnPressed()));
}

int QLineEdit_A::onBtnClick()
{
	QString user = ui.ediUser->text();			//text()函数用于获取lineEdit内的文本
	QString passwd = ui.ediPssword->text();
	QMessageBox qmb;
	if (user == "root" &&  passwd == "123456")
	{
		QMessageBox::information(this, "OK", "login success");
	}
	else
	{
		QMessageBox::information(this, "ERROR", "login fail");
	}
	return 0;
}
int QLineEdit_A::onReturnPressed()
{
	onBtnClick();
	return 0;
}
