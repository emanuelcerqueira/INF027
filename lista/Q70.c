/*70. Escreva um programa que carregue um array com tamanho variável. O tamanho máximo
do array é de 100 posições (carga de array com sentinela).
*/

#include <stdio.h>
int main(){	
	
	int tamanho;
	int i;
	
	printf("TAMNHO DO ARRAY:\n");
	scanf("%d", &tamanho);
	
	if (tamanho > 0 && tamanho < 100 ) {
		int array[tamanho];

		printf("DIGITE %d VALORES INTEIROS PARA O ARRAY:\n", tamanho);
		for (i = 0; i < tamanho; i++)
			scanf("%d", &array[i]);

		for (i = 0; i < tamanho; i++)
			printf("array[%d] = %d", i, array[i]);
		
	}
	else
		printf("TAMANHO INVALIDO");

	return 0;
}