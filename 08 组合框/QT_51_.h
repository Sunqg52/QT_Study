#pragma once

#include <QtWidgets/QWidget>
#include "ui_QT_51_.h"

class QT_51_ : public QWidget
{
	Q_OBJECT

public:
	QT_51_(QWidget *parent = Q_NULLPTR);

private:
	Ui::QT_51_Class ui;
private slots:
	int OnBtnOK();
	int OnLangChanged(int index);
};
