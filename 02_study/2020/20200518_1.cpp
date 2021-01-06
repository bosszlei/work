#include <stdio.h>






#define DEBUG































int main(void)
{
    /*
	int a = 10;
	int* p = &a;
	printf("%p\n",p);
	return 0; 
	*/


    int a[100];
    printf("sizeof(a) is %d\n ", sizeof(a));
    printf("sizeof(a[100]) is %d\n ", sizeof(a[100]));
    printf("sizeof(&a) is %d\n ", sizeof(&a));
    printf("sizeof(&a[0]) is %d\n ", sizeof(&a[0]));
   
    
}
