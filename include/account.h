#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <iostream>
using namespace std; 

class Account {
private:
	string id;
	string pw;
public:
	Account(string id, string pw);
	string getId();
	string getPass();
	void setId(string id);
	void setPass(string pw);
};

#endif