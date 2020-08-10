/*48 e 49- Escreva um programa que determine se um dado número N (digitado pelo usuário) é
primo ou não.
*/

#include <stdio.h>
int main(){	
	
	int numero, i, qtdDivisoes = 0;
	
	printf("NUMERO:\n");
	scanf("%d", &numero);


	for (i = numero; i > 0; i--) {
		if (numero % i == 0) {
			qtdDivisoes++;
		}
	}

	if (qtdDivisoes == 2) {
		printf("O NUMERO %d EH PRIMO", numero);
	}
	else {
		printf("O NUMERO %d NAO EH PRIMO", numero);
	}

	return 0;
}