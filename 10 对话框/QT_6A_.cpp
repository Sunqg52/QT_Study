#include "QT_6A_.h"
#include"LoginDig.h"
#include<QDebug>

QT_6A_::QT_6A_(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.btnLogin, SIGNAL(clicked()), this, 
SLOT(onBtnLogin()));
}

int QT_6A_::onBtnLogin()
{
	//使用对话框
	LoginDig dig(this);
	int rel = dig.exec();	//对话框显示   程序阻塞

	if (rel == QDialog::Accepted)	//如果返回值为
Accepted（内部枚举，即用户点击确认）
	{
		qDebug() << dig.m_user << dig.m_password;
	}
	else
	{

	}
	return 0;
}
