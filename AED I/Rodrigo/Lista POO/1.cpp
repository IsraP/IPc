# include <iostream>
using namespace std;
# include <stdio.h>

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

class Paciente {
    private:
        char nome[25];
        int peso, altura;
    public:
        Data nascimento;

        void setNome(char *name){
            strcpy(nome, name);
        }
        char * getNome(){
            return nome;
        }

        void setPeso(int p){
            peso = p;
        }
        int getPeso(){
            return peso;
        }

        void setAltura(char a){
            altura = a;
        }
        int getAltura(){
            return altura;
        }

        void print(){
            cout << nome << peso << altura;
            nascimento.imprimeData();
        }

        int idade(){
            int idade = 2020 - nascimento.getAno();
            return idade;
        }

        float imc(){
            float imc = (float) peso / (altura * altura);
            return imc;
        }

        void situacao(){
            if (this->imc() < 20){
                cout << "Abaixo do peso ideal.";
            }
            else if(this->imc() > 25){
                cout << "Acima do peso ideal.";
            }
            else{
                cout << "Dentro do peso ideal.";
            }
        }
};