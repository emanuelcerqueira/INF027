/*64. Faça um programa em C que leia um array de 20 inteiros e imprima o menor e o maior
valor dentre os elementos do array.
*/

#include <stdio.h>
int main(){	

	int i;
	int v[20];
	int menor;
	int maior;


	for (i = 0; i < 20; i++)
		scanf("%d", &v[i]);

	menor = v[0];
	maior = v[0];

	for (i = 1; i < 20; i++) {

		if (v[i] < menor)
			menor = v[i];

		if (v[i] > maior)
			maior = v[i];
	}

	printf("MENOR NUMERO DO VETOR: %d\n", menor);
	printf("MAIOR NUMERO DO VETOR: %d\n", maior);

	return 0;
}