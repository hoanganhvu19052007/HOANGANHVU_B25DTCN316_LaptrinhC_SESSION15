#include <stdio.h>

int binarySearch(int arr[], int size, int searchValue){
	int left = 0;
	int right = size -1;
	while(left <= right ){
		int mid = left + (right - left)/2;
		if(arr[mid] == searchValue){
			return mid;
		}else if(arr[mid] < searchValue){
			left = mid +1;
		}else {
			right = mid -1;
		}
	}
	return -1;
}
int main(){
	int arr[100];
	int size, i;
	int searchValue;
	printf("Nhap vao so luong phan tu cua mang (toi da 100):");
	scanf("%d", &size);
	printf("Nhap vao phan tu cua mang(da duoc sap xep):\n");
	for(i = 0; i < size ;i++){
		printf("arr[%d] = ", i);
		scanf("%d",&arr[i]);
	}
	printf("Nhap vap gia tri can tim:");
	scanf("%d",&searchValue);
	int total = binarySearch(arr, size , searchValue);
	if(total != -1){
		printf("Tim thay %d tai %d", searchValue,total);
	}else{
		printf("Khong tim thay %d !", searchValue);
	}
	return 0;
}
