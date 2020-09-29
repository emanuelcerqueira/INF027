/*
Questão I -

Escreva um programa em C, que receba uma sequência de N números inteiros e um valor X. Este programa deverá computar e imprimir qual a quantidade de subsequencias de inteiros consecutivos em N, que quando somados resultam exatamente em X.
Por exemplo, a figura abaixo mostra uma sequência de N = 10, para a qual existem 5 subsequencias cuja soma
dos números é igual a K = 5. 
*/

#include <stdio.h>
int main(){	

	int i;
	int j;
	int N;
	int K;
	int somatorioAtual;
	int qtdSubsequencias = 0;

	printf("N:\n");
	scanf("%d", &N);

	printf("K:\n");
	scanf("%d", &K);


	int arr[N];

	for (i = 0; i < N; i++) {
		printf("VALOR DE arr[%d]:\n", i);
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < N; i++) {
		somatorioAtual = 0;

		for (j = i; j < N; j++) {
			somatorioAtual += arr[j];
			
			if (somatorioAtual == K)
				qtdSubsequencias++;
		}
	}

	printf("QTD. DE SUBSEQUENCIAS CONSECUTIVAS: %d\n", qtdSubsequencias);

	return 0;
}