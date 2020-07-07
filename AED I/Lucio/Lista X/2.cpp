#include <iostream>
#include <stdlib.h>

using namespace std;

const int MAX = 4;

void maior(float A[MAX], float B[MAX], float C[MAX], int i){
    if(i<MAX){
        if(A[i] > B[i]){
            C[i] = A[i];
        }else{
            C[i] = B[i];
        }
        cout << "" << C[i] << endl;
     maior(A, B, C, i+1);
    }
}

int main(){
    float A[MAX];
    A[0] = -30;
    A[1] = -25.5;
    A[2] = 600;
    A[3] = 2;
    float B[MAX];
    B[0] = 1;
    B[1] = 3;
    B[2] = -200;
    B[3] = 1000;
    float C[MAX];
    int i = 0;
    maior(A, B, C, i);
}