//24. Escreva um programa que leia três números e mostre o maior entre eles.

#include <stdio.h>
int main(){	
	int numero1, numero2, numero3, maior;

	printf("NUMEROS 1, 2 e 3:\n");
	scanf("%d %d %d", &numero1, &numero2, &numero3);
	
	maior = numero1;	

	if (numero2 > maior)
		maior = numero2;
	if (numero3 > maior)
		maior = numero3;

	printf("O MAIOR NUMERO: %d", maior);

	return 0;
}