# include <iostream>
using namespace std;
# include <iomanip>

class Hora {

    private:
        int hh, mm, ss; 
    public:

        // Constructor
        Hora() {
            hh = 0;
            mm = 0;
            ss = 0;
        };
        ~Hora() {
            cout << "Omae wa mou shindeiru";
        }

        Hora(int hora, int minuto, int segundo) {
            setHora(hora, minuto, segundo);
        }

        // Setters
        void setHora(int hora) {
            if(hora >= 0 && hora <= 23){
                hh = hora;
            }
        }
        void setMinuto(int minuto) {
            if(minuto >= 0 && minuto <= 59){
                mm = minuto;
            }
        }
        void setSegundo(int segundo) {
            if(segundo >= 0 && segundo <= 59){
                ss = segundo;
            }
        }
        void setHora(int hora, int segundo, int minuto){
            if(hora >= 0 && hora <= 23){
                hh = hora;
            }

            if(minuto >= 0 && minuto <= 59){
                mm = minuto;
            }

            if(segundo >= 0 && segundo <= 59){
                ss = segundo;
            }
        }

        // Getters
        int getHora() {
            return hh;
        }
        int getMinuto() {
            return mm;
        }
        int getSegundo() {
            return ss;
        }
        void printTempo() {
            cout << setfill('0') << setw(2) << getHora() << ":" << setfill('0') << setw(2) << getMinuto() << ":" << setfill('0') << setw(2) << getSegundo() << endl;
        }
        
} h1, h2(9, 9, 9);

int main(void){
    h1.setHora(23);
    h1.setMinuto(13);
    h1.setSegundo(56);
    h1.printTempo();

    int segs = (h2.getHora() * 3600) + (h2.getMinuto() * 60) + h2.getSegundo();
    cout << segs;

    return 0;
}
