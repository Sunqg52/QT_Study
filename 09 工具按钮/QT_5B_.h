#pragma once

#include <QtWidgets/QWidget>
#include "ui_QT_5B_.h"

class QT_5B_ : public QWidget
{
	Q_OBJECT

public:
	QT_5B_(QWidget *parent = Q_NULLPTR);

private:
	Ui::QT_5B_Class ui;
private slots:
	int onBtnHelp();
	int onBtnHelpChange(bool check);
};
