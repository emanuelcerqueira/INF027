/*14. Em uma cidade se deseja sincronizar os semáforos. Com isto, quando um semáforo abre
(fica verde), os veículos que nele estavam parados tendem a encontrar os próximos
semáforos também abertos. Para que isto seja feito, os próximos semáforos precisam
abrir um pouco depois, dependendo da velocidade permitida na via e da distância entre
eles. Assim, ao abrir o semáforo, um veículo começa a acelerar até atingir a velocidade
permitida, que mantém até chegar ao próximo semáforo, levando um certo tempo para
percorrer essa distância. Para que encontre o próximo semáforo aberto, este deve abrir
um pouco antes da chegada do veículo (por ex: 3 segundos antes). Faça assim um
algoritmo que informe quanto tempo depois um semáforo deve abrir, dada as seguintes
informações:
a. a distância desde o semáforo anterior
b. a velocidade permitida da via
c. a aceleração típica dos carros
*/

#include <stdio.h>
int main(){	
	
	float distanciaSemaforo, velocidadePermitida, aceleracaoTipica, tempoAteVelocidadeMaxima, tempoRestante, distanciaAteVelocidadeMaxima, tempoSemaforoDeveAbrir;

	printf("Distância entre os semaforos (em metros):\n");
	scanf("%f", &distanciaSemaforo);

	printf("Velocidade permitida da via (em metros/segundos):\n");
	scanf("%f", &velocidadePermitida);

	printf("Aceleracao tipica dos carros (em metros/segundos ao quadrado):\n");
	scanf("%f", &aceleracaoTipica);

	//Movimento retilíneo uniformemente variado 
	//Equação horária das velocidades (v = at), isolando a variável tempo
	tempoAteVelocidadeMaxima = velocidadePermitida / aceleracaoTipica;

	//Função Horária do MRUV (S=So+Vot+at^2/2)
	distanciaAteVelocidadeMaxima = aceleracaoTipica * tempoAteVelocidadeMaxima * tempoAteVelocidadeMaxima / 2;

	//Movimento retilíneo uniforme
	//Funcão MRU (S=So+vt), isolando a variável tempo
	tempoRestante = (distanciaSemaforo - distanciaAteVelocidadeMaxima) / velocidadePermitida;
	
	tempoSemaforoDeveAbrir = tempoAteVelocidadeMaxima  + tempoRestante - 3;

	printf("O SEGUNDO SEMAFORO DEVE ABRIR %.0f SEGUNDOS DEPOIS DO PRIMEIRO", tempoSemaforoDeveAbrir);		

	return 0;
}