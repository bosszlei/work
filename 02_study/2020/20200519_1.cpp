#include <stdio.h>
#include <string.h>

void swap(int* a,int *b);

int main(void)
{
	/*
	int* fun;
	int a = 1,b =2;
	printf("%d %d\n",a,b);
	fun = test;
	fun(&a,&b);
	printf("%d %d\n",a,b);
	*/
	int a = 1,b = 2;
	printf("%d %d\n",a,b);
	void (*test)(int*,int*);
	
	test = swap;
	test(&a,&b);
	printf("%d %d\n",a,b);
	
	(*test)(&a,&b);
	printf("%d %d\n",a,b);
	return 0;
}

void swap(int* a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
