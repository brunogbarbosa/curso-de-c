#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	float salario, novo_sal, acresc, calc;
	
	printf("Digite seu salario: ");
		scanf("%f", &salario);
		
	if (salario <= 500) {
		
		acresc = salario * 0.05 + 150;
		novo_sal = salario + acresc;
			
			printf("O salario com a bonificação e de %.2f", novo_sal);
			
		} else if (salario > 500 && salario <= 600) {
					
			acresc = salario * 12/100 + 150;
	
			novo_sal = salario + acresc ;
		
			printf("O salario com a bonificação e de %.2f", novo_sal);

		} else if (salario > 500 && salario < 1200) {
			acresc = salario * 12/100;
			novo_sal = salario + acresc;
				
				printf("O salario com a bonificacao e de %.2f", novo_sal);
				
		} else if (salario > 600 && salario <= 1200 ) {
			acresc = salario * 12/100 + 100;
			novo_sal = salario + acresc;
				
				printf("O salario com a bonificacao e de %.2f", novo_sal);
	
		} else if (salario > 1200 ) {
			novo_sal = salario + 100;
			
			printf("O Salario acima de %.2f nao tem bonificacao, apenas auxilio - escola. o valor e de %.2f", salario,  novo_sal);
		}
	} 

