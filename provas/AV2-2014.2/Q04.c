/*
Questão IV –
Certa vez, numa aula, a professora passou um filme para os alunos assistirem. Durante este filme, ela passou uma
lista de presença em sua sala para verificar a presença dos alunos, onde cada aluno deveria inserir apenas seu
número de registro (um número inteiro). Alguns alunos contudo, como possuem amigos que fogem da aula,
decidiram ser camaradas e inseriram os números de registro de seus amigos fujões. O problema é que muitos alunos
são amigos de alunos que fogem da aula e alguns números de registro acabaram sendo repetidamente inseridos na
lista de presença. Além de tudo, alguns dos alunos que se esperava que não estivessem na aula de fato estavam! A
professora, ao notar que a lista de presença continha alguns números repetidos, ficou sem entender, mas decidiu dar
um voto de confiança e dar presença a todos os alunos cujos números de registro estavam na lista. Como são muitos
alunos na sala e muitos números com repetição, ela pediu a sua ajuda para determinar o total de alunos que
receberam presença na aula e a o número destes alunos. Considere que a lista original possuía 50 números de
registro. (Adaptado OBI2012)
Um exemplo considerando uma lista com 10 números.
ENTRADA
1 – 10
2 – 20
3 – 50
4 – 15
5 – 50
6 – 50
7 – 20
8 – 10
9 – 7
10 – 50

SAIDA: 5
*/

#include <stdio.h>
#define TAM 10
int main(){

	int lista[TAM];
	int listaSemDuplicacao[TAM];
	int i;
	int j;
	int qtdAlunos = 0;
	int duplicidade;

	printf("INICIALIZE A LISTA:\n");
	for (i = 0; i < TAM; i++) {
		scanf("%d", &lista[i]);
	}

	listaSemDuplicacao[0] = lista[0];
	qtdAlunos++;

	for (i = 1; i < TAM; i++) {
		duplicidade = 0;
		for (j = 0; j < qtdAlunos; j++) {
			if (lista[i] == listaSemDuplicacao[j])
				duplicidade++;
		}

		if (duplicidade == 0) {
			listaSemDuplicacao[qtdAlunos] = lista[i];
			qtdAlunos++;
		}
	}

	printf("QTD. DE ALUNOS: %d", qtdAlunos);

	return 0;
}