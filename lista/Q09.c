//9. Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado seu raio e sua altura.

#include <stdio.h>
int main(){
	float raio, altura, volume;
	float pi = 3.14159;	

	printf("RAIO: \n");
	scanf("%f", &raio);

	printf("ALTURA: \n");
	scanf("%f", &altura);
	
	volume = pi * raio * raio * altura;
	
	printf("VOLUME: %.2f", volume);
			
	return 0;
}