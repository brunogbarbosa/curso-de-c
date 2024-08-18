#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float salario_base, imposto, gratif, salario_novo;
	
	
	printf("============================\n");
    printf("   SOMADOR DE SALARIOS \n"); 
    printf("============================\n");
    	fflush(stdout);
    	
    printf("Digite seu salario base: ");
    	scanf("%f", &salario_base);
    
    gratif = salario_base * 0.05;
	imposto = salario_base * 0.07;    
    
	salario_novo = salario_base + gratif - imposto;
	
	printf("Sua gratificacao e de: 5%% \n");
	printf("Seu imposto e de: 7%% \n");
	printf("O total do seu salario com Gratificacao e Imposto e de: %.2f", salario_novo);
}
