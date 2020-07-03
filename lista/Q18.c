//18. Escreva um programa que permute o valor de duas variáveis inteiras.

#include <stdio.h>
int main(){	
	int numero1, numero2, aux;
	
	printf("NUMERO 1:\n");
	scanf("%d", &numero1);

	printf("NUMERO 2:\n");
	scanf("%d", &numero2);

	aux = numero1;
	numero1 = numero2;
	numero2 = aux; 

	printf("NUMERO 1: %d", numero1);
	printf("\nNUMERO 2: %d", numero2);
	
	return 0;
}