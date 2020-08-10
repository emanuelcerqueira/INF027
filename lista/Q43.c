/*43 - Escreva um programa que imprima todos os números pares do intervalo fechado de 1 a
100.
*/

#include <stdio.h>
int main(){	
	
	int i;
	
	for (i = 1; i <= 100; i++) {
		if (i % 2 == 0)
			printf("%d\n", i);
	}

	return 0;
}