/*
Questão IV
O algoritmo ou fórmula de Luhn é um algoritmo para validação de números de
identificação. O maior uso do algoritmo de Luhn é na validação de números de cartões
de crédito. Contudo o algoritmo de Luhn pode ser utilizado em sequencia de números de
tamanho qualquer. Para a verificação do número o algoritmo se baseia nas seguintes
operações:
Dada uma sequência de números inteiros positivos (inclusive o dígito verificador), a
inverta. Em seguida, adicione o primeiro número a um somatório geral. Multiplique o
segundo número por 2 e execute a operação "noves fora", adicionando o resultado ao
somatório. Faça o mesmo com os demais números, ou seja ora adicione diretamente o
número ao somatório, ora o multiplique por 2, realizando "noves fora" e adicionando ao
somatório.
Por fim, verifique se o somatório é divisível por 10. Se for, o número é válido. Senão, é
inválido.
	
	// 1 8 6 7
	// 2 8 12 7
	// 2 8 3 7
	// somatorio: 20

Escreva um algoritmo em C que lê um número de até quatro dígitos e verifica se é um
número de identificação válido de acordo com a fórmula de Luhn e imprima “Número
Válido”ou “Número Inválido”conforme o caso.
*/

#include <stdio.h>
int main(){


	int numero, somatorio = 0;
	
	printf("NUMERO DE QUATRO DIGITOS:\n");
	scanf("%d", &numero);
	
	somatorio += numero / 1000 * 2 % 9;
	somatorio += numero % 1000 / 100 % 9;
	somatorio += numero % 1000 % 100 / 10 * 2 % 9;
	somatorio += numero % 1000 % 100 % 10 % 9;
	
	printf("SOMATORIO: %d\n", somatorio);

	if (somatorio % 10 == 0) {
		printf("NUMERO VALIDO");
	}
	else {
		printf("NUMERO INVALIDO");
	}
	return 0;
}