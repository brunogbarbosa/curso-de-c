#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	float numero, quadrado, cubo, r_cubo, r_quadrada;
	
	printf("Digite um valor maior que 0: ");
		scanf("%f", &numero);
		
	quadrado = pow(numero,2);
	
	cubo = pow(numero,3);
	
	r_quadrada = sqrt(numero);
	
	r_cubo = powf(numero,1.0/3.0);
	
	printf("o valor do quadrado e: %.2f \n", quadrado);
	
	printf("o valor do cubo e: %.2f \n", cubo);

	printf("o valor do raiz quadrada e: %.2f \n", r_quadrada);
	printf("o valor do raiz do cubo e: %.2f \n", r_cubo);

	
}
