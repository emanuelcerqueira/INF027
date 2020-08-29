/*61 - Faça um programa em C que crie e inicialize um array de 20 posições de inteiros com 0
para cada elemento. Imprima o vetor em seguida, indicando a posição e o valor na
posição (um por linha).
*/

#include <stdio.h>
int main(){	

	int array[20];
	int i;

	for (i = 0; i < 20; i++) {
		array[i] = 0;
		printf("array[%d] = %d\n", i, array[i]);
	}	

	return 0;
}