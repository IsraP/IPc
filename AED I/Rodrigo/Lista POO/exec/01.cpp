# include <iostream>
using namespace std;

class Quadrado {
    private:
        int lado, area, perimetro;
    public:
        Quadrado(int l){
            lado = l;
        };

        Quadrado(){
            lado = 0;
            area = 0;
            perimetro = 0;
            cout << "Quadrado criado.\n";
        };

        ~Quadrado(){
            cout << "Quadrado destruido.\n";
        };

        void setLado(int l){
            if (l > 0){
                lado = l;
            }
            else{
                lado = 0;
            }
            
        }

        int getLado(){
            return lado;
        }

        int getArea(){
            return lado*lado;
        }

        int getPerimetro(){
            return lado*4;
        }
}; 

int main(void){
    Quadrado *q = new Quadrado[5];
    int x;
    for (int i = 0; i < 3; i++){
        cout << "Digite o valor do lado: ";
        cin >> x;
        q[i].setLado(x);
    }
    
    for (int i = 0; i < 3; i++){
        cout << "O quadrado de lado " << q[i].getLado() << " Tem area = ";
        cout << q[i].getArea() << endl;
    }
    for (int i = 0; i < 3; i++){
        cout << "O quadrado de lado " << q[i].getLado() << " Tem perimetro = ";
        cout << q[i].getPerimetro() << endl;
    }
    delete(q);
}