#include<stdio.h>

int soNguyendaonguoc(int n){
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n = n / 10;
    }
    return reversed;
}
int main(){
	int reversed = soNguyendaonguoc(1234);
	printf("%d", reversed);
}
