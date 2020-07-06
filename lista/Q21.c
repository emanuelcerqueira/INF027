//21. Escreva um programa que leia um número e exiba se ele é positivo ou negativo.

#include <stdio.h>
int main(){	
	int numero;
	printf("NUMERO:\n");
	scanf("%d", &numero);

	if (numero < 0)
		printf("O NUMERO %d E NEGATIVO", numero);
	else
		printf("O NUMERO %d E POSITIVO", numero);

	return 0;
}