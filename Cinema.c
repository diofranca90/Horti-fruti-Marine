/*  
* Diorgenes Fran�a de Olveira
* Stembro/2020

O programa deve apresentar ao usu�rio as op��es de filme e o valor total dos ingressos, 
com custo de 12,50 reais cada. Al�m disso, o valor do ingresso deve ser facilmente modificado no c�digo.*/

#include <stdio.h>
#include <stdlib.h>

int main() // Inicio
{	// Variav�is
	int filme, ingresso;
	double valor;
	
	// Entrada
	printf("Ola, bem vindo ao cat�logo de filmes\n");
	printf("Escolha a op��o de filme\n");
	printf("-------Digite 1: Vingadores 4 Marvel------- \n");
	printf("-------Digite 2: Como treinar seu Drag�o 3------- \n");
	printf("-------Digite 3: Dumbo------- \n");
	printf("-------Digite 4: Shazam!------- \n");
	scanf("%d", &filme);
	
	printf("Informe a quantidade de ingresso\n");
	scanf("%d", &ingresso);
	
	// Processamento
	valor = ingresso * 12.50;
	
	// Sa�da
	printf("Obrigrado! Por comprar %d ingressso(s) para o filme n�mero %d voc� ir� gastar %.2f", ingresso, filme, valor);
	
	system("pause");
	return 0;
}
