#include<stdio.h>

void PrintInt(int x){
	printf("X = %d\n", x);
}

int main(){

	int x = 5;
	PrintInt(x);

	x = x % 2;
	PrintInt(x);

	x %= 2;
	PrintInt(x);

	return 0;
}