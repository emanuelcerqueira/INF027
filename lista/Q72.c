/*72. Escreva um programa que leia um vetor de 10 posições ordenados de inteiros e um
inteiro. O programa deve informar a primeira posição onde este inteiro ocorre no vetor ou
-1 caso o valor não ocorra no vetor (Busca Binária).
*/

#include <stdio.h>
int main(){	
	
	int i;
	int vetor[10];
	int numeroPesquisado;
	int posicao = -1;
	int inicio = 0;
	int fim = 9;
	int meio;
	
	printf("10 NUMEROS INTEIROS PARA O VETOR, EM ORDEM CRESCENTE:\n");
	for(i = 0; i < 10; i++)
		scanf("%d", &vetor[i]);


	printf("NUMERO PESQUISADO:\n");
	scanf("%d", &numeroPesquisado);

	while (inicio <= fim) {
		meio = (inicio + fim) / 2;
		
		if (numeroPesquisado == vetor[meio])
			posicao = meio;
		if (numeroPesquisado < vetor[meio])
			fim = meio - 1;
		else
			inicio = meio + 1;

	}

	printf("POSICAO: %d", posicao);

	return 0;
}