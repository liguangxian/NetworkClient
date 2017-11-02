#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_NetworkClient.h"
#include <QTcpSocket>
#include <string>
class UserRegister;
class UserLogin;
class NetworkClient : public QMainWindow
{
	Q_OBJECT

public:
	NetworkClient(QWidget *parent = Q_NULLPTR);
	private slots:
	void OnConnectClick();
	void OnConnected();
	void OnSocketError(QAbstractSocket::SocketError);
	void OnDataReadyRead();
	void OnUserRegister();
	//void quitwindowprogram();
	//void OnRegisterUser();
private:
	Ui::NetworkClientClass ui;
	QTcpSocket* m_socket;
	UserRegister *m_userRegister;
	UserLogin *m_userlogin;
};
