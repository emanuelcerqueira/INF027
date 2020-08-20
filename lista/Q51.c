/*51. A série de Fibonacci é formada pela sequencia:
• 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
Escreva um programa que gere a série de FIBONACCI até o N-ésimo termo (com N
sendo uma entrada do algoritmo).
*/

#include <stdio.h>
int main(){	
	
	int enesimo;
	int atual;
	int anterior;
	int aux;
	
	
	printf("N-ENESIMO TERMO:\n");
	scanf("%d", &enesimo);

	for (int i = 1; i <= enesimo; i++) {
		if (i == 1) {
			atual = 1;
		}
		else if (i == 2) {
			atual = 1;
			anterior = 1;
		}
		else {
			aux = atual;
			atual = atual + anterior;
			anterior = aux;
		}
		printf("%d, ", atual);
		
	}
	
	return 0;
}