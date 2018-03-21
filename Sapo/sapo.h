#ifndef sapo_h
#define sapo_h

class sapo
{
    private:
        //atributos
		int identificador;
        int distancia_percorrida;
        int quantidade_de_pulos;
 
	public:
        //metodos geters
		const int get_identificador();
        const int get_distancia_percorrida();
        const int get_quantidade_de_pulos();
		
		//metodos seters
		void set_identificador(int id);
        void set_distancia_percorrida(int dist);
        void set_quantidade_de_pulos(int qtd);

		//construtor e destrutor
		sapo();
		sapo(int id, int dist, int qtd);
		~sapo();
		
		//TO DO
		void pular(/*algum parametro aqui*/);
};

#endif // sapo_h
