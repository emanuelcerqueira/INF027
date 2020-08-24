/*58 - O valor aproximado de π pode ser calculado usando-se a série 

S = (1/1³)-(1/3³)+(1/5³)-(1/7³)+(1/9³)...

sendo π = raiz cúbica de (S*32)

Faça um programa que calcule e imprima o valor de π usando os N primeiros termos da
série (N sendo informado durante a execução do algoritmo).
*/

#include <stdio.h>
#include <math.h>
int main(){	
	
	int n;
	float pi;
	float s = 1;
	int negativoPositivo = -1;
	int i;

	printf("N:\n");
	scanf("%d", &n);
	
	for (i = 3; i < n*2; i+=2) {
		s += 1 / pow(i, 3) * negativoPositivo;
		negativoPositivo *= -1;
	}
    
	pi = cbrt(s * 32);
	
	printf("VALOR APROXIMADO DE PI: %f", pi);
	
	
	return 0;
}