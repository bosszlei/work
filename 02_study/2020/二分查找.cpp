#include <stdio.h>

#define SEARCH_VALUE 30

int *binarySearch(int *head, int size, int value, int* index)
{
	int* pTmp = head;
	int left = 0, right = size -1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		*index = mid;
		if (*(pTmp + mid) == value) {
			return pTmp + mid;
		} else if(*(pTmp + mid) > value){
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	
	return NULL;
}

int main(void)
{
	int array[] = {1,4,7,12,14,16,18,19,25,27,30};
	int size = sizeof(array) / sizeof(int);
	int* pRes;
	int index;
	pRes = binarySearch(array,size,SEARCH_VALUE,&index);
	if (pRes)
	{
		printf("%d\n",*pRes);
		printf("%d\n",index);		
	} else {
		printf("The data you find is error!");
	}
	return 0;
}
