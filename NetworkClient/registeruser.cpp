#include <my_global.h>
#include "registeruser.h"
#include <QImageReader>
#include "imagelabel.h"
#include "command_def.h"
#include <QFile>
using namespace std;
UserRegister::UserRegister(QWidget *parent)
	: QDialog(parent),m_cmd(0)
{
	ui.setupUi(this);
	ui.my_imagelabel->setImage(":/image/Resources/image.png");
	ui.my_passwordLE->setEchoMode(QLineEdit::PasswordEchoOnEdit);
	ui.my_repasswordLE->setEchoMode(QLineEdit::PasswordEchoOnEdit);

	QObject::connect(ui.my_pbregister, SIGNAL(clicked()), this, SLOT(OnRegister()));

	//ui.my_pbcancel->event->accept();
	QObject::connect(ui.my_pbcancel, SIGNAL(clicked()), this, SLOT(quitwindow()));
	//QObject::connect(ui.my_pbregister, SIGNAL(clicked()), this, SLOT(OnRegister()));
	/*QImageReader ir(":/image/Resources/image.png");
	QPixmap image = QPixmap::fromImageReader(&ir);

	ui.my_imagelabel->setPixmap(image.scaled(ui.my_imagelabel->size()));*/

}

UserRegister::~UserRegister()
{
	if (m_cmd != 0)
	{
		delete m_cmd;
	}
	/*m_cmd = new CommandRegister;
	m_cmd->name = ui.my_nameLE->text().toStdString();
	m_cmd->pwd = ui.my_passwordLE->text().toStdString();
	m_cmd->info = ui.my_plainTextEdit.toStdString();
	*/
}
void UserRegister::OnRegister()
{
	emit userRegister();
}
CommandRegister* UserRegister::message()
{
	if (m_cmd)
	{
		delete m_cmd;
	}
	m_cmd = new CommandRegister;
	//m_cmd->type();//ÉèÖÃÃüÁîÀàÐÍ
	m_cmd->name = ui.my_nameLE->text().toStdString();
	m_cmd->pwd = ui.my_passwordLE->text().toStdString();
	m_cmd->info = ui.my_plainTextEdit->toPlainText().toStdString();

	const QString& filename = ui.my_imagelabel->getImage();
	QFile file(filename);

	if (file.open(QIODevice::ReadOnly))
	{
		QByteArray bytes = file.readAll();
		m_cmd->img = bytes.toStdString();
		/*delete m_cmd;
		m_cmd = 0;
		return 0;*/
	}
	else {
		delete m_cmd;
		m_cmd = 0;
	}
	return m_cmd;
	
}

//void UserRegister::CreateMysql()
//{
//	MYSQL *con = mysql_init(NULL);
//
//	if (con == NULL)
//	{
//		fprintf(stderr, "%s\n", mysql_error(con));
//		return;
//	}
//
//	if (mysql_real_connect(con, "127.0.0.1", "root", "123456", "chatdb", 0, NULL, 0) == NULL)
//	{
//		fprintf(stderr, "%s\n", mysql_error(con));
//		mysql_close(con);
//		return;
//	}
//
//	if (mysql_query(con, "CREATE DATABASE chatdb"))
//	{
//		fprintf(stderr, "%s\n", mysql_error(con));
//		mysql_close(con);
//		return;
//	}
//	mysql_close(con);
//	exit(0);
//}

void UserRegister::quitwindow()
{
	this->accept();
}
