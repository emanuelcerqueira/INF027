//26. Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores.

#include <stdio.h>
int main(){	
	int numero1, numero2, numero3, maior, segundoMaior;

	printf("NUMEROS 1, 2 e 3:\n");
	scanf("%d %d %d", &numero1, &numero2, &numero3);	
	
	if (numero1 > numero2 && numero2 > numero3) {
		maior = numero1;
		segundoMaior = numero2;
	}
	else if (numero1 > numero3 && numero3 > numero2) {
		maior = numero1;
		segundoMaior = numero3;	
	}
	else if (numero2 > numero1 && numero1 > numero3) {
		maior = numero2;
		segundoMaior = numero1;
	}
	else if (numero2 > numero3 && numero3 > numero1) {
		maior = numero2;
		segundoMaior = numero3;	
	}
	else if (numero3 > numero1 && numero1 > numero2) {
		maior = numero3;
		segundoMaior = numero1;
	}
	else if (numero3 > numero2 && numero2 > numero1) {
		maior = numero3;
		segundoMaior = numero2;	
	}

	printf("MAIOR NUMERO: %d", maior);
	printf("\nSEGUNDO MAIOR NUMERO: %d", segundoMaior);

	return 0;
}