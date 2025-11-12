#include<stdio.h>

void bubbleSort(int arr[], int size){
	int i, j;
	int swapped;
	int temp;
	for(i = 0; i < size -1; i++){
		swapped = 0;
		for(j = 0; j < size -i -1; j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swapped = 1;
			}
		}
		if(swapped = 0){
			break;
		}
	}
}
void printArray(int arr[], int n){
	int i;
	for(i = 0 ; i < n ; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	int arr[] = {5,65,12,4,745,32,97,36};
	int n = sizeof(arr)/ sizeof(int);
	bubbleSort(arr, n);
	printf("Mang duoc sap xep theo thu tu tang dan la: \n");
	printArray(arr, n);
	
	return 0;
}
