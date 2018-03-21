#include "sapo.h"

sapo::sapo()
{
	identificador = 0;
    distancia_percorrida = 0;
    quantidade_de_pulos = 0;
 
}

sapo::sapo(int id, int dist, int qtd)
{
	identificador = id;
    distancia_percorrida = dist;
    quantidade_de_pulos = qtd;
}

sapo::~sapo()
{
	
}

void sapo::set_identificador(int id)
{
	identificador = id;
}

void sapo::set_distancia_percorrida(int dist)
{
	distancia_percorrida = dist;
}

void sapo::set_quantidade_de_pulos(int qtd)
{
	quantidade_de_pulos = qtd;
}

const int sapo::get_identificador()
{
	return identificador;
}

const int sapo::get_distancia_percorrida()
{
	return distancia_percorrida;
}

const int sapo::get_quantidade_de_pulos()
{
	return quantidade_de_pulos;
}

void sapo::pular(/*algum parametro aqui*/)
{
	//TO DO
	/*
		criar uma funcao que gera um valor 
		aleatorio e vc usa ele
		aqui para incrementar a distancia
	*/
}