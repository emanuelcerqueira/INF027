/*67. Faça um programa em C que leia dois vetores de 10 posições de inteiros e copie o maior
valor dos dois em cada posição em um terceiro vetor. Em seguida, imprima este terceiro
vetor.
*/

#include <stdio.h>
int main(){	

	int i;
	int v1[10];
	int v2[10];
	int vMaiores[2];
	int maiorV1;
	int maiorV2;

	
	printf("10 NUMEROS INTEIROS, VETOR 1:\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &v1[i]);

	printf("10 NUMEROS INTEIROS, VETOR 2:\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &v2[i]);

	
	maiorV1 = v1[0];
	maiorV2 = v2[0];

	for (i = 1; i < 10; i++) {
		if (v1[i] > maiorV1)
			maiorV1 = v1[i];
		if (v2[i] > maiorV2)
			maiorV2 = v2[i];
	}	
	
	vMaiores[0] = maiorV1;
	vMaiores[0] = maiorV2;

	for(i = 0; i < 2; i++)
		printf("vMaiores[%d] = %d", i, vMaiores[i]);


	return 0;
}