//23. Escreva um programa que leia um número e imprima se este número é ou não par.

#include <stdio.h>
int main(){	
	int numero;
	printf("NUMERO:\n");
	scanf("%d", &numero);

	if (numero % 2 == 0)
		printf("PAR");
	else
		printf("IMPAR");

	return 0;
}