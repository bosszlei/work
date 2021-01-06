#include <stdio.h>
#include "E:\05_c program\2020\myString.h" 
//#include <string.h>

int main(void)
{
	char testArray[] = "I love China that is the best country in the world!";
	
	printf("my test string length is %d\n", my_strlen(testArray));
	//printf("string length is %d\n", strlen(testArray));
	
	return 0;
}
