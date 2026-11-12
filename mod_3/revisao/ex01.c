#include <stdio.h>
#include <stddef.h>

int main(void){

	int v[6] = {10, 20, 30, 40, 50, 60};
	int *p = &v[1];
	int *q = &v[4];
	ptrdiff_t qp = q - p;

	printf("%td\n", qp);
	printf("%td\n", (char*)q - (char*)p);


	return 0;
}
