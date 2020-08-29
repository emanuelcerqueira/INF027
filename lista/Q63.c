/*63. Escreva um programa que leia dois vetores de números reais de mesma dimensão (10
posições), e imprima o vetor resultante da soma destes vetores.
*/

#include <stdio.h>
int main(){	

	float v1[10];
	float v2[10];
	float vr[10];
	int i;
	
	printf("10 NUMEROS PARA O VETOR 1:\n");	
	for (i = 0; i < 10; i++)
		scanf("%f", &v1[i]);

	printf("10 NUMEROS PARA O VETOR 2:\n");
	for (i = 0; i < 10; i++)
		scanf("%f", &v2[i]);

	for (i = 0; i < 10; i++)
		vr[i] = v1[i] + v2[i];

	printf("VETOR RESULTANTE:");

	for (i = 0; i < 10; i++)
		printf("%.2f\n", vr[i]);

	return 0;
}