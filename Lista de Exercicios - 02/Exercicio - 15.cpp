#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	float salario, sal_mes, horas_trab, dependentes, horas_extra, salario_bruto;
	
	printf("SALARIO MINIMO = 1.412,00");
	printf("Digite as horas trabalhadas: ");
		scanf("%f", &horas_trab);
	printf("Digite o numero de dependentes: ");
		scanf("%f", &dependentes);
	printf("Digite a quantidade de horas extras: ");
		scanf("%f", &horas_extra);
		
	salario = 1412;
	horas_trab = salario / 5;
	
	sal_mes = horas_trab * horas_trab;
	
	dependentes = 32;
	
	hora_extra = hora_trab + 0.5;
	
	salario_bruto = salario + dependentes + hora_extra;
}
