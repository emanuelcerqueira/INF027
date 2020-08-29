/*66. Faça um programa em C que copie o conteúdo de um vetor de 10 posições de inteiro em
um segundo vetor e imprima este último.
*/

#include <stdio.h>
int main(){	

	int i;
	int v[10];
	int vCopia[10];

	
	printf("10 NUMEROS INTEIROS:\n");

	for (i = 0; i < 10; i++)
		scanf("%d", &v[i]);

	for (i = 0; i < 10; i++)
		vCopia[i] = v[i];

	for (i = 0; i < 10; i++)
		printf("vCopia[%d] = %d\n", i, vCopia[i]);

	return 0;
}