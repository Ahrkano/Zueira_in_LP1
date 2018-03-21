#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "sapo.h"

#define distancia 1000

/*

implementar as funcoes abaixo
	
bool venceu(sapo sap);

void mostrar_estatisticas(sapo sap);	
	
*/


int main()
{
    srand (time(NULL));
	
	int corrida = 0;
	
	//criando sapos
    sapo sapo1 = sapo(15,0,0);
    sapo sapo2 = sapo(27,0,0);
    sapo sapo3 = sapo(99,0,0);

    while (/*nenhum sapo chegou ao final da corrida*/)
	{
		sapo1.pular();
		/*checar se sapo1 venceu a corrida
		if(venceu(sapo1))
		{
			mostrar_estatisticas(sapo1);
			//sair do laço;
		}		
		*/
		
		sapo2.pular();
		/*checar se sapo2 venceu a corrida
		if(venceu(sapo2))
		{
			mostrar_estatisticas(sapo2);
			//sair do laço;
		}		
		*/
		
		sapo3.pular();
		/*checar se sapo3 venceu a corrida
		if(venceu(sapo3))
		{
			mostrar_estatisticas(sapo3);
			//sair do laço;
		}		
		*/	

        }
    }


return 0;
}

