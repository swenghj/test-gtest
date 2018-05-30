// implementation of database interface
// gmock testing purpose 

#include "../include/database.h"

database::database() {
	cout << "Default record" << endl;
	this->id = "super"; this->pw = "root";
}

database::database(string id, string pw) {
	cout << "Create record" << endl;
	this->id = id; this->pw = pw;
}

database::~database() {
	cout << "Delete the record" << endl;
	this->id.clear();
	this->pw.clear();
}

bool database::check_credential(string id, string pw) {
	cout << "[passed on] ID: " << id << "/ PW: " << pw << endl;
	if (this->id == id && this->pw == pw) { 
		cout << "Identification passed!" << endl;
		return true;
	} else {
		cout << "Try again, fail to identify" << endl;
		return false;
	}
}

void database::update_credential(string id, string pw) {
	this->id = id; this->pw = pw;
}

int database::insertRecord() {
	return 0;
}

int database::updateRecord() {
	return 1;
}

int database::removeRecord() {
	return -1;
}

