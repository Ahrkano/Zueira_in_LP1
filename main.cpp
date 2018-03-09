/**
*@file relatorio.h
*@brief programa que mostra apenas os valores diferentes em um vetor
*@author Alexandre
*@since 06/03/2018
*@date 08/03/2018
*/
#include <iostream>
#include "relatorio.h"


int main()
{
	int vetor[10];
	for(int i = 0; i<10; i++)
	{
		std::cout<<"Entre com o "<<i+1<<"* numero: "<<std::endl;
		std::cin>>vetor[i];
	}

	mostra_relatorio(vetor);

	return 0;   
}
