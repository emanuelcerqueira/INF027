/*
Questão III -
Bruninho está programando um personagem virtual para o próximo desafio de um jogo
de aventura em que, numa das fases, o personagem tem que entrar em um corredor,
percorrer algumas salas e depois sair do corredor. Ele pode entrar apenas uma vez, e
passar por cada sala apenas uma vez. Todas as salas possuem uma porta de entrada e uma
de saída. Ao passar por uma sala o jogador ganha um certo número de vidas (que pode
ser negativo!). O objetivo é passar pelo corredor coletando a maior quantidade possível
de vidas! Por sorte, sempre existe ao menos uma sala onde se ganha um número positivo
de vidas.
Sala 0
-2

Sala1
5 Vidas

Sala 2
-1 Vidas

Sala 3
8 Vidas

Sala 4
-11 Vidas

Sala 5
7 Vidas

Sala 6
3 Vidas
No exemplo acima, o personagem de Bruninho pode ganhar, no máximo, 12 vidas, por
exemplo, entrando pela sala 1 e saindo pela sala 3 (5-1+8 = 12). Você deve escrever um
programa que, leia o número de vidas correspondentes a cada sala do corredor (o
corredor possui dez salas), calcule e imprima a quantidade máxima de vidas que será
possível ganhar.
Baseado na OBI 2014.

*/

#include <stdio.h>
#define TAM 7
int main(){

	int i;
	int j;
	int salas[TAM];
	int qtdVidasAtual;
	int maiorQtdVidas = 0;

	

	for (i = 0; i < TAM; i++) {
	    printf("QTD. VIDAS DA SALA %d:\n", i);
	    scanf("%d", &salas[i]);
	}
		

	for (i = 0; i < TAM; i++) {
		qtdVidasAtual = 0;
		
        if (i != TAM-1) {
    		for (j = i; j < TAM; j++) {
    			qtdVidasAtual += salas[j];
    			
    			if (qtdVidasAtual > maiorQtdVidas)
    				maiorQtdVidas = qtdVidasAtual;    		
    				
    		}
        }
	}
	printf("QUANTIDADE MAXIMA DE VIDAS QUE SERA POSSIVEL GANHAR: %d\n", maiorQtdVidas);

	return 0;
}