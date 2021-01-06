#include <stdio.h>
#include <iostream>
using namespace std;

int main(void){
	int* pdata = new int(2);
	
	int* pArray = new int[10];
	
	for(int i = 0;i < 10;i++)
		pArray[i] = i;
	for(int i = 0;i < 10;i++)
		cout<<pArray[i]<<endl; 
	cout<<*pdata<<endl; 
	cout<<pdata<<endl;
	
	
	int a = 2;
	int& b = a;
	b = 1;
	cout<<a<<" "<<b<<endl;
	
	return 0;
	
}

