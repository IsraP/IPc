# include <iostream>
# include <string.h>
using namespace std;

class Automovel{
    private:
        int chassi, renavam, potencia;
        float custoProducao;
    public:
        static int qtd;

        Automovel(){
            qtd++;
        }

        ~Automovel(){
            qtd--;
        }

        char marca[20], modelo[20], cor[20];

        int getChassi(){
            return chassi;
        }

        int getRenavam(){
            return renavam;
        }

        int getPotencia(){
            return potencia;
        }

        float getCustoProducao(){
            return custoProducao;
        }

        void setChassi(int chas){
            chassi = chas;
        }

        void setRenavam(int rena){
            renavam = rena;
        }

        void setPotencia(int pot){
            potencia = pot;
        }

        void setCustoProducao(int cp){
            if(cp > 20000 && cp < 100000)
                custoProducao = cp;
        }

        int valorVenda(){
            int vv;
            vv = custoProducao * 1.12 * 1.1 * 1.0165 * 1.076;
            return vv;
        }

        int quantProd(){
            return qtd;
        }
};

int Automovel::qtd = 0;

int main(void){
    Automovel a1, a2;

    strcpy(a1.cor, "vermelho");
    strcpy(a2.cor, "amarelo");
    strcpy(a1.marca, "ferrari");
    strcpy(a2.marca, "Mclaren");
    strcpy(a1.modelo, "fxx");
    strcpy(a2.modelo, "senna");
    a1.setChassi(1);
    a2.setChassi(3);
    a1.setPotencia(600);
    a2.setPotencia(570);
    a1.setRenavam(4);
    a2.setRenavam(6);
    a1.setCustoProducao(21000);
    a2.setCustoProducao(90000);

    printf("Valor de venda a1 = %d | Valor de venda a2 = %d | Qtd = %d", a1.valorVenda(), a2.valorVenda(), a1.qtd);

    return 0;
}