#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
      float a, b, c, maior;
      int i;
      
      printf("Digite o valor de I: ( DE 1 A 3 ) ");
            scanf("%d", &i);
            
      printf("Digite o valor de A:");
            scanf("%f", &a);
            
      printf("Digite o valor de B:");
            scanf("%f", &b);
            
      printf("Digite o valor de C:");
            scanf("%f", &c);
      
      
            if (i > 4) {
                  printf("Digite um número valido!");
                  
            } else if (i == 1) {
                  printf("A ordem dos números é: %.2f, %.2f, %.2f", a, b ,c);
                  
            } else if (i == 2 ) {
                  printf("A ordem dos números é: %.2f, %.2f, %.2f", c, b , a);
                  
            } else if (i == 3 && a < b && a < c && b > a && b > c && c > a && c > b) {
                  printf("A ordem dos números é: %.2f, %2.f, %.2f ",c, a, b);
                  
            } else if (i == 3 && b < a && b < c && a > b && a > c && c > b && c > a) {
                  printf("A ordem dos números é: %.2f, %2.f, %.2f ",a, b, c);
                  
            } else if (i == 3) {
                  printf("A ordem dos números é: %.2f, %2.f, %.2f ", a, c, b);
                  
                  }
      }


