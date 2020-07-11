/*
Questão I
Considere um algoritmo similar ao de cálculo de dígito verificador de código de barras do tipo UPC:O cál-
culo do dígito verificador se dá como no exemplo abaixo. Considere o código fictício: 2345. Para o cálculo do dígito verifi-
cador, você deve adicionar todos os de posições pares. No exemplo, somaremos os dígitos 2 e 4 (posição 1 e 3), o que
gera o valor 6. Multiplique 3 pelo resultado dessa soma; no exemplo, multiplicaremos 6 por 3, o que gera o valor 18. Então,
deve-se somar os dígitos das posições ímpares (3 e 5, que estão nas posições 2 e 4, no exemplo, gerando o valor 8). Adiciona-
se a este valor, soma dos dígitos pares, o resultado do produto previamente calculado (8+18 = 26, no exemplo). O dígito ve-
rificador é determinado calculando-se o número que deve ser adicionado a esta soma, para criar um múltiplo de 10; no caso
do exemplo, o dígito verificador será 4, pois 26+4 = 30, que é igual a 10 * 3.
Escreva um programa em C que leia UM ÚNICO número de 4 dígitos e gere UM ÚNICO número de 5 dígitos composto
pelos dígitos lidos seguido no número verificador. Ou seja, usando o exemplo citado, o programa deveria ler o número 2345
e gerar como saída o número 23454. 
*/

#include <stdio.h>
int main(){
	int numero, milhar, centena, dezena, unidade, pares = 0, impares = 0, digito, unidadeDigito;

	printf("NUMERO DE 4 DIGITOS: ");
	scanf("%d", &numero);
	
	milhar = numero / 1000;
	centena = (numero % 1000) / 100;
	dezena = ((numero % 1000) % 100) / 10;
	unidade = ((numero % 1000) % 100) % 10;
	
	if (milhar % 2 == 0)
		pares += milhar;
	else
		impares += milhar;

	if (centena % 2 == 0)
		pares += centena;
	else
		impares += centena;

	if (dezena % 2 == 0)
		pares += dezena;
	else
		impares += dezena;

	if (unidade % 2 == 0)
		pares += unidade;
	else
		impares += unidade;

	pares *= 3;


	unidadeDigito = (pares + impares) % 10;
	digito = 10 - unidadeDigito;

	numero = numero * 10 + digito;

	printf("NUMERO COM DIGITO: %d", numero);
	
	return 0;
}