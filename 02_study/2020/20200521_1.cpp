#include <stdio.h>

void bubbleSort(int* array,int numSize);

int main(void)
{
	int arr[] = {2,3,1,5,12,41,98,23,23,19,3,2,3,4,2,4,276,234,3,12,23,34,5,5,};
	int size = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,size);
	for (int i = 0; i < size;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

void bubbleSort(int* array,int numSize)
{
	int i,j;
	for (i = 0;i < numSize;i++){
		for (j = 0;j < numSize - i-1;j++){
			if (array[j] > array[j+1]){
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	printf("%d\n",'F'); 
}
