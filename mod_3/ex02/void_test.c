#include <stdio.h>

void troca_int(int* a, int* b){

	int temp = *a;
	*a = *b;
	*b = temp;

}


int main(void){

	int a = 1;
	int b = 2;


	troca_int(&a, &b);

	printf("%d, %d.", a, b); 

	return 0;
}
