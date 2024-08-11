#include <stdio.h>

int main () {
	int idade = 0;
	
	printf ("Valor Inicial da idade: %d.\n", idade);
	
	printf ("Digite uma idade nova: \n", idade);
	scanf("%d", &idade);
	
	printf ("Sua idade é: %d.\n", idade);
}
