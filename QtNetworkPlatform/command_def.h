#ifndef _COMMAND_DEF_H_
#define _COMMAND_DEF_H_
#include <cstdint>
#include <string>
#include "qtnetworkplatform_global.h"
using namespace std;
enum CommandType
{
	CT_REGISTER,
	CT_MESSAGE,
	CT_END
};
struct ISerializable
{
	virtual const string to_data() const = 0;
	virtual void from_data(const string&) = 0;

};
struct Message
{
	CommandType type;
	string data;
	//uint8_t* data;
	//char* data;
	int len;
};
//struct Buf
//{
//	sint_t* data;
//};
//struct Command
struct Command : public ISerializable
{
	//CommandType type;
	virtual CommandType type() const = 0;
	virtual uint16_t len() = 0;
	virtual ~Command() {} 
	
};
//struct CommandMessage : public Command
//{
//	// Inherited via Command
//
//
//	// Inherited via Command
//	virtual const string to_data() const override;
//
//	virtual void from_data(const string &) override;
//
//	virtual uint16_t len() override;
//
//};
struct CommandRegister : public Command
{
	string name;
	string pwd;
	string info;
	string img;
	CommandRegister();
	virtual const string to_data() const override;
	virtual void from_data(const string&) override;
	virtual uint16_t len() override;
	virtual CommandType type() const;
	int length() const;
};
struct Package : public ISerializable
{
	Package();
	Package(Command*cmd);
	~Package();
	//Message message;
	//ring start;
	//nt16_t len;  //所包含的命令的数据长度

	Command *getcmd()const;
	//ring end;
					//void  to_data(string&);
				    //void from_data(const string&);
					// Inherited via ISerializable
					/*virtual const string  to_data() const override;
					virtual void from_data(const string &) override;*/
					// Inherited via ISerializable
	virtual const string to_data() const override;

	virtual void from_data(const string &) override;
	static const string to_data(const Command&);
private:
	Command *command;

};

void Packsge2Data(const Package&, string&);
void data2Package(Package&, const string&);
#endif
