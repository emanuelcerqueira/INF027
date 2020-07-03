/*15. Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é
suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no
chão, e que você lembre da sua altura, faça um programa para ler os dados necessários e
calcular a altura do prédio.
*/

#include <stdio.h>
int main(){	
	float alturaPredio, distanciaSombraPredio, alturaHumano, distanciaSombraHumano;
	
	printf("DISTANCIA DA SOMBRA DO PREDIO:\n");
	scanf("%f", &distanciaSombraPredio);	

	printf("DISTANCIA DA SOMBRA HUMANO:\n");
	scanf("%f", &distanciaSombraHumano);

	printf("ALTURA HUMANO:\n");
	scanf("%f", &alturaHumano);

	alturaPredio = distanciaSombraPredio * alturaHumano / distanciaSombraHumano;

	printf("ALTURA DO PREDIO: %.2f METROS", alturaPredio);

	return 0;
}