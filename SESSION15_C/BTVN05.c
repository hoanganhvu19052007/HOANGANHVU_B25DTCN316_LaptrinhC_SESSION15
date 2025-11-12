#include <stdio.h>

int main(){
	int number[] = {1,3,2,4,5,1,2,3,2,1};
	int max = 0;
	int i, j;
	int maxValue = number[0];
	int size = sizeof(number) / sizeof(int);
	for(i = 0; i < size ; i++){
		int count = 1;
		for(j = i + 1; j < size ; j++){
			if(number[i] == number[j]){
				count++;
			}
		}
		if(max < count){
			max = count;
			maxValue = number[i];
		}
	}
	printf("Phan tu xuat hien nhieu nhat la %d, xuat hien %d lan\n", maxValue, max);
	return 0;
}


