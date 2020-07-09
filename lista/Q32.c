/*32. Escreva um programa que leia um caracter e diga se ele é uma vogal, consoante, número
ou um símbolo (qualquer outro caracter, que não uma letra ou número).
*/

#include <stdio.h>
int main(){	
	
	char c;

	printf("CARACTER:\n");
	scanf("%c", &c);

	if (c >= '0' && c <= '9')
		printf("'%c' EH NUMERO", c);
	else if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ) {
		switch(c) {
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				printf("'%c' EH VOGAL", c);
				break;
			default:
				printf("'%c' EH CONSOANTE", c);
				break;

		}
	}
	else
		printf("'%c' EH SIMBOLO", c);
		
	
	return 0;
}