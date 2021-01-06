#include <stdio.h>

#define TESTNUM 100

int main(void){
	unsigned short num1 = TESTNUM*11/10;
	unsigned short num2 = TESTNUM*9/10;
	printf("%d %d",num1,num2);
	
	return 0;
}
