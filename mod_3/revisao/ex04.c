 #include <stdio.h>

int main(void){

	int mat[3][4];

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			mat[i][j] = i * 10 + j;
		}
	}

	int (*m)[4] = mat;

	printf("sizeof *m = %ld", sizeof(*m));
	printf("\n(m*)[2] = %d", (*m)[2]);
	printf("\n(*(m + 1))[2] = %d", (*(m + 1))[2]);
	printf("\nmat[1][2] = %d", mat[1][2]);

	int *v[4];

	printf("\nsizeof v = %ld\nsizeof m = %ld", sizeof(v), sizeof(m));
	
	printf("\n%zu %zu", sizeof mat[0], sizeof *mat);
	printf("\n%d %d\n", mat[0][2], (*mat)[2]);

	printf("%p\n%p\n", (void *)mat, (void *)(mat + 1));
	printf("%td\n", (char *)(mat + 1) - (char *)mat);
	printf("%d %d\n", mat[1][2], (*(mat + 1))[2]);	

	return 0;
}
