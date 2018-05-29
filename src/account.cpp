#include "../include/account.h"

Account::Account(string id, string pw) {
	this->id = id;
	this->pw = pw; 
}

string Account::getId() {
	return this->id;
}

string Account::getPass() {
	return this->pw;
}

void Account::setId(string id) {
	this->id = id;
}

void Account::setPass(string pw) {
	this->pw = pw;
}
