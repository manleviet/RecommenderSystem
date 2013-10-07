#include <QtGui>
#include "mydialog.h"

MyDialog::MyDialog(QWidget *parent) : QDialog(parent)
{
    setupUi(this);
    //QRegExp regExp("[A-Za-z][1-9][0-9]{0,2}");
    //lineEdit->setValidator(new QRegExpValidator(regExp,this));
	
    connect(pushButton, SIGNAL(clicked()), this, SLOT(save()));
    connect(pushButton_4, SIGNAL(clicked()), this, SLOT(save2()));
    connect(pushButton_6, SIGNAL(clicked()), this, SLOT(save3()));
    connect(pushButton_2, SIGNAL(clicked()), this, SLOT(reject()));
    connect(pushButton_3, SIGNAL(clicked()), this, SLOT(launch()));
    connect(pushButton_5, SIGNAL(clicked()), this, SLOT(launch2()));
    connect(pushButton_7, SIGNAL(clicked()), this, SLOT(launch3()));
}

void MyDialog::save()
{
    
    str1=Ui_Dialog::lineEdit->text();
    str2=Ui_Dialog::lineEdit_2->text();
    
   
    QFile file("out.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
	return;

    QTextStream out(&file);
    out << str1 << "\n" << str2 << "\n";
}

void MyDialog::save2()
{
    
    str1=Ui_Dialog::lineEdit_3->text();
    str2=Ui_Dialog::lineEdit_4->text();
    
   
    QFile file("out2.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
	return;

    QTextStream out(&file);
    out << str2 << "\n" << str1 << "\n" << str2 << "\n";
}
void MyDialog::save3()
{
    
    str1=Ui_Dialog::lineEdit_5->text();
    str2=Ui_Dialog::lineEdit_6->text();
    
   
    QFile file("out3.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
	return;

    QTextStream out(&file);
    out << str1 << "\n" << str2 << "\n";
}
void MyDialog::launch()
{
    QProcess *poc = new QProcess;
    poc->start("./sub.sh");
}

void MyDialog::launch2()
{
    //QProcess *poc2 = new QProcess;
    //poc2->start("./sub2.sh");
    //QProcess::execute("./sub2.sh");
    system("./sub2.sh");
}
void MyDialog::launch3()
{
    system("./sub3.sh");
    //QProcess *poc = new QProcess;
    //poc->start("./sub3.sh");
}

