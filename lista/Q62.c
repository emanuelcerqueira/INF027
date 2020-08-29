/*62. Faça um programa em C que leia um array de 10 posições e conte quantos números pares
são elementos do array. Imprima esta quantidade.
*/

#include <stdio.h>
int main(){	

	int array[10];
	int i;
	int qtdPares = 0;
	
	printf("10 NUMEROS INTEIROS:\n");
	
	for (i = 0; i < 10; i++) {
		scanf("%d", &array[i]);

		if (array[i] % 2 == 0)
			qtdPares++;
	}			

	printf("QTD PARES: %d", qtdPares);

	return 0;
}