//22. Escreva um programa que leia um número e exiba o seu módulo.

#include <stdio.h>
int main(){	
	int numero, modulo;
	printf("NUMERO:\n");
	scanf("%d", &numero);

	if (numero < 0)
		modulo = -numero;
	else
		modulo = numero;

	printf("|%d| = %d", numero, modulo);

	return 0;
}