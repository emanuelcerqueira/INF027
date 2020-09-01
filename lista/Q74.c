/*74. Escreva um programa em C que armazene um vetor de até 30 inteiros. O programa deve
fornecer as seguintes operações:
a. Inserir um elemento no final do vetor
b. Inserir um elemento em uma dada posição
c. Remover um elemento de uma posição indicada
d. Remover todos elementos iguais a um valor indicado
e. Gerar um novo array sem duplicidades a partir deste array

*/

#include <stdio.h> 
#define MAX_tamanhoVetor 256
int main(){	
	
	int i;
	int j;
	int k;
	int tamanhoVetor = 0;
	int vetor[MAX_tamanhoVetor];
	int opcao;
	int posicao;
	int elemento;


	for (i = 0; i < tamanhoVetor; i++)
		scanf("%d", &vetor[i]);

	do {
		printf("\n=======================================================\n");
		printf("DIGITE 1 PARA INSERIR UM ELEMENTO NO FINAL DO VETOR\n");
		printf("DIGITE 2 INSERIR UM ELEMENTO EM UMA DADA POSICAO\n");
		printf("DIGITE 3 REMOVER UM ELEMENTO EM UMA POSICAO INDICADA\n");
		printf("DIGITE 4 REMOVER TODOS ELEMENTOS IGUAIS A UM VALOR INDICADO\n");
		printf("DIGITE 5 PARA GERAR UM ARRAY SEM DUPLICIDADES A PARTIR DO ARRAY ATUAL\n");
		printf("DIGITE 6 PARA LISTAR O ARRAY\n");
		printf("DIGITE 0 PARA SAIR\n");
		printf("=======================================================\n");

		scanf("%d", &opcao);

		switch(opcao) {
			
			case 1:
				if (tamanhoVetor == 30) {
					printf("A CAPACIDADE MAXIMA DO VETOR EH DE 30 POSICOES:\n");
				}				

				printf("DIGITE O ELEMENTO PARA O FINAL DO VETOR:\n");
				scanf("%d", &elemento);				

				tamanhoVetor++;

				vetor[tamanhoVetor-1] = elemento;

				break;

			case 2:
				printf("DIGITE A POSICAO, SENDO A PRIMEIRA POSCIAO 0:\n");
				scanf("%d", &posicao);
			
				if (posicao >= tamanhoVetor) {
					printf("POSICAO INVALIDA\n");
					break;
				}
				
				printf("DIGITE O ELEMENTO PARA A POSICAO %d NO VETOR:\n", posicao);
				scanf("%d", &elemento);

				vetor[posicao] = elemento;

				break;

			case 3:
				printf("DIGITE A POSICAO, SENDO A PRIMEIRA POSCIAO 0:\n");
				scanf("%d", &posicao);
			
				if (posicao >= tamanhoVetor) {
					printf("POSICAO INVALIDA\n");
					break;
				}

				for (i = posicao; i < tamanhoVetor - 1; i++)
					vetor[i] = vetor[i+1];

				printf("REMOVIDO\n");
				tamanhoVetor--;
				break;

			case 4:
				printf("DIGITE OS ELEMENTO PARA REMOVER TODOS IGUAIS:\n");
				scanf("%d", &elemento);

				for (i = 0; i < tamanhoVetor; i++) {
					if (vetor[i] == elemento) {
						posicao = i;
						for (j = posicao; j < tamanhoVetor; j++)
							vetor[j] = vetor[j+1]; 

						tamanhoVetor--;
						i--;
					}
				}
				break;

			case 5:
				for (i = 0; i < tamanhoVetor; i++) {
					for (j = 0; j < tamanhoVetor; j++) {
						if (vetor[i] == vetor[j] && i != j) {
							posicao = i;
							for (k = posicao; k < tamanhoVetor; k++)
								vetor[k] = vetor[k+1]; 

							tamanhoVetor--;
						}
					}
				}
				break;
		
			case 6:
				printf("\n");
				for(i = 0; i < tamanhoVetor; i++)
					printf("vetor[%d] = %d\n", i, vetor[i]);
				break;
		}

		
	}
	while(opcao != 0);

	

	return 0;
}