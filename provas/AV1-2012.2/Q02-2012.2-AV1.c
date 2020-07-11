/*
Questão II
Escreva um algoritmo em linguagem C que leia o horário de entrada (hora, minuto) e o
horário de saída (hora, minuto) de uma aula e escreva o tempo de duração desta aula, no
formato hora:minuto.
*/

#include <stdio.h>
int main(){
	int horaEntrada, minutoEntrada, horaSaida, minutoSaida, tempo, tempoHora, tempoMinuto;

	printf("HORA E MINUTO DE ENTRADA:\n");
	scanf("%d %d", &horaEntrada, &minutoEntrada);

	printf("HORA E MINUTO DE SAIDA\n");
	scanf("%d %d", &horaSaida, &minutoSaida);

	tempo = (horaSaida*60 + minutoSaida) - (horaEntrada*60 + minutoEntrada);
	tempoHora = tempo / 60;
	tempoMinuto = tempo % 60;
	
	printf("DURACAO DA AULA: %d:%d", tempoHora, tempoMinuto);
	
	return 0;
}