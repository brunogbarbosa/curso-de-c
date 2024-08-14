#include <stdlib.h>
#include <stdio.h>

int main() {
		
	float n1, n2, n3, p1, p2, p3, totalpeso, media, totalnota;
	
	printf("Digite as notas: ");
		scanf("%f", &n1);
		scanf("%f", &n2);
		scanf("%f", &n3);
		
	totalnota = n1 + n2 + n3;
	
	printf("Digite os pesos:" );
		scanf("%f", &p1);
		scanf("%f", &p2);
		scanf("%f", &p3);
	
	totalpeso = p1 + p2 + p3;
	
	media = (n1 * p1 + n2 * p2 + n3 * p3 ) / totalpeso;

	printf("A soma das notas e de: %.2f e a media e de: %.2f", totalnota, media);
}
