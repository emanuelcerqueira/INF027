/*73. Escreva um programa em C que leia um array de 20 inteiros, calcule e imprima:
a. A moda dos elementos no array (elemento mais freqüente).
b. A mediana dos elementos no array (elemento central)
c. A média
*/

#include <stdio.h>
#define TAM_VETOR 20
int main(){	
	
	int i;
	int j;
	int vetor[TAM_VETOR];
	int moda;
	int qtdModa = 0;
	int qtdModaAtual;
	int numeroAtual;
	float media = 0;
	float mediana;
	
	printf("%d NUMEROS INTEIROS PARA O VETOR:\n", TAM_VETOR);
	for(i = 0; i < TAM_VETOR; i++)
		scanf("%d", &vetor[i]);

	for (i = 0; i < TAM_VETOR; i++) {
		qtdModaAtual = 0;
		numeroAtual = vetor[i];
		for (j = 0; j < TAM_VETOR; j++) {
			if (numeroAtual == vetor[j] && i != j)
				qtdModaAtual++;
				
		}
		if (qtdModaAtual > qtdModa) {
			qtdModa = qtdModaAtual;
			moda = numeroAtual;
		}
	}

	for (i = 0; i < TAM_VETOR; i++)
		media += vetor[i];

	if (TAM_VETOR % 2 != 0)
		mediana = vetor[TAM_VETOR/2];
	else
		mediana = (vetor[TAM_VETOR/2] + vetor[TAM_VETOR/2 - 1]) / 2.0;

	
	media /= TAM_VETOR;


	printf("MODA: %d\n", moda);	
	printf("MEDIA: %f\n", media);
	printf("MEDIANA: %f\n", mediana);


	return 0;
}