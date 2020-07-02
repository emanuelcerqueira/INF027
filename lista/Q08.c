//8. Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leia um valor de temperatura em Fahrenheit e exibi-lo em Celsius 

#include <stdio.h>
int main(){
	float fahrenheit, celsius;

	printf("FAHRENHEIT: \n");
	scanf("%f", &fahrenheit);

	celsius = 5/9.0 * (fahrenheit - 32);
	
	printf("CELSIUS: %.2f", celsius);
			
	return 0;
}