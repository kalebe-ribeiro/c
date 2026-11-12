#include <stdio.h>
#include <stdlib.h>
#define limite (8388608/2)

void imprime(int a, int b, int (*m)[b]){


        for(int i = 0; i < a; i++){
                for(int j = 0; j < b; j++){
                        m[i][j] = i * 10 + j;
                }
        }

        for(int i = 0; i < a; i++){
                for(int j = 0; j < b; j++){
                        printf("%d ", m[i][j]);
                }
                printf("\n");
        }

        printf("size of m: %zu\n", sizeof(m));
        printf("size of m[0]: %zu\n", sizeof(m[0]));
        printf("size of m[0][0]: %zu\n", sizeof(m[0][0]));

}

int main(int argc, char *argv[]){

	if(argc != 3){
		printf("parametros invalidos\n");
		return 1;
	}

	int i = atoi(argv[1]);
	int j = atoi(argv[2]); 

	if(i <= 0 || j <= 0){
		printf("parametros invalidos\n");
		return 1;
	}

	if((size_t)i * (size_t)j > (size_t)(limite)/(size_t)sizeof(int)){
		printf("estouro de memoria. tamanho de array superiour ao limite\n");
		return 1;
	}

	int m[i][j];

	imprime(i, j, m);

	return 0;
}
