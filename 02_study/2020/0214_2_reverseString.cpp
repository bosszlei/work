#include <stdio.h>
#include <string.h>

bool IsReverse(char*);
int main(void){
	char str[100];
	printf("Please input a reverse string:\n");
	while(scanf("%s",str)!=EOF){
		if(IsReverse(str))
			printf("The input string is reverse string!");
		else
			printf("Sorry!The string that you input is not reverse string");
	}
	return 0;
}

bool IsReverse(char* str){
	char* start = str;
	char* end = str;
	while(*end!='\0')end++;
	end--;
	while (start < end && start != end){
		if(*start != *end)
			return false;
		start++;
		end--;
	}
	return true;
}
