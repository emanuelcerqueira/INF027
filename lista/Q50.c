/*50. Escreva um programa que leia um valor e imprima todas as possíveis combinações em
que o lançamento de um par de dados tenha como resultado da soma dos valores dos
dados o número lido. Por exemplo, se a entrada for o número 7, o programa deve
imprimir as seguintes combinações:

• 1 6
• 2 5
• 3 4
• 4 3
• 5 2
• 6 1

*/

#include <stdio.h>
int main(){	
	
	int numero, i, j;
	
	printf("NUMERO:\n");
	scanf("%d", &numero);

	for (i = 1; i <= 6; i++)
		for (j = 1; j <= 6; j++)
			if ((i + j) == numero)
				printf("%d %d\n", i, j);



	return 0;
}