#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float salario, calc, acrescimo;
	
	printf("Digite seu salario: ");
		scanf("%f", &salario);
	
	acrescimo = salario * 0.25;

	calc = salario + acrescimo;
	
	printf("Seu novo salario com o acrescimo e de: %.2f !", calc);
}
