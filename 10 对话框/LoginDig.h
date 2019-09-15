#pragma once

#include <QDialog>
#include "ui_LoginDig.h"

class LoginDig : public QDialog
{
	Q_OBJECT

public:
	LoginDig(QWidget *parent = Q_NULLPTR);
	~LoginDig();

private:
	Ui::LoginDig ui;
private slots:	
	int onBtnOK();
	int onBtnCancel();

public:
	QString m_user;
	QString m_password;
};
