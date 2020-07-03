/*17. Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum
mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado
para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima"
no sentido de que as notas de menor valor fossem distribuídas em número mínimo
possível.  Escreva um programa que receba o valor da quantia solicitada e retorne a
distribuição das notas de acordo com o critério da distribuição ótima (considere existir
notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00).	
*/

#include <stdio.h>
int main(){	
	int valorSaque, qtd100, qtd50, qtd20, qtd10, qtd5, qtd2, qtd1;

	printf("VALOR A SACAR:\n");
	scanf("%d", &valorSaque);

	qtd100 = valorSaque / 100;
	qtd50 = (valorSaque % 100) / 50;
	qtd20 = ((valorSaque % 100) % 50) / 20;
	qtd10 = (((valorSaque % 100) % 50) % 20) / 10;
	qtd5 = ((((valorSaque % 100) % 50) % 20) % 10) / 5;
	qtd2 = (((((valorSaque % 100) % 50) % 20) % 10) % 5) / 2;
	qtd1 = (((((valorSaque % 100) % 50) % 20) % 10) % 5) % 2;

	printf("QTD. NOTAS DE R$100: %d", qtd100);
	printf("\nQTD. NOTAS DE R$50: %d", qtd50);
	printf("\nQTD. NOTAS DE R$20: %d", qtd20);
	printf("\nQTD. NOTAS DE R$10: %d", qtd10);
	printf("\nQTD. NOTAS DE R$5: %d", qtd5);
	printf("\nQTD. NOTAS DE R$2: %d", qtd2);
	printf("\nQTD. NOTAS DE R$1: %d", qtd1);
	
	return 0;
}