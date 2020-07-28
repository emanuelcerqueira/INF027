/*
Questão I
 Carl aprendeu recentemente o que é o sistema binário. Ele aprendeu, por exemplo, que a
representação binária de um decimal positivo k é uma string anan−1...a1a0 onde cada ai é um dígito binário
0 ou 1, iniciando com an = 1, e de tal forma que k = Σ ai × 2i.
César, o irmão mais velho de Carl, resolveu lhe propor um desafio: "Olhe Carl, eu tenho uma pergunta
fácil para você: eu te darei um valor decimal, e você tem que me diz quantos dígitos 1 existem na
representação binária deste número. Se prepare!". Carl aceitou o desafio.
Para ajudar Carl, você deve escrever um algoritmo em C, que o ajude nesta tarefa. O algoritmo deverá
ler um decimal entre 0 e 32 e imprimir o total de dígitos 1 existentes no número.
*/

#include <stdio.h>
int main(){
	int decimal, binario = 0, contadorDeUm = 0;

	printf("decimal: \n");
	scanf("%d", &decimal);

	binario = decimal % 2;
	
	if (binario == 1) {
	    contadorDeUm++;
	}
	
	binario = (decimal / 2)  % 2;

	if (binario == 1) {
	    contadorDeUm++;
	}

	binario = (decimal / 4)  % 2;

	if (binario == 1) {
	    contadorDeUm++;
	}

	binario = (decimal / 8)  % 2;

	if (binario == 1) {
	    contadorDeUm++;
	}

	binario = (decimal / 16) % 2;

	if (binario == 1) {
	    contadorDeUm++;
	}
	
	
	printf("O BINARIO TEM %d DIGITOS '1'", contadorDeUm);


	return 0;
}