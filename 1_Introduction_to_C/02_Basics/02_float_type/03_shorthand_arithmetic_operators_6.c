#include<stdio.h>

void PrintInt(int value){
	printf("X = %d\n", value);
}

int main(){

	int x = 5;
	PrintInt(x);

	PrintInt(++x);	
	PrintInt(x);

	return 0;
}