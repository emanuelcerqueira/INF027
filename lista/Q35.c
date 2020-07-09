/*35. Escreva um programa que leia um número inteiro de 1 a 7 e informe o dia da semana
correspondente, sendo domingo o dia de número 1. Se o número não corresponder a um
dia da semana, mostre uma mensagem de erro.
*/

#include <stdio.h>
int main(){	
	
	int diaDaSemana;

	printf("NUMERO DE 1 A 7 CORRESPONDENTE AO DIA DA SEMANA:\n");
	scanf("%d", &diaDaSemana);

	switch(diaDaSemana) {
		case 1:
			printf("DOMINGO");
			break;
		case 2:
			printf("SEGUNDA-FEIRA");
			break;
		case 3:
			printf("TERCA-FEIRA");
			break;
		case 4:
			printf("QUARTA-FEIRA");
			break;
		case 5:
			printf("QUINTA-FEIRA");
			break;
		case 6:
			printf("SEXTA-FEIRA");
			break;
		case 7:
			printf("SABADO");
			break;
		default:
			printf("ERRO: %d NAO EH EQUIVALENTE A NENHUM DIA DA SEMANA", diaDaSemana);
			break;
	}
	
	return 0;
}