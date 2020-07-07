# include <iostream>
using namespace std;

class Elevador{
    private:
        int andarAtual, totalAndares, capacidade, pessoas;
    public:
        void setAndar(int andar){
			this->andarAtual = andar;
		}

		int getAndar(){
			return andarAtual;
		}

        void setTotalAndares(int TotalAndares){
			this->totalAndares = TotalAndares;
		}

		int getTotalAndares(){
			return totalAndares;
		}

        void setCapacidade(int TotalAndares){
			this->totalAndares = TotalAndares;
		}

		int getCapacidade(){
			return capacidade;
		}

        void setPessoas(int pessoas){
			this->pessoas = pessoas;
		}

		int getPessoas(){
			return pessoas;
		}

        void inicializa(int capacidade, int total){
            setCapacidade(capacidade), setTotalAndares(total);
        }

        void entra(){
            if (pessoas < capacidade){
                pessoas++;
            }
        }

        void sai(){
            if(pessoas > 0){
                pessoas--;
            }
        }

        void sobe(){
            if(andarAtual < totalAndares - 1){
                andarAtual++;
            }
        }

        void desce(){
            if(andarAtual > 0){
                andarAtual--;
            }
        }

        void print(){
            cout << "Andar atual: " << andarAtual << " Pessoas dentro: " << pessoas;
        }
};  