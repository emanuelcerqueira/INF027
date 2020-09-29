/*
Questão III -

Escreva um programa em C, que leia um número natural positivo N e gere a lista de todos os
elementos da lista a(n) = sigma(n), onde sigma(n) é a somatória dos divisores de n com n <= N, por
exemplo, para N = 10, o programa deverá imprimir: 1, 3, 4, 7, 6, 12, 8, 15, 13, 18
*/

#include <stdio.h>
int main(){	

	int i;
	int j;
	int somaDivisores;
	int numero;

	printf("NUMERO NATURAL N:\n");
	scanf("%d", &numero);

	for (i = 1; i <= numero; i++) {
		somaDivisores = 0;

		for (j = i; j >= 1; j--)
			if (i % j == 0)
				somaDivisores += j;

       		// condicional para formatação de vírgula
		if (i != numero)
			printf("%d, ", somaDivisores);
		else
			printf("%d\n", somaDivisores);
	}


	return 0;
}