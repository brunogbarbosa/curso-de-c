#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float valor, juros, rendimento, valor_total;
	
	printf("=========================\n");
	printf("     ALTA - REND\n");
	printf("=========================\n");
	    fflush(stdout);
	    
	printf("Digite o valor que deseja depositar: ");
		scanf("%f", &valor);
		
	printf("Digite o valor do juros: ");
		scanf("%f", &juros);
	
	
	rendimento =  valor * juros/100;
		
	valor_total = rendimento + valor;
	
	
	printf("----------------------------------------------\n");
	printf("Valor total do rendimento: %.2f \n", rendimento);
	printf("Valor total depois do rendimento: %.2f\n", valor_total);
	printf("==============================================\n");

	

}
