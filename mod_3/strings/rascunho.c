#include <stdio.h>

int main(void){

	char a[] = "abc";
	char *b = "abc";

	printf("a = %p, b = %p\n", (void*)a, (void*)b);
	printf("b = %s", b);

	return 0;
}
