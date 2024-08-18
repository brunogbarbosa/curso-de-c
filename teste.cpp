#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float salario, calc, acresc, novo_salario; 
	
	printf("Digite seu salario: ");
		scanf("%f", &salario);
	
	printf("Digite o acrescimo em % ");
		scanf("%f", &acresc);
		
		novo_salario = salario * acresc / 100;
	
		calc = salario + novo_salario;
	
	printf("Seu novo salario com o acrescimo e de %.2f", calc);
}
