#include <stdio.h>

int main(void){

	int m[3][4];

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			m[i][j] = i * 10 + j;
		}
	}

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	printf("size of m: %zu\n", sizeof(m));
	printf("size of m[0]: %zu\n", sizeof(m[0]));
	printf("size of m[0][0]: %zu\n", sizeof(m[0][0]));

	printf("%p\n", (void*)&m[0][0]);
	printf("%p\n", (void*)&m[0][3]);
	printf("%p\n", (void*)&m[1][0]);
	printf("%p\n", (void*)&m[2][3]);

	return 0;
}
