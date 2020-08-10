/*44 -  Escreva um programa que imprima todos os números de 1 até 100, inclusive, e a soma
de todos eles.
*/

#include <stdio.h>
int main(){	
	
	int i, soma = 0;
	
	for (i = 1; i <= 100; i++) {
		printf("%d\n", i);
		soma += i;
	}

	printf("SOMA: %d", soma);

	return 0;
}