#include <stdio.h>
#include <stdint.h>

typedef struct {
	char c;
	int i;
} teste_struct;

void troca_n(void* a, void* b, size_t n){

	unsigned char *pa = a;
	unsigned char *pb = b;
	unsigned char temp_a;
	for (size_t c = 0; c < n; c++){

		temp_a = pa[c];
		pa[c] = pb[c];
		pb[c] = temp_a;
	}


}

int main(void){

	teste_struct ci_1;
	teste_struct ci_2;
	ci_1.c = 1;
	ci_1.i = 2;
	ci_2.c = 2;
	ci_2.i = 1;
	double a = 1;
	double b = 2;
	//int32_t c = 3;
	//int32_t d = 4;


	troca_n(&a, &b, sizeof(a));
	printf("a = %f, b = %f\n", a, b);

	troca_n(&ci_1, &ci_2, sizeof(ci_1));
	printf("ci_1.c = %d, ci_1.i = %d\nci_2.c = %d, ci2_i = %d\n", ci_1.c, ci_1.i, ci_2.c, ci_2.i);

	int x = 1;
	void *p = &x;

	printf("*p = %d, p + 1 = %p, p++ = %p", *p, p + 1, p++);

	return 0;
}
