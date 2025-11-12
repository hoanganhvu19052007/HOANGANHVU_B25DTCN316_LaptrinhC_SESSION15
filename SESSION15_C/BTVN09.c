#include<stdio.h>
int deleteElement(int arr[],int size,int index){
	int i;
	for(i = index;i < size; i++){
		arr[i] = arr[i+1];
	}
	return size- 1;
}
int removeDuplicates(int arr[],int size){
		int newSize = size ;
		int i, j;
		for(i=0;i<newSize;i++){
			for(j=i+1;j<newSize;j++){
				if(arr[i] == arr[j]){
				newSize = deleteElement(arr,newSize,j);
				j--;
			}
		}
	}
	return newSize ;
}
int main(){
	int arr[] = {1,3,3,2,4,2,5};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;
	size = removeDuplicates(arr,size);

	printf("Mang sau khi xoa cac phan tu trung lap: ");
	for(i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
