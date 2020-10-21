#include <stdio.h>

#define N 5
#define FALSO 0
#define VERDADEIRO 1
int main(){	

	int i;
	int j;
	int k;
	int matriz[N][N];
	int quantidadeUm = 0;
	int ehMatrizDePermutacao = VERDADEIRO;

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("Valor na posicao (%d,%d): ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (matriz[i][j] == 1) {
				
				quantidadeUm++;

				for (k = 0; k < N; k++) {
					if (matriz[i][k] != 0 && k != j)
						ehMatrizDePermutacao = FALSO;
					if (matriz[k][j] != 0 && k != i)
						ehMatrizDePermutacao = FALSO;
				}

			}
			else if (matriz[i][j] != 0) {
				ehMatrizDePermutacao = FALSO;
			}
		}
	}

	if (quantidadeUm != N)
		ehMatrizDePermutacao = FALSO;
	
	if (ehMatrizDePermutacao == VERDADEIRO)
		printf("a matriz lida eh uma matriz de permutacao\n");
	else
		printf("a matriz lida NAO eh uma matriz de permutacao\n");

	return 0;
}