#include <stdio.h>

/*采用递归的思想进行处理*/
int floor(int n){
	if(n==1)
		return 1;
	else if(n==2)
		return 2;
	else 
		return floor(n-1)+floor(n-2);
}

int main(void){
	printf("%d %d",floor(11),floor(9));
	return 0;
}
