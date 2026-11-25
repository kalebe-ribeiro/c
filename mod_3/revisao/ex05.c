#include <stdio.h>

int main(void){

	int x = 1;
	int y = 2;

	const int *a = &x;
	int *const b = &x;
	const int *const c = &x;
	int const *d = &x;

//	*a = 10;
	a = &y;
	*b = 10;
//   	b = &y;
//	*c = 10;
//   	c = &y;
//	*d = 10;
	d = &y;

	printf("\nx = %d, *a = %d, *b = %d, *c = %d, *d = %d\n", x, *a, *b, *c, *d);







	return 0;
}

