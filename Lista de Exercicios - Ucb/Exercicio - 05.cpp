#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float salario, aumento, calc, salarion;
	
	printf("Digite seu salario: ");
		scanf("%f", &salario);
		
	printf("Digite o percentual do aumento: ");
		scanf("%f", &aumento);
		
		salarion = (aumento / 100) * salario;
		
		calc = salarion + salario;
		
	printf("o aumento foi de %.2f.\n", salarion);
	printf("Seu novo salário é de: %.2f", calc);
}
