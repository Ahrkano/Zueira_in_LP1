/**
*@file relatorio.h
*@brief aquivo cabecalho
*@author Alexandre
*@since 06/03/2018
*@date 08/03/2018
*/
#include <iostream>
#include "relatorio.h"


/*
*@details verifica se o numero ja esta no vetor
*         caso esteja a variavel repete eh incrementada
*         e o retorno sera falso
*@param resultado vetor de inteiros
*@param teste numero a ser testado
*/
bool apenas_um(int* resultado, int teste)
{
	int repete = 0;

	for (int i=0; i<10; i++)
	{
		if (teste == resultado[i])
			repete++;
	}

	if(repete>0)
		return false;

	return true;
}

/*
*@details testa cada um dos valores do vetor de origem
*         com os valores de um vetor resultado (inicialmente vazio)
*         ao passo que quando o valor testado nao esta presente
*         no vetor resultado o mesmo sera adicionado
*@param vetor vetor de inteiros
*/
void mostra_relatorio(int* vetor)
{
	int resultado[10];
	int cont = 0;
	int pos = 0;

	for(cont = 0; cont < 10; cont++)
	{
		if(apenas_um(resultado, vetor[cont]) == true)
		{
			resultado[pos] = vetor[cont];
			pos++;
		}
	}

	for(cont = 0; cont<=pos; cont++)
		std::cout<<" "<<resultado[cont];

	

}
