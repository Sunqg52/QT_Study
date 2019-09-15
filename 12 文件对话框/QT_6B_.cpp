#include "QT_6B_.h"
#include<QFileDialog>
#include<qdebug.h>
#include"GBK.h"

QT_6B_::QT_6B_(QWidget *parent)
	: QWidget(parent)
{
ui.setupUi(this);
connect(ui.btnOpen, SIGNAL(clicked()), 
SLOT(onBtnOpen()));
connect(ui.btnSave, SIGNAL(clicked()), 
SLOT(onBtnSave()));
}

int QT_6B_::onBtnOpen()
{
	//选择要打开的文件//指定父窗口
QString filepath = QFileDialog::getOpenFileName(this,				
GBK::ToUnicode("选择文件"));		//指定窗口标题

//为空时表示用户取消了操作
if (filepath.length() > 0)
{
qDebug() << filepath;
string gbk_name = GBK::FromUnicode(filepath);

//打开文件 读取内容
FILE* fp = fopen(gbk_name.c_str(), "rb");

//文件的大小
fseek(fp, 0, SEEK_END);
int filesize = ftell(fp);

//读取内容
fseek(fp, 0, SEEK_SET);
//创建缓冲区
char* buf = new char[filesize + 1];			
int n = fread(buf, 1, filesize, fp);
if (n > 0)
{
buf[n] = 0;
//显示到界面的文本框中			ui.plainTextEdit>setPlainText(GBK::ToUnicode(buf));
}
delete[] buf;		//释放内存
fclose(fp);		
}
return 0;
}
int QT_6B_::onBtnSave()
{
//选择要打开的文件		//指定父窗口
QString filepath = QFileDialog::getSaveFileName(this,				
GBK::ToUnicode("保存"));		//指定窗口标题

//为空时表示用户取消了操作
if (filepath.length() > 0)
{
//获取文本框中的文本
QString text = ui.plainTextEdit->toPlainText();
string gbk_text = GBK::FromUnicode(text);
string gbk_filename = GBK::FromUnicode(filepath);
qDebug() << filepath;
string gbk_name = GBK::FromUnicode(filepath);
//打开文件 读取内容
FILE* fp = fopen(gbk_name.c_str(), "wb");
fwrite(gbk_text.c_str(), 1, gbk_text.length(), fp);
fclose(fp);
}
return 0;
}
