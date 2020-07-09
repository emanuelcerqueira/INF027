/*34. Uma financeira usa o seguinte critério para conceder empréstimos: o valor total do
empréstimo deve ser até dez vezes o valor da renda mensal do solicitante e o valor da
prestação deve ser no máximo 30% da renda mensal do solicitante. Escreva um programa
que leia a renda mensal de um solicitante, o valor total do empréstimo solicitado e o
número de prestações que o solicitante deseja pagar e informe se o empréstimo pode ou
não ser concedido.
*/

#include <stdio.h>
int main(){	
	
	float renda, valorEmprestimo, prestacoes, valorPrestacao, valorMaximoEmprestimo;
	
	printf("RENDA:\n");
	scanf("%f", &renda);

	printf("VALOR DO EMPRESTIMO:\n");
	scanf("%f", &valorEmprestimo);

	printf("PRESTACOES:\n");
	scanf("%f", &prestacoes);

	valorMaximoEmprestimo = renda * 10;
	valorPrestacao = valorEmprestimo / prestacoes;

	if ((valorEmprestimo <= valorMaximoEmprestimo) && (valorPrestacao <= (renda * 0.3)))
		printf("EH POSSIVEL REALIZAR EMPRESTIMO");
	else
		printf("NAO EH POSSIVEL REALIZAR EMPRESTIMO");
	
	
	return 0;
}