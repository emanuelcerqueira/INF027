/*71. Escreva um programa que leia um vetor de 10 posições de inteiros e um inteiro. O
programa deve informar a primeira posição onde este inteiro ocorre no vetor ou -1 caso o
valor não ocorra no vetor (Busca Sequencial).
*/

#include <stdio.h>
int main(){	
	
	int i;
	int vetor[10];
	int numeroPesquisado;
	int posicao = -1;
	
	printf("10 NUMEROS INTEIROS PARA O VETOR:\n");
	for(i = 0; i < 10; i++)
		scanf("%d", &vetor[i]);


	printf("NUMERO PESQUISADO:\n");
	scanf("%d", &numeroPesquisado);

	for (i = 0; i < 10; i++)
		if (vetor[i] == numeroPesquisado)
			posicao = i;

	printf("POSICAO: %d", posicao);

	return 0;
}