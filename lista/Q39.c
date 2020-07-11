/*39. Em diversas situações, é útil o uso de dígitos verificadores. Dígito
verificador ou algarismo de controle é um mecanismo de autenticação utilizado para
verificar a validade e a autenticidade de um valor numérico, evitando dessa forma fraudes
ou erros de transmissão ou digitação. Uma das formas mais comuns de cálculo de dígito
verificadores é o método conhecido por módulo 11. O cálculo do DV no módulo 11 é
feito, é feito como se segue: para calcular o primeiro dígito verificador, cada dígito do
número, começando da direita para a esquerda (do dígito menos significativo para o
dígito mais significativo) é multiplicado, na ordem, por 2, depois 3, depois 4 e assim
sucessivamente, até o primeiro dígito do número. O somatório dessas multiplicações
dividido por 11. O resto desta divisão (módulo 11) é subtraído da base (11), o resultado é
o dígito verificador. O Banco do Brasil utiliza o código módulo 11, substituindo por X o
valor do dígito verificador quando este é 10 e se o resultado for 11 então o DV da conta é 0. 
Escreva um programa que receba umnúmero com os 4 primeiros dígitos de uma agência e 
imprima o número da agência completo (numero – dv).
*/

#include <stdio.h>
int main(){	

	int numero, dv = 0;

	printf("NUMERO DA AGENCIA:\n");
	scanf("%d", &numero);

	dv += (numero / 1000) * 5;
	dv += ((numero % 1000) / 100)  * 4;
	dv += (((numero % 1000) % 100) / 10)  * 3;
	dv += (((numero % 1000) % 100) % 10)  * 2;

	dv %= 11;
	dv = 11 - dv;

	if (dv < 10)
		printf("AGENCIA COM DIGITO VERIFICADOR: %d-%d", numero, dv);
	else if (dv == 10)
		printf("AGENCIA COM DIGITO VERIFICADOR: %d-X", numero);
	else if (dv == 11)
		printf("AGENCIA COM DIGITO VERIFICADOR: %d-0", numero);

	return 0;
}