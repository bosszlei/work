#include <iostream>
using namespace std;

class MyInit{
private:
	int data[10];
	int dex;
	bool IsMemeryOK();
	//void printMyInit();

public:
	void push();
	void pop();
	void printMyInit();

};

bool MyInit::IsMemeryOK()
{
	return true;
}

void MyInit::printMyInit()
{
	if (IsMemeryOK())
	{
		cout << "Run successfully!"<<endl;
	}
}

int main(void)
{
	MyInit obj1;
	obj1.printMyInit();
	return 0;
}