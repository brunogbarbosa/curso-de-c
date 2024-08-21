#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float n_quadrado, n_cubo, r_quadrada, r_cubica, n_positivo;
	
	printf("Digite um número positivo e maior que 0: ");
		scanf("%f", &n_positivo);
		
		
	n_quadrado = n_positivo * n_positivo;
	
	n_cubo = n_positivo * n_positivo * n_positivo;
	
	r_quadrada = n_positivo * 2 / n_positivo;
	
	r_cubica = n_positivo * 3 / n_positivo;
		
	printf("O numero digitado ao quadrado e: %.2f \n", n_quadrado);
	
	printf("O numero digitado ao cubo: %.2f \n", n_cubo);
	
	printf("A raiz quadrada do numero: %.2f \n", r_quadrada);
	
	printf("A raiz cubica: %.2f \n", r_cubica);
		
	 
}
