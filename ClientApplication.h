#ifndef CLIENTAPPLICATION_H
#define CLIENTAPPLICATION_H

#include "ServerMediator.h"
#include <cstdio>
#include <iostream>

namespace TP1{

class ClientApplication {

public:
	int runApplication(int,char**);

private:
	const static bool _logging = true;
	ServerMediator _mediator;
	unsigned _numTimeouts;
	std::string getClientInput();
	long long convertTime(std::string);
	void displayResponse(std::string);
	bool isValidMessage(std::string);
	void insertSeqNum(int, std::string&);


};

} //namespace







#endif
