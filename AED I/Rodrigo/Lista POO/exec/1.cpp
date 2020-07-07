// Funcionario, professor e aluno
# include <iostream>
using namespace std;

class endereco{
    private:
        int num;
    public:
        char rua[15], bairro[15], cep[8], cidade[15], estado[2], complemento[15];
        void setNum(int no){
            if (no > 0 && no < 10000){
                num = no;
            }
        }
        int getNum(){
            return num;
        }
};

class data{
    private:
		// Declaração de variáveis na classe
		int dia, mes, ano;
	public:
		// Função construtora
		data() {
			dia = 1;
			mes = 1;
			ano = 2000;
		}
		// Função destrutora/destruidora
		~data() {
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
			cout << "Data -> " << dia << "/" << mes << "/" << ano << endl;
		}
};

class pessoa{
    public:
	char nome[25];
	char cpf[15]; 
	char rg[14]; 
    
    char *getNome() {
        return nome;
    }
    void setNome(char *name) {
        strcpy(nome, name);
    }
};

class aluno : public pessoa{
    public:
        int matricula;
        char curso[30];
        int anoEntrada, semEntrada;
};

int main(void){

}