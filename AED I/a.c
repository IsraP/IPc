#include <stdio.h>

int doidao(char n){
    int resp = 0;
    int v = (int) n;
    if (v == 65 || v == 69 || v == 73 || v == 79 || v == 85 || v == 97 || v == 101 || v == 105 ||
        v == 111 || v == 117)
    {
        resp = 1;
    }
    return resp;
}

int main(void){
    printf("%d", doidao('f'));
}
