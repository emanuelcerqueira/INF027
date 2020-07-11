/*
Questão II
O controle do colesterol plasmático é importante na prevenção de doenças coronarianas. Um dos fatores
mais importantes na prevenção destas doenças é a redução dos níveis de LDL-Colesterol no plasma sanguíneo. Contudo a
medição direta do LDL-Colesterol, uma partícula de tamanho muito menor que as do HDL-Colesterol por exemplo, requer
processos de ultra-centrifugação, que tornam este exame muito caro e somente possível de ser executados em laboratórios
de pesquisa com equipamentos muito específicos.
Assim, os laboratórios costumam usar a equação de Friedewald para estimar o LDL-Colesterol à partir dos valores do Co-
lesterol Total, HDL-Colesterol Total e Triglicerídeos:
[colesterol total] − [HDL total] − 20% do valor de triglicerídios = LDL estimado.
Considere a tabela abaixo e escreva um programa em C, que leia os valores de Colesterol Total, HDL- Colesterol Total e
Triglicerídeos de um paciente, para indicar em qual categoria de nível de LDL-Colesterol, ele se encontra:
*/

#include <stdio.h>
int main(){
	
	float colesterolTotal, hdlTotal, trigliceridios, ldl;

	printf("COLESTEROL TOTAL:\n");
	scanf("%f", &colesterolTotal);

	printf("HDL TOTAL:\n");
	scanf("%f", &hdlTotal);

	printf("TRIGLICERIDIOS:\n");
	scanf("%f", &trigliceridios);

	ldl = colesterolTotal - hdlTotal - 0.2 * trigliceridios;

	if (ldl < 100)
		printf("%.2f mg/dl - OTIMO", ldl);

	else if (ldl >= 100 && ldl < 130)
		printf("%.2f mg/dl - SUB-OTIMO", ldl);

	else if (ldl >= 130 && ldl < 160)
		printf("%.2f mg/dl - LIMITROFE", ldl);

	else if (ldl >= 160 && ldl < 190)
		printf("%.2f mg/dl - ALTO", ldl);

	else if (ldl >= 190)
		printf("%.2f mg/dl - MUITO ALTO", ldl);
	
	return 0;
}