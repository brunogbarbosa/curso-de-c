#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float salario_base, salario_novo, gratif, imposto;
	
	printf("=========================\n");
	printf(" VERIFICADOR DE SALARIOS\n");
	printf("=========================\n");
	    fflush(stdout);
	
	printf("Digite seu salario: ");
		scanf("%f", &salario_base);
	
	gratif = 50;
	imposto = salario_base * 0.07;	
	
	salario_novo = salario_base + gratif - imposto;
	
	printf("Sua gratificacao e: R$50,00\n");
	printf("Seu imposto e de 7%% \n");
	printf("---------------------------------------------------------------------\n");
	printf("O calculo do seu salario com a GRATIFICACAO e o IMPOSTO e de: %.2f \n", salario_novo);
	printf("---------------------------------------------------------------------\n");

}
