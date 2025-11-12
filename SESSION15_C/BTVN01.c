#include<stdio.h>
#include<stdlib.h>

int calculateDifference(number1, number2){
	abs(number1 - number2);
	int result = abs(number1 - number2);
	return result;
}
int calculateProduct(number1, number2){
	int total = number1 * number2;
	return total;
}
int main(){
	int result = calculateDifference(30, 20);
	printf("Hieu cua hai so tren la: %d", result);
	
	int total = calculateProduct(10, 20);
	printf("\nTich cua hai so tren la: %d", total);
	return 0;
}
