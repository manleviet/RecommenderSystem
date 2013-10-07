#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include <QProcess>
#include "ui_mydialog.h"

class MyDialog : public QDialog, public Ui::Dialog
{
	Q_OBJECT
public:
	MyDialog(QWidget *parent=0);
private slots:
	void save();
	void save2();
  	void save3();
	void launch();
	void launch2();
	void launch3();
private:
	QString str1,str2;
	QProcess process;
};

#endif
