/*76. Escreva um programa em C, que leia uma string e conte quantas ocorrências de vogais
existem nesta string.
*/

#include <stdio.h> 

#define MAX_STR 256
int main() {

	char str[MAX_STR];
	int numeroVogais = 0;
	int i;
	
	printf("STRING:\n");
	gets(str);

	for (i = 0; str[i] != '\0'; i++) {
		switch(str[i]) {
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
				numeroVogais++;
				break;
		}
	}
	
	printf("%s tem %d vogais.\n", str, numeroVogais);

	return 0;
}