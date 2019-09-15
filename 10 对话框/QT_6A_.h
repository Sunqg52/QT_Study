#pragma once

#include <QtWidgets/QWidget>
#include "ui_QT_6A_.h"

class QT_6A_ : public QWidget
{
	Q_OBJECT

public:
	QT_6A_(QWidget *parent = Q_NULLPTR);

private:
	Ui::QT_6A_Class ui;
private slots:
	int onBtnLogin();
};
