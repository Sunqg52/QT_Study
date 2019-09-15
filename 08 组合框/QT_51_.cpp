#include "QT_51_.h"

QT_51_::QT_51_(QWidget *parent): QWidget(parent)
{
ui.setupUi(this);
   //添加item, 并设置值
ui.comboBox->addItem("Chinese", "ch");
ui.comboBox->addItem("English", "en");
ui.comboBox->addItem("Freach", "fr");
ui.comboBox->insertItem(2, "Korean", "kr");
connect(ui.btnOK, SIGNAL(clicked()),this, 				
SLOT(OnBtnOK()));
connect(ui.comboBox,SIGNAL(currentIndexChanged(int		 
)),this, SLOT(OnLangChanged(int)));
}
int QT_51_::OnBtnOK()
{
int index = ui.comboBox->currentIndex();						
//currectIndex表示其当前选项
QString data = ui.comboBox>itemData(index).toString();			
//获取数据
QString text = ui.comboBox->itemText(index);				
//获取数据
QString value = ui.comboBox->currentText();					
//获取文本框中输入的值
return 0;
}
int QT_51_::OnLangChanged(int index)
{
	return 0;
}
