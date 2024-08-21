#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float area, circulo;
	
	printf("Digite a area do circulo: ");
		scanf("%f", &circulo);
		
	area = 3.14 * circulo * circulo;
	
	printf("A area do circulo e de : %.2f", area);
}
