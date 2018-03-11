/**
/@file funcao3.cpp
/@brief recebe um valor em reais e mostra quantas notas são necessárias para formar o valor dado.
/@author Leonardo Nammur
/@since 08/03/2018
/@date 08/03/2018
*/
#include <iostream>
using namespace std;
int separar_notas();

int separar_notas(){
    int din,din100,din50,din20,din10,din5,din2,din1,x;
    /**@brief usuario digita o valor do dinheiro.*/
    cout << "Digite o valor do dinheiro desejado" << endl;
    cin >> din;
    /**@brief recebe o valor digitado e calcula quantas cedulas de cada tipo serão "usadas"*/

        din100 = din/100;
        x=din%100;
        din50 = x/50;
        x=x%50;
        din20 = x/20;
        x=x%20;
        din10 = x/10;
        x=x%10;
        din5 = x/5;
        x=x%5;
        din2 = x/2;
        x=x%2;
        din1=x;
    /**@brief mostra as notas "usadas"*/
    cout << din100 << " notas de 100" << endl;
    cout << din50 << " notas de 50" << endl;
    cout << din20 << " notas de 20" << endl;
    cout << din10 << " notas de 10" << endl;
    cout << din5 << " notas de 5" << endl;
    cout << din2 << " notas de 2" << endl;
    cout << din1 << " notas de 1" << endl;

return 0;
}
