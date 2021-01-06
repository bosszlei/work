#include  <stdio.h>

//binarySearch func
int binarySearch(int arr[], int target, int size);

//quickSort func
void quickSort(int arr[], int left, int right);

//print array
void print(int arr[],int size);


//binarySearch func
int binarySearch(int arr[], int target, int size)
{
	int left = 0, right = size - 1;
	while (left <= right){
		int mid = (left + right) /2;
		if (target == arr[mid]){
			return 1;
		} else if(target < arr[mid]){
			right = mid -1;
		} else {
			left = mid + 1;
		}
	}
	return 0;
}

//quickSort func
void quickSort(int arr[], int left, int right)
{
	int low = left, high = right;
	int index = arr[low];

	if(left >= right)
		return;

	while (low < high){

		while (low < high && arr[high] >= index){
			high--;
		}
		arr[low] = arr[high];

		while (low < high && arr[low] <= index){
			low++;
		}
		arr[high] = arr[low];
	}
	arr[low] = index;
	quickSort(arr, left, low - 1);
	quickSort(arr, low + 1, right);

}

void print(int arr[],int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%3d",arr[i]);
	}
	printf("\n");
}

int main(void)
{
	/*test for binarySearch function*/
	int arr1[] = {1,3,5,7,9,11,13,15,17,19,21,23};	
	int size1 = sizeof(arr1) / sizeof(int);
	int res = binarySearch(arr1, 23, size1);
	printf("%d",res);
	printf("\n");

	/*test for quickSort function*/
	int arr2[] = {10,9,8,7,6,5,4,3,2,1};
	int size2 = sizeof(arr2) / sizeof(int);
	print(arr2, size2);
	quickSort(arr2, 0, size2 - 1);
	print(arr2, size2);


	return 0;
}