//25. Escreva um programa que leia o número equivalente ao mês e imprima a quantidade de dias deste mês.

#include <stdio.h>
int main(){	
	int mes, qtdDias;

	printf("NUMERO EQUIVALENTE AO MES:\n");
	scanf("%d", &mes);
	
	switch(mes) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			qtdDias = 31;
			break;

		case 4:
		case 6:
		case 9:
		case 11:
			qtdDias = 30;
			break;
		
		case 2:
			qtdDias = 28;
			break;
	}		
	
	printf("O MES %d TEM %d DIAS", mes, qtdDias);
	
	return 0;
}