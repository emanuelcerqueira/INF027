/*57 - Sendo S = 1 + 1/2^2 + 1/3^3 +... 1/N^N
usuário) termos, escreva um programa para calcular S para um número N

*/

#include <stdio.h>
int main() {
	
	int i;
	int j;
	int n;
	float s;
	float potencia;

	printf("N:\n");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
	    potencia = i;
		for (int j = 0; j < i-1; j++)
		    potencia *= i;
		    
        s += 1 / potencia;
	}
	
	printf("S = %f", s);
	
	return 0;
}