/*65. Faça um programa em C que leia um array de 20 inteiros e imprima o menor e o maior
valor dentre os elementos do array, bem como suas respectivas posições.
*/

#include <stdio.h>
int main(){	

	int i;
	int v[20];
	int menor, posicaoMenor = 0;
	int maior, posicaoMaior = 0;


	for (i = 0; i < 20; i++)
		scanf("%d", &v[i]);

	menor = v[0];
	maior = v[0];

	for (i = 1; i < 20; i++) {

		if (v[i] < menor) {
			menor = v[i];
			posicaoMenor = i+1;
		}
		
		if (v[i] > maior) {
			maior = v[i];
			posicaoMaior = i+1;
		}
		
	}

	printf("MENOR NUMERO DO VETOR: %d, POSICAO %dº\n", menor, posicaoMenor);
	printf("MAIOR NUMERO DO VETOR: %d, POSICAO %dº\n", maior, posicaoMaior);

	return 0;
}