#include <iostream>
#include <string>
using namespace std;

class Student{
private:
	string name;
	string ID;
	float score;
public:
	Student(string na, string id, float sc):name(na),ID(id),score(sc){}
	~Student(){}
	void Print()
	{
		cout<< name <<"  "<< ID << "  "<<score<<endl;
	}
	
};

int main()
{
	Student stu("zhangsan", "1000", 95.0);
	stu.Print();
	return 0;
}
