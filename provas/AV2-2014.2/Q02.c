/*
Questão II - 
Números primos gêmeos na teoria dos números são dois números primos cuja diferença é igual a dois. Os primeiros
pares de números primos gêmeos são (3, 5), (5, 7), (11, 13), (17, 19), (29, 31) e (41, 43).
Escreva um programa em C que imprima os primeiros N pares de números primos, onde N é uma entrada para o
programa em questão.
*/

#include <stdio.h>
int main(){
	
	int i;
	int j;
	int numeroAtual;
	int possivelPar;
	int numeroDivisoes;
	int n;
	int numeroDePrimosGemeos = 0;

	printf("N:\n");
	scanf("%d", &n);

	for (i = 1; numeroDePrimosGemeos < n; i++) {

		numeroAtual = i;
		numeroDivisoes = 0;
		
		for (j = numeroAtual; j >= 1; j--) {
			if (numeroAtual % j == 0)
				numeroDivisoes++;
		}
		
		if (numeroDivisoes == 2) {
		    
			possivelPar = numeroAtual + 2;
			numeroDivisoes = 0;
			
			for (j = possivelPar; j >= 1; j--) {
				if (possivelPar % j == 0)
					numeroDivisoes++;
			}

			if (numeroDivisoes == 2) {
			    numeroDePrimosGemeos++;
				printf("(%d, %d), ", numeroAtual, possivelPar);
			}
		}
	}
	
	return 0;
}