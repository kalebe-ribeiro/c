#include <stdio.h>

int main(void){

	char a[] = "abc";
	const char *b = "abc";

	a[0] = 'X';

	printf("a - %zu\n*b - %zu\n", sizeof(a), sizeof(b));



	return 0;
}

