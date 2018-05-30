// database interface 
#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <string>
using namespace std;
using std::string; 

// interface class
class database {
private:
	string id; 
	string pw; 
public:
	database();
	database(string id, string pw);
	virtual ~database();	
	virtual bool check_credential(string id, string pw);
	virtual void update_credential(string id, string pw);
	virtual int insertRecord();
	virtual int updateRecord(); 
	virtual int removeRecord(); 
};

#endif 