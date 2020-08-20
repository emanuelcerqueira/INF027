/*54 - Construa um programa que receba um número e verifique se ele é um número triangular.
(Um número é triangular quando é resultado do produto de três números consecutivos.
Exemplo: 24 = 2 x 3 x 4)
*/

#include <stdio.h>
int main(){	
	
	int numero, triangular, i;

	printf("NUMERO:\n");
	scanf("%d", &numero);

	for(i = 1; (i * (i+1) * (i+2)) <= numero; i++)
		triangular = i * (i+1) * (i+2);

	if (triangular == numero)
		printf("TRIANGULAR: %d x %d x %d = %d", i-1, i, i+1, numero);
	else
		printf("NAO TRIANGULAR");
	
	return 0;
}