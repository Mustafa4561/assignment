#include<iostream>
using namespace std;

class Door
{
private:
 bool isOpen;
 bool isLocked;

public:

void openDoor();
void closeDoor();
void lockDoor();
void unlook();
bool isDoorOpen();
bool isDoorLocked();
};

void Door::openDoor(){
	 isOpen=true;
}
void Door::closeDoor(){
 	isOpen=false;
}
void Door::isDoorOpen() {
    return isOpen;
}


int main()
{

return 0;
}