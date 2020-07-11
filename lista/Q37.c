/*37. Uma Cia de pulverização utiliza avião para pulverizar lavouras. Os custos de
pulverização dependem do tipo de praga e da área a ser contratada conforme a tabela:
Tipo 1 – ervas daninhas R$ 50,00 por acre;
Tipo 2 – gafanhotos R$ 100,00 por acre;
Tipo 3 – broca R$ 150,00 por acre;
Tipo 4 – todos acima R$ 250,00 por acre.
Se a área a ser pulverizada for superior a 1000 acres, o fazendeiro tem um desconto de
5%. Em adição, qualquer fazendeiro cujo custo for maior do que R$ 750,00 tem um
desconto de 10% sobre o valor que ultrapassar os R$ 750,00. Caso ambos os descontos se
aplicam o da área é calculado antes. Fazer um algoritmo que leia: o tipo de pulverização
(1 a 4) e área a ser pulverizada; e imprima o valor a ser pago.
*/

#include <stdio.h>
int main(){	
	
	int tipoPulverizacao;
	float area, precoPorAcre, valorPago;

	printf("TIPO PULVERIZACAO:\n");
	scanf("%d", &tipoPulverizacao);

	printf("AREA:\n");
	scanf("%f", &area);

	switch(tipoPulverizacao) {
		case 1:
			precoPorAcre = 50;
			break;

		case 2:
			precoPorAcre = 100;
			break;

		case 3:
			precoPorAcre = 150;
			break;

		case 4:
			precoPorAcre = 250;
			break;
	}
	

	valorPago = area * precoPorAcre;

	if (area > 1000)
		valorPago -= valorPago * 0.05;
	if (valorPago > 750)
		valorPago -= (valorPago - 750) * 0.1;
	
	printf("VALOR A SER PAGO: %.2f", valorPago);

	return 0;
}