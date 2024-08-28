#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	float n1, n2, opcao, somar, raiz;
		
	printf("1 - Somar dois números: \n");
	printf("2 - Raiz quadrada de um numero: \n");
	printf("Digite a opção desejada: ");
		scanf("%f", &opcao);
		
	if (opcao > 3 ) {
		printf("ERRO! DIGITE UMA OPÇÃO VALIDA!");
	} else if (opcao == 1) {
		system("cls");

		printf("Digite o primeiro número: ");
			scanf("%f", &n1);
		
		printf("Digite o segundo número: ");
			scanf("%f", &n2);
	
		somar = n1 + n2;
	
		printf("A soma dos dois numeros e de: %.2f", somar);
		
	} else if (opcao == 2) {
		system("cls");

		printf("Digite um numero: ");
			scanf("%f", &n1);
		
		raiz =sqrt(n1);
		
		printf("A raiz de %.2f e: %.2f ", n1, raiz);
	}
}
