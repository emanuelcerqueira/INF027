/*60 - A famosa conjectura de Goldbach diz que todo inteiro par maior que 2 é soma de dois
números primos. Testes foram feitos, mas ainda não se achou um contra-exemplo.
Escreva um programa mostrando que a afirmação é verdadeira para todo número par
entre 500 e 1000. O

*/

#include <stdio.h>
int main(){
	
	int i, j, k, numeroAtual, numeroDivisoes, soma;

	for(i = 2; i <= 1000; i++) {
		numeroAtual = i;
		numeroDivisoes = 0;

		for (j = numeroAtual; j >= 1; j--)
			if (numeroAtual % j == 0)
				numeroDivisoes++;

		if (numeroDivisoes == 2) {
		
			for(k = 2; k <= 1000; k++) {
				numeroAtual = k;
				numeroDivisoes = 0;
				

				for (j = numeroAtual; j >= 1; j--)
					if (numeroAtual % j == 0)
						numeroDivisoes++;
	
				if (numeroDivisoes == 2) {
					soma = i + k;
					if (soma >= 500 && soma <= 1000)
						printf("%d + %d = %d\n", i, k, soma);
				}
			
			}
	
		}

	}

	return 0;
}
