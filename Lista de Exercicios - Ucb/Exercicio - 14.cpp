#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int ano_nasc, id_atual, ano_atual, idade_f;
	
	printf("Digite seu ano de nascimento: ");
		scanf("%i", &ano_nasc);
	
	printf ("Digite seu ano atual: ");
		scanf("%i", &ano_atual);
	
	id_atual = ano_atual - ano_nasc;
	
	idade_f =  2050 - ano_nasc; 
	
	printf("Sua idade e %i anos. \n ", id_atual);
		printf("Sua idade em 2050 sera %i anos.", idade_f);
	
}
