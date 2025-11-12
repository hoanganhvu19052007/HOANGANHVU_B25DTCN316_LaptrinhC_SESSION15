#include<stdio.h>

int totalSum(int number[], int size){
	int i;
	int sum = 0;
	for(i = 0 ; i < size ;i++){
		sum += number[i];
	}
	return sum;
}
int main(){	
	int number[] = {3,4,6,7,2,5};
	int size = sizeof(number) / sizeof(int);	
	int sum = totalSum(number, size);
	printf("Tong cac phan tu trong mang la: %d", sum);
	
	return 0;
}
