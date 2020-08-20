/*57 - Sendo S = 1 + 1/2^2 + 1/3^3 +... 1/N^N
usuário) termos, escreva um programa para calcular S para um número N

*/

#include <stdio.h>
int main(){	
	
	int numero, somaDivisores = 0;

	printf("NUMERO INTEIRO:\n");
	scanf("%d", &numero);


	for (int i = 1; i <= (numero / 2); i++)
		if (numero % i == 0)
			somaDivisores += i;

	if (numero == somaDivisores)
		printf("%d EH UM NUMERO PERFEITO", numero);
	else
		printf("%d NAO EH UM NUMERO PERFEITO", numero);
	
	return 0;
}