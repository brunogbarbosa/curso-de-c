#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	float n1, n2, calc;
	
	printf("Digite um numero maior que 0: ");
		scanf("%f", &n1);
		
		if( n1 > 0) {
			printf("Digite outro numero maior que 0: ");
				scanf("%f", &n2);
		} else {
			printf("ERRO! Você digitou o numero 0 ou um numero menor que ele.");
		}
		
	calc = pow(n1,n2);
	
	printf("Um numero elevado ao outro e igual : %.2f", calc);
}
