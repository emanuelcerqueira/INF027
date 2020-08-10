//45 - Escreva um programa que leia 5 números, e imprima a média entre eles.

#include <stdio.h>
int main(){	
	
	float numero1, numero2, numero3, numero4, numero5, media;
	
	printf("5 NUMEROS:\n");
	scanf("%f", &numero1);
	scanf("%f", &numero2);
	scanf("%f", &numero3);
	scanf("%f", &numero4);
	scanf("%f", &numero5);

	media = (numero1 + numero2 + numero3 + numero4 + numero5) / 5;

	printf("MEDIA: %.3f", media);

	return 0;
}