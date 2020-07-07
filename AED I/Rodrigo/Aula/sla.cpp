#include <iostream>
#include <stdlib.h>
using namespace std;

class Figura{
    private:
    int i;
    public:
        Figura(){
            cout << "Criado" << endl;
        }
        void leDados(int i){
           this->i = i;
        }

        void getDados(){
            cout << i << endl;
        }
};
/*
Figura FIGS = (Figura *)malloc(5*sizeof(Figura));
Figura *fig = new Figura();
for(int i = 0; i < 5; i++) {
   fig->leDados();
   FIGS[i] = fig;
}
*/
int main(void){
    Figura * FIGS = (Figura *) malloc (5 * sizeof(Figura));
    Figura *fig = new Figura();
    for (int i = 0; i < 5; i++){
        fig->leDados(i);
        FIGS[i] = *fig; 
    }

    return 0;
}
