/*
Questão II
Escreva um programa em C, que receba três números representando uma coordenada
geográfica expressa em graus, minutos e segundos, calcule e imprima este valor em
graus decimais. Para tanto, considere que 60 minutos equivalem a um grau e 60
segundos equivalem a um minuto. Assim, por exemplo, 37o39’20’’ (37 graus, 39 minutos
e 20 segundos) equivalem, aproximadamente, a 37.65556 graus decimais.
*/

#include <stdio.h>
int main(){
	
	float graus, minutos, segundos, grausDecimais;

	printf("GRAUS:\n");
	scanf("%f", &graus);

	printf("MINUTOS:\n");
	scanf("%f", &minutos);

	printf("SEGUNDOS:\n");
	scanf("%f", &segundos);

	grausDecimais = graus + minutos / 60 + segundos / 3600;

	printf("GRAUS DECIMAIS: %.5f", grausDecimais);

	return 0;
}