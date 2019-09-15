#pragma once

#include <QtWidgets/QWidget>
#include "ui_QT4_4B.h"

class QT4_4B : public QWidget
{
	Q_OBJECT

public:
	QT4_4B(QWidget *parent = Q_NULLPTR);

private:
	Ui::btnShow ui;

private slots:
		int OnShowClicked(bool checked);
};
