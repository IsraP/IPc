# include <stdio.h>
# include <stdlib.h>

class sla{
    protected:
        int a;
    public:
        int b;
    
    int getA(){
        return a;
    }

    void setA(int aa){
        a = aa;
    }

    int setA(int b, float c){
        return b;
    }
};
int main(){
    sla classe1, classe2;  
    classe1.setA(3);
    printf("%d", classe1.getA());
    printf("%d", classe1.setA(6, 3));
    return 0;
}
