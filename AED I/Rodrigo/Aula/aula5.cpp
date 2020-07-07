#include <iostream>
using namespace std;
#include <math.h>

class Data{
    private:
        int d, m, y;

    public:
        // Construtor
        Data(){
            d = 1;
            m = 1;
            y = 2020;
        };

        Data(int day, int month, int year){
            setDate(day, month, year);
        };

        ~Data() {
            cout << "Objeto desalocado\n" << endl;
        }

        void setDay(int day){
            if (day >= 1 && day <= 28)
                d = day;
        }
        void setMonth(int month){
            if (month >= 1 && month <= 12)
                m = month;
        }
        void setYear(int year){
            if (year > 0)
                y = year;
        }

        void setDate(int dia, int mes, int ano) {
            setDay(dia);
            setMonth(mes);
            setYear(ano);
        }

        int getDay(){
            return d;
        }
        int getMonth(){
            return m;
        }
        int getYear(){
            return y;
        }

        void inc(){
            if(d <= 27)
                d++;
            else{
                d = 1;
                if(m <= 11){
                    m++;
                }
                else{
                    m = 1;
                    y++;
                }
            }    
        }
        void inc2(int n){
            if(d < 27 && d + n <= 28)
                d++;
            else{
                d = d + n - 28;
                if(m <= 11){
                    m++;
                }
                else{
                    m = 1;
                    y++;
                }
            }    
        }

        void dec2(int n){
            if(n < 28){
                if(d > 1 && d - n > 0)
                    d--;
                else{
                    d = 28 - (n - 2);
                    if(m > 1){
                        m--;
                    }
                    else{
                        m = 12;
                        y--;
                    }
                }
            }
            else{
                // Codigo caso passe dos 28 dias do mes
                int aux = ceil(n / 28.0);
                d = (28 * aux) - (n-2);
                if(m > 1){
                    m -= aux;
                }
                else{
                    m = 12-(aux-2);
                    y--;
                }
                if(d == 0)
                    d++;
            }
            
        }
};

int main(void){
    Data *random;
    random = new Data(2, 1, 2005);
 
    (*random).dec2(60);

    cout << random->getDay() << "/" << random->getMonth() << "/" << random->getYear() << "\n";

    delete(random);
}