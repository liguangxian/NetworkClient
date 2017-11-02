#include "command_def.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	CommandRegister cmd;
	cmd.name = "liguangxian";
	cmd.type = CT_REGISTER;
	cmd.pwd = "123456";
	cmd.info = "testabcdefg";
	cmd.img = "abcdefg";

	

	//string data = cmd.to_data();
	//CommandRegister obj;
	//obj.from_data(data);

	Package package;
	package.command = &cmd;
	string pData = package.to_data();

	//Package tpackage;
	package.from_data(pData);
	cout << package.to_data().length()<< endl;
	cout << package.to_data() << endl;
}