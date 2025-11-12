#include<stdio.h>

int numberSum(int n){
	int sum = 0;
	while(n != 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main(){
	int sum = numberSum(12345) ;
	printf("Tong cac chu so nguyen la: %d", sum);
	return 0;
}

