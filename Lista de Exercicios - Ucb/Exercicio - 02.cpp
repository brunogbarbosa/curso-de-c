#include <stdio.h>
#include <stdlib.h>


int main() {
	
	float n1, n2, n3, n4, soma , media;
	
	printf("Digite 4 numeros: ");
		scanf("%f", &n1);
		scanf("%f", &n2);
		scanf("%f", &n3);
		scanf("%f", &n4);
		
		soma = n1 + n2 + n3 + n4;
		media = soma / 4;
			
	printf("A soma dos numeros e: %.2f e a media e: %.2f", soma, media);

	}
