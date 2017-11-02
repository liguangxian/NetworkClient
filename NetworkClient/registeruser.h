#pragma once

#include <QDialog>
#include "ui_registeruser.h"
class CommandRegister;
class UserRegister : public QDialog
{
	Q_OBJECT

public:
	UserRegister(QWidget *parent = Q_NULLPTR);
	~UserRegister();
	//void CreateMysql();
	CommandRegister* message();
public slots:
	void quitwindow();
Q_SIGNALS:
	void userRegister();
private Q_SLOTS:
	void OnRegister();

	
private:
	Ui::RegisterUser ui;
	CommandRegister *m_cmd;
};
