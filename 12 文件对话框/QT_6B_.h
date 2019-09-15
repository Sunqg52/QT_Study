#pragma once

#include <QtWidgets/QWidget>
#include "ui_QT_6B_.h"

class QT_6B_ : public QWidget
{
	Q_OBJECT

public:
	QT_6B_(QWidget *parent = Q_NULLPTR);

private:
	Ui::QT_6B_Class ui;
private slots:
	int onBtnOpen();
	int onBtnSave();
};
