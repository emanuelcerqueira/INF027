/*
Questão I
Escreva um algoritmo em linguagem C que leia um número de até três dígitos (menor
ou igual a (777)8) em octal (sistema de numeração base 8) e escreva o seu equivalente
em base 10. Por exemplo, o número (435)8, equivale ao número (285)10. (4*82 + 3*81 +
5*80 = 4*64+ 3*8+5*1=256+24+5=285). Demonstre um teste de mesa considerando os
valores indicados (entrada = 435; saída=285).
*/

#include <stdio.h>
int main(){
	int octal, decimal = 0;
	
	printf("NUMERO DE TRES DIGITOS OCTAL:\n");
	scanf("%d", &octal);
	
	decimal += octal / 100 * 64;
	decimal += octal % 100 / 10 * 8;
	decimal += octal % 100 % 10;
	
	printf("(%d)8 = (%d)10", octal, decimal);

	return 0;
}