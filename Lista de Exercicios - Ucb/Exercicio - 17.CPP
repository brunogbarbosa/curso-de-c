#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main()
{ float salario, cheque1, cheque2, cpmf1, cpmf2, saldo;

	printf("\nDigite o salario recebido: ");
		scanf("%f",&salario);
		
	printf("\nDigite o valor do 1 cheque: ");
		scanf("%f",&cheque1);
		
	printf("\nDigite o valor do 2 cheque: ");
		scanf("%f",&cheque2);
		cpmf1 = cheque1 * 0.38 / 100;
		cpmf2 = cheque2 * 0.38 / 100;
	
		saldo = salario - cheque1 - cheque2 - cpmf1 - cpmf2;
	printf("\nO valor do saldo e: %.2f",saldo);

}
