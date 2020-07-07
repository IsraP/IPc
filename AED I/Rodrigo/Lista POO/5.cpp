# include <iostream>
using namespace std;

class Func{
    private:
        double salarioBruto;
        static int qtde;
    public:
        int matricula;
        char nome[15];

        Func(){
            qtde++;
        }

        void setSalarioBruto(int sb){
            if(sb > 1045 && sb < 35000){
                salarioBruto = sb;
            }
        }

        int getSalarioBruto(){
            return salarioBruto;
        }

        int quantidade(){
            return qtde;
        }

        double liquido(){
            return salarioBruto * 0.92;
        }

        void dadosFunc(){
            cout << nome << matricula << salarioBruto << liquido();
        }
};

int Func::qtde = 0;