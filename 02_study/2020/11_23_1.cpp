#include <iostream>
#include <string>
using namespace std;

class Person{
private:
	string name;
	int age;
public:
	Person(const char* nm = "", int ag = 0):name(nm), age(ag)
	{
		cout<<"构造成功"<<endl;
	}
	~Person()
	{
		cout<<"析构成功"<<endl;
	}
};

int main(void)
{
	Person per1("Tom",20);
	Person per2;
	Person per3(per1);
	Person per4 = per3;
	return 0;
}
