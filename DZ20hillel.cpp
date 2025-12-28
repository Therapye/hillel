#include <iostream>
using namespace std;

class myClass {
public:
	static int objectCount;
	myClass()
	{
		objectCount++;
	}
	
	static void printObjectCount() 
	{
		cout << "Count of objects: " << objectCount << endl;
	}
};
	
	int myClass::objectCount = 0;
	myClass a, b, c;


int main() {

	myClass::printObjectCount();

	return 0;
}
