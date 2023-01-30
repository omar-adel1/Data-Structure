#include"Elevator.h"
#include<iostream>
using namespace std;

class Request {
	int requestfloor;
 //very important because once we load from a certain floor, we will cascade the list to remove all items where
	//the requestfloor==the currentfloor...this should be done before entering the 'M' mode because that case 
	//the currentfloor will HAVE BEEN inc/decremented by 1 
	int destinationfloor;
	string direction;
	int requestpriority;
	const int requestID;
	static int rID;
public:
	Request(int,int,int,string,int);
	//Setters and getters
	void setRequestFloor(int);
	void setDestinationFloor(int);
	void setRequestPriority(int);
	int getRequestFloor()const;
	int getDestinationFloor()const;
	int getRequestPriority()const;
	int&refReqPriority();
	int getRequestID()const;
	void PrintRequest()const;
};

