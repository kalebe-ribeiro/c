#include <stdio.h>
#include "ops.h"

int main(void){	
	int (*calc[4])(int, int) = {soma, sub, multi, div};
	int escolha;
	int n1;
	int n2;
	int resultado;

	printf("Escolha a operação:\n[0] Soma\n[1] Subtração\n[2] Multiplicação\n[3] Divisão\n");
	scanf("%d", &escolha);
	
	while(escolha != 0 && escolha != 1 && escolha != 2 && escolha != 3){
		printf("Escolha a operação:\n[0] Soma\n[1] Subtração\n[2] Multiplicação\n[3] Divisão\n");
		scanf("%d", &escolha);
	}

	printf("Insira o primeiro valor: ");
	scanf("%d", &n1);

	printf("Insira o segundo valor: ");
	scanf("%d", &n2);

	resultado = calc[escolha](n1, n2);
	printf("Resultado: %d\n", resultado);
	return 0;
}
