#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef char ElemType;
typedef struct LNode{
	ElemType data;
	struct LNode* next;
}LinkList;
/*
int main(void){
	int a=0;
	int& b=a;
	printf("%d %d\n",a,b);
	b=2;
	printf("%d %d\n",a,b);
	
	const int test=0;
	printf("the value of test is %d\n",test);
	return 0;
}
*/


