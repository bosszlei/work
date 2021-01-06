#include <iostream>
using namespace std;

class Demo {
	int id;
public:
	Demo(int i) {
		id = i;
		cout << "id=" << id << " constructed" << endl;
	}
	~Demo() {
		cout << "id=" << id << " destructed" << endl;
	}
};

Demo d1(1);
void Func()
{
	static Demo d2(2);
	Demo d3(3);
	cout << "func" << endl;
}
int main () {
	Demo d4(4);
	d4 = 6;
	cout << "main" << endl;
	{ Demo d5(5);
	}
	Func();
	cout << "main ends" << endl;
	return 0;
}
/*
输出结果:
id=1 constructed		全局变量d1被创建，之后进入main()函数。
id=4 constructed		执行Demo d4(4);转换构函数被调用。
id=6 constructed		执行d4 = 6;转换构造函数被调用。生成一个临时变量(对象)，并且将临时变量赋值给d4
id=6 destructed			临时变量(对象)
main					执行cout << "main" << endl;
id=5 constructed		进入局部域中，执行Demo d5(5); 转换构造函数被调用
id=5 destructed			退出局部域，局部域中的d5对象被销毁
id=2 constructed		执行Func();执行static Demo d2(2);创建一个静态局部对象d2，转换构造函数被调用
id=3 constructed		执行Demo d3(3);转换构造函数被调用，创建对象d3
func					执行cout << "func" << endl;
id=3 destructed			退出Func()域，销毁其中的局部非静态变量d3，但是局部静态变量d2不被销毁
main ends				返回主函数，执行cout << "main ends" << endl;
id=6 destructed			main()函数执行完毕。main()函数中局部变量被销毁。
id=2 destructed			静态局部变量被销毁。
id=1 destructed			全局变量被销毁。
*/
