/*52. A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são
fornecidos pelo usuário; a partir daí, os termos são gerados com a soma ou subtração dos
dois termos anteriores, ou seja:
1. Ai = Ai-1 + Ai-2, para i ímpar
2. Ai = Ai-1 - Ai-2, para i par	
  
Criar um algoritmo em PORTUGOL que imprima os N primeiros termos da série de
FETUCCINE, sabendo-se que para existir esta série serão necessários pelo menos três
termos.

*/

#include <stdio.h>
int main(){	
	
	int enesimo;
	int atual;
	int anterior;
	int aux;
	int primeiroTermo;
	int segundoTermo;


	printf("PRIMEIRO TERMO:\n");
	scanf("%d", &primeiroTermo);

	printf("SEGUNDO TERMO:\n");
	scanf("%d", &segundoTermo);
		
	printf("QTD DE TERMOS:\n");
	scanf("%d", &enesimo);

	for (int i = 1; i <= enesimo; i++) {
		if (i == 1) {
			atual = primeiroTermo;
		}
		else if (i == 2) {
			atual = segundoTermo;
			anterior = primeiroTermo;
		}
		else {
			aux = atual;
			if (i % 2 == 0)
				atual = atual - anterior;
			else
				atual = atual + anterior;

			anterior = aux;
		}
		printf("%d, ", atual);
		
	}
	
	return 0;
}