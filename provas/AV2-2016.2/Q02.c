/*
Questão II -
A sequencia de Recamán é uma sequência, onde seus os termos são dados pela seguinte
relação:
A0 = 0; para n > 0,
An = An-1 – n, se o termo for positivo e já não estiver na sequência,
An = An-1 + n, caso contrário.
Escreva um programa em C, que gere e armazene em um vetor de vinte posições, os 20
primeiros termos da série (seu algoritmo deverá ser feito de forma a permitir a mudança
do tamanho do vetor com o mínimo de impacto).
Exemplo da série de Recamán até o nono termo: 0, 1, 3, 6, 2, 7, 13, 20, 12, 21...

Baseado na OBI 2014.

*/

#include <stdio.h>
#define TAM 20
int main(){

	int novoElemento;
	int i;
	int j;
	int arr[TAM];
	arr[0] = 0;
	int qtdElementosAtual = 1;


	for (i = 1; i < TAM; i++) {
		novoElemento = arr[i - 1] - i;

		if (novoElemento < 0)
			novoElemento = arr[i - 1] + i;

		for (j = 0; j < qtdElementosAtual; j++)
			if (novoElemento == arr[j])
				novoElemento = arr[i - 1] + i;

		arr[i] = novoElemento;
		qtdElementosAtual++;
	}

	for(i = 0; i < TAM; i++)
		printf("arr[%d] = %d\n", i, arr[i]);

	return 0;
}