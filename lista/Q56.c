/*56 - Um número se diz perfeito se é igual à soma de seus divisores próprios. Divisores
próprios de um número positivo N são todos os divisores inteiros positivos de N exceto o
próprio N. Por exemplo, o número 6, seus divisores próprios são 1, 2 e 3, cuja soma é
igual à 6 (1 + 2 + 3 = 6). Outro exemplo é o número 28, cujos divisores próprios são 1, 2,
4, 7 e 14, e a soma dos seus divisores próprios é 28 (1 + 2 + 4 + 7 + 14 = 28).
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