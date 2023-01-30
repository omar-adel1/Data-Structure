#include"Request.h"
#include"Elevator.h"

Request::Request(int req_f, int des_floor, int p,string d,int pid) :requestID{ pid }//{ rID++ }
//we should tie the Request ID to the pickable ID
{
	this->setRequestFloor(req_f); // req_floor is the source floor
	this->setDestinationFloor(des_floor);
	this->setRequestPriority(p);
	//if (req_f < des_floor) direction = "UP";
	//else direction = "DOWN";
	direction = d;
}
void Request::setRequestFloor(int f) {
	this->requestfloor = f;
}

void  Request::setRequestPriority(int p) {
	this->requestpriority = p;
}
int Request::getRequestFloor()const {
	return this->requestfloor;
}
int Request::getRequestPriority()const {
	return requestpriority;
}

int&Request::refReqPriority() {
	return requestpriority;
}
int  Request::getRequestID()const {
	return this->requestID;
}

void Request::PrintRequest()const {
	cout << "#" << this->getRequestID() << " on floor " << this->getRequestFloor() 
		<<" des_floor: "<<getDestinationFloor()<< " with p " << this->getRequestPriority() << endl;
}					   //", direction: "<< direction <<

int Request::rID = 1;

void Request::setDestinationFloor(int f) {
	this->destinationfloor = f;
}

int Request::getDestinationFloor()const {
	return this->destinationfloor;
}