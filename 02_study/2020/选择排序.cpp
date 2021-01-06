#include <stdio.h>

//select sort function
void selectSort(int arr[], int len);

//bubble sort function
void bubbleSort(int arr[], int len);

//swap two numbers 
void swap(int* a, int* b);

//print array function
void printArray(int* arr, int len);

int main(){
    
	//int array[] = {2,1,5,4,30,123,123,98,43,13,12,14,8,9,2,3,7,3,10,15,20,19,16};

	int array[] = {10,9,8,7,6,5,4,3,2,1};
	int size = sizeof(array) / sizeof(*array);
	printArray(array,size);

	selectSort(array, size);
	//bubbleSort(array, size);
	printArray(array, size);
	
}

void selectSort(int arr[], int len)
{
	int tmpIndex;

	for (int i = 0; i < len; i++){
		tmpIndex = i;
		for (int j = i + 1; j < len; j++){
			if (arr[j] < arr[tmpIndex])
				tmpIndex = j;
		}
		if (i != tmpIndex){
			swap(&arr[i], &arr[tmpIndex]);
		}
	}
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void bubbleSort(int arr[], int len)
{
	bool flag;

	for (int i = 0; i < len; i++){
		flag = false;
		for (int j = 0; j < len - 1- i; j++){
			if (arr[j] > arr[j + 1]){
				swap(&arr[j], &arr[j + 1]);
				flag = true;
			}
		}
		if (flag == false)
			break;
	}
}