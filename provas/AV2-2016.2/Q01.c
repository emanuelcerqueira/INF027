/*
Questão I -
Um número primo é um número que possui somente dois divisores: ele mesmo e o
número 1. Um número primo p é um número primo de Chen se o próximo número
ímpar (p + 2) é primo ou o produto de dois primos (subprimo).
Escreva um programa em C, que leia um número e verifique se ele é um número primo
de Chen. Por exemplo,
2 é um primo de Chen, pois 2+2 = 4 e 4 é subprimo (2*2).
3 é um primo de Chen, pois 3+2 = 5 e 5 é primo.
*/

#include <stdio.h>
int main(){	
	
	int p, pPlusTwo, i, j, k, qtdDivisoes = 0;
	
	printf("p:\n");
	scanf("%d", &p);

	pPlusTwo = p + 2;


	for (i = p; i > 0; i--)
		if (p % i == 0)
			qtdDivisoes++;

	if (qtdDivisoes == 2) {
		// CASO 1: ALEM DE P SER PRIMO P+2 TAMBÉM É PRIMO
		qtdDivisoes = 0;

		for (i = pPlusTwo; i > 0; i--)
			if (pPlusTwo % i == 0)
				qtdDivisoes++;

		if (qtdDivisoes == 2) {
			printf("%d EH PRIMO DE CHEN, POIS %d + 2 = %d E %d EH PRIMO\n", p, p, pPlusTwo, pPlusTwo);			
		}

		qtdDivisoes = 0;
		
		
		// CASO 2: ALEM DE P SER PRIMO P+2 É SUBPRIMO
		for (i = 2; i < pPlusTwo; i++) {
			qtdDivisoes = 0;

			for (k = i; k > 0; k--)
				if(i % k == 0)
					qtdDivisoes++;
			
			if (qtdDivisoes == 2) {
				for (j = 2; j < pPlusTwo || i * j == pPlusTwo; j++) {
					qtdDivisoes = 0;

					for (k = j; k > 0; k--)
						if(j % k == 0)
							qtdDivisoes++;

					if (qtdDivisoes == 2 && (i * j) == pPlusTwo) {
						printf("%d EH PRIMO DE CHEN, POIS %d + 2 = %d E %d EH SUBPRIMO (%d * %d)\n", p, p, pPlusTwo, pPlusTwo, i, j);			
						
						//PARAR O LOOP
//						i = pPlusTwo;
//						j = pPlusTwo;
					}

				}
			}
		}	


	}


	return 0;
}