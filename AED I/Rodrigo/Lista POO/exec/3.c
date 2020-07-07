# include <stdio.h>

const int MAXFAC = 3, MAXLIN = 4, MAXCOL = 5;

int somarTabela(int arr[][MAXLIN][MAXCOL], int f, int l1, int c1, int l2, int c2){
    if(f < 0 && f > MAXFAC && l1 < 0 && l1 > l2 && c1 < 0 && c1 > c2 && l2 < l1 && l2 > MAXLIN && c2 < c1 && c2 > MAXCOL)
        return 0;
    
    int soma = 0;
    for (int lin = l1; lin <= l2; lin++){
        for(int col = c1; col <= c2; col++){
            soma += arr[f][lin][col];
        }
    }
    return soma;
}

int main(void){
    int arr[3][4][5] = {
        1,2,3,4,5,
        6,7,8,9,10,
        11,12,13,14,15,
        16,17,18,19,20,

        1,2,3,4,5,
        6,7,8,9,10,
        11,12,13,14,15,
        16,17,18,19,20,

        1,2,3,4,5,
        6,7,8,9,10,
        11,12,13,14,15,
        16,17,18,19,20
        
    };
    printf("%d", somarTabela(arr, 1, 0, 0, 1, 1));

    return 0;
}   