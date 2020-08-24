/*59 - O número e (número de Euler) pode ser representado e calculado por meio da utilização
da série de Taylor para e quando x=1, como a soma da seguinte série infinita:

e = 1 + (1/1!) + (1/2!) + (1/3!) ... + (1/n!)

Escreva um programa, que leia o número de termos da série (n) e imprima como saída, o
cálculo do número de Euler para cada um dos n primeiros elementos da série
*/

#include <stdio.h>
int main(){	
	
	int n;
	float e = 1;
	float fatorialAtual;
	int i;
	int j;

	printf("N:\n");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		
		fatorialAtual = i;	
			
		for (j = fatorialAtual-1; j > 1; j--)
			fatorialAtual *= j;
        
		e += 1 / fatorialAtual;
	}
   
	
	printf("NUMERO DE EULER: %f", e);
	
	
	return 0;
}