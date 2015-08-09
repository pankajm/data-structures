#include<stdio.h>

void insertion(int arr[], int no){
	
	int i, j, temp;
	for(i = 1; i < no; i++){
		temp = arr[i];
		for(j = i - 1; j >= 0; j--){
			if(temp < arr[j]){
				arr[j + 1] = arr[j];
			}
			else
			{
				arr[j + 1] = temp;
				break;
			}
		}
		arr[j + 1] = temp;
	}
}

void bubble(int arr[], int no){

	int i, j, temp;
	for(i = 1; i < no; i++){
	
		for(j = 0; j < no - i; j++){
		
			if(arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		
		}
	}
}

void selection(int arr[], int no){
	int i, j, smallestIndex, temp;
	for(i = 0; i < no; i++){
	
		smallestIndex = i;
		for(j = i + 1; j < no; j++)
		{
			if(arr[j] < arr[smallestIndex])
				smallestIndex = j;
		}
		temp = arr[i];
		arr[i] = arr[smallestIndex];
		arr[smallestIndex] = temp;
	}
}

int main(){

	int arr[] = {5, 3, 8, 6, 2, 7, 9, 1, 12}, i;
	int arr1[] = {5, 4, 8, 6, 20, 7, 9, 24};
	int arr2[] = {5, 4, 8, 6, 20, 7, 9, 24};
	selection(arr, 9);
	for(i = 0; i < 9; i++)
		printf("%d ", arr[i]);
	printf("\n");
	bubble(arr1, 8);
	for(i = 0; i < 8; i++)
		printf("%d ", arr1[i]);
	printf("\n");
	insertion(arr2, 8);
	for(i = 0; i < 8; i++)
		printf("%d ", arr2[i]);
	printf("\n");
}
