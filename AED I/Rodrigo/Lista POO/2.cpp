# include <iostream>
using namespace std;
# include <string.h>

class Data{
    private:
		// Declaração de variáveis na classe
		int dia, mes, ano;
	public:
		// Função construtora
		Data() {
			dia = 1;
			mes = 1;
			ano = 2000;
		}
		// Função destrutora/destruidora
		~Data() {
            // free - malloc/calloc
            // delete - new
			cout << "Finalizando objeto Data." << endl << dia << "/" << mes << "/" << ano << endl;
		}
		// Setters
		void setDia(int d) {
			if((d < 32) && (d > 0))
				dia = d;
		}
		void setMes(int m) {
			if((m < 13) && (m > 1))
				mes = m;
		}
		void setAno(int a) {
			if(a > 0)
				ano = a;
		}
		// Getters
		int getDia() {
			return dia;
		}
		int getMes() {
			return mes; 	
		}
		int getAno() {
			return ano;
		}
		//Impressão da data
		void imprimeData()
		{
			cout << dia << "/" << mes << "/" << ano << endl;
		}
};

class Jogador{
	private:
    	int altura, peso;
	public:
    	Data nascimento;
		char nome[25], posicao[15], nacionalidade[15];

		void setAltura(int altura){
			this->altura = altura;
		}

		void setPeso(int peso){
			this->peso = peso;
		}

		int getAltura(){
			return altura;
		}

		int getPeso() {
			return peso;
		}

		void print(){
            cout << nome << peso << altura << posicao << nacionalidade;
            nascimento.imprimeData();
        }

		int idade(){
            int idade = 2020 - nascimento.getAno();
            return idade;
        }

		int aposentar(){
			if (!strcmp(nacionalidade, "Defesa")){
				cout << "Faltam" << 40 - idade() << "Anos para o jogador se aposentar.";
			}
			if (!strcmp(nacionalidade, "Meio-campo")){
				cout << "Faltam" << 38 - idade() << "Anos para o jogador se aposentar.";
			}
			if (!strcmp(nacionalidade, "atacantes")){
				cout << "Faltam" << 35 - idade() << "Anos para o jogador se aposentar.";
			}
		}
			
};