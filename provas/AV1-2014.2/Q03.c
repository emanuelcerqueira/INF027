/*
Questão III
Sabendo que triângulo é uma figura geométrica de três lados onde cada um dos lados é
menor que a soma dos outros dois, escreva um programa em C, que receba três valores e
verifique e imprima se eles podem ser os comprimentos dos lados de um triângulo
*/

#include <stdio.h>
int main(){
	
	float lado1, lado2, lado3;
	
	printf("TRES LADOS:\n");
	scanf("%f %f %f", &lado1, &lado2, &lado3);

	if ( (lado1 < (lado2 + lado3)) && (lado2 < (lado1 + lado3)) && (lado3 < (lado1 + lado2)))
		printf("PODE SER TRIANGULO");
	else
		printf("NAO PODE SER TRIANGULO");	

	return 0;
}