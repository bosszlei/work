#include <stdio.h>
#include <math.h>

bool IsPrime(int);
int main()
{
	int n;
	printf("Please enter a integer:\n");
	scanf("%d",&n);
	printf("prime numbers:\n");
	printf("%4d%4d",2,3);
	for(int i=4;i<n;i++){
		if(IsPrime(i))
			printf("%10d",i);
	}
}

bool IsPrime(int n){
	for(int i=2;i<(int)sqrt(n);i++){
		if(n%i==0)
			return false;
	}
	return true;
}








