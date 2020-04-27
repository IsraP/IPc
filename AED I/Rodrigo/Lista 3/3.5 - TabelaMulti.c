# include <stdio.h>

void tabelaMulti(int n){
    for (int linha = 1; linha <= n; linha++){
        for (int coluna = 1; coluna <= linha; coluna++)
            printf("%d\t", coluna * linha);
        printf("\n");
    }
}

int main(void){
    tabelaMulti(9);
} 