#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n1, n2, n3, n4, soma;
	
	printf("Digite 4 numeros: ");		
		scanf("%d", &n1);	
		scanf("%d", &n2);	
		scanf("%d", &n3);	
		scanf("%d", &n4);	
		
	soma = n1 + n2 + n3 + n4;
	
	printf("A soma dos numeros é de: %d", soma);
}
