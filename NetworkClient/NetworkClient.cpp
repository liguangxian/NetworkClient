#include "NetworkClient.h"
#include "registeruser.h"
#include "userlogin.h"
#include <QTcpSocket>
#include <QHostAddress>
#include <string>
#include "command_def.h"
using namespace std;
NetworkClient::NetworkClient(QWidget *parent)
	: QMainWindow(parent), m_socket(0), m_userRegister(0),m_userlogin(0)
{
	ui.setupUi(this);
	QObject::connect(ui.my_pushButton, SIGNAL(clicked()), this, SLOT(OnConnectClick()));
	//用户注册
	m_userRegister = new UserRegister(this);
	connect(ui.actionSign_in, &QAction::triggered, m_userRegister,&UserRegister::exec);
	ui.actionSign_in->setIcon(QIcon(":/image/Resources/login.png"));
	//响应用户注册时间
	QObject::connect(m_userRegister, SIGNAL(userRegister()), this, SLOT(OnUserRegister()));
	//用户登录
	m_userlogin = new UserLogin(this);
	QAction *action = ui.menuUser->addAction("Exchange");
	action->setIcon(QIcon(":/image/Resources/login.png"));
	connect(action, &QAction::triggered, m_userlogin, &UserLogin::exec);
	QObject::connect(ui.my_quitwindow, SIGNAL(clicked()), this, SLOT(close()));
}
void NetworkClient::OnConnectClick()
{
	if (m_socket == 0)
	{
		m_socket = new QTcpSocket;
		QObject::connect(m_socket, SIGNAL(connected()), this, SLOT(OnConnected()));
		QObject::connect(m_socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(OnSocketError(QAbstractSocket::SocketError)));
		QObject::connect(m_socket, SIGNAL(readyRead()), this, SLOT(OnDataReadyRead()));
	}

	//QHostAddress ha("127.0.0.1");

	m_socket->connectToHost("127.0.0.1", 8001);
	ui.my_pushButton->setDisabled(true);
	ui.my_pushButton->setText("connectiong...");
	

}
void NetworkClient::OnConnected()
{
	ui.my_pushButton->setText("connected");
}

void NetworkClient::OnSocketError(QAbstractSocket::SocketError error)
{
	ui.my_pushButton->setEnabled(true);
	ui.my_pushButton->setText("connect");
}

void NetworkClient::OnDataReadyRead()
{
	QByteArray data = m_socket->readAll();

	//string str = data.toStdString();

	ui.my_listWidget->addItem(data);
}

void NetworkClient::OnUserRegister()
{
	CommandRegister * cmd = m_userRegister->message();
	if (cmd == 0)
	{
		printf("commandRegister error!\n");
		return;
	}
	
	string data = Package::to_data(*cmd);
	m_socket->write(data.data(), data.length());
}

//void NetworkClient::quitwindowprogram()
//{
//	this->close();
//}

//void NetworkClient::OnRegisterUser()
//{
	//RegisterUser dialog;
	//dialog.exec();
//}
