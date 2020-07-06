/*30. Um posto está vendendo combustíveis com a seguinte tabela de descontos:
Álcool:
Até 25 litros, desconto de 2% por litro
Acima de 25 litros, desconto de 4% por litro
Gasolina:
Até 25 litros, desconto de 3% por litro
Acima de 25 litros, desconto de 5% por litro
Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível
(codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser
pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,70 e o preço do litro
do álcool é R$ 1,90.*/

#include <stdio.h>
int main(){	
	
	char tipoCombustivel;
	float litrosVendidos, valorPago, precoPorLitro, descontoMais, descontoMenos;
	
	printf("TIPO DE COMBUSTIVEL: 'A' PARA ALCOOL, 'G' PARA GASOLINA:\n");
	scanf("%c", &tipoCombustivel);

	printf("QTD. DE LITROS:\n");
	scanf("%f", &litrosVendidos);
	
	switch(tipoCombustivel) {
		case 'A':
			precoPorLitro = 1.90;
			descontoMais = 0.04;
			descontoMenos = 0.02;
			break;
		
		case 'G':
			precoPorLitro = 2.70;
			descontoMais = 0.05;
			descontoMenos = 0.03;
			break;
	}

	valorPago = precoPorLitro * litrosVendidos;

	if (litrosVendidos > 25) {
		valorPago -= valorPago*descontoMais;
	}
	else {
		valorPago -= valorPago*descontoMenos;
	}

	printf("VALOR A SER PAGO: R$%.2f", valorPago);

	return 0;
}