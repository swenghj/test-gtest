// this class uses the database interface 
// this is the component under the test 
#ifndef MYDB_H
#define MYDB_H

#include "database.h"

class MyDatabase {
private:
	database mdb;	// using interface class 
public:
	MyDatabase(const database &db) { mdb = db; }
	bool login(string id, string pw) {
		if(mdb.check_credential(id, pw)) {
			cout << "Login successful!" << endl;
			return true;
		} else {
			cout << "Try again, login failed" << endl;
			return false; 
		}
	}
	void update_database(string id, string pw) {
		mdb.update_credential(id, pw);
		cout << "Update login successful!" << endl; 
	}
	int create_record() {
		cout << "Create record successful!" << endl;
		return mdb.insertRecord();
	}
};

#endif