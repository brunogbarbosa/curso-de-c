#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	float pe, polegadas, jardas, milhas;
	
	
	// Sabe-se que:
	//1 pé = 12 polegadas
	//1 jarda = 3 pés
	//1 milha = 1760 jardas

	printf("Digite a medida em pes: ");
		scanf("%f", &pe);
		
	polegadas = pe * 12;
	
	jardas = pe / 3;
	
	milhas = jardas / 1760;
	
	printf("Valor da polegada convertida: %.2f \n", polegadas);
	printf("Valor das jardas convertida: %.2f \n", jardas);
	printf("Valor da milha convertida : %f \n", milhas);
}
