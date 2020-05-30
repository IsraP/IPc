# include <stdio.h>

float somaMatriz();
int ler();
int const x, y;

float main(void){

    ler();

    float matriz[x][y];
    for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			printf("Digite: ");
            scanf("%f", &matriz[i][j]);
		}
    }
    
    

    printf("%.0f", somaMatriz(matriz));

	return 0;
}

int ler(){
    printf("\nDigite a quantidade de linhas: ");
    scanf("%i", &x);
    printf("\nDigite a quantidade de linhas: ");
    scanf("%i", &y);
}

float somaMatriz(float matriz[][y]){

    float soma1 = 0, soma2 = 0;
	for(int i = 0; i < 1; i++){
		soma1 = 0;
		for(int j = 0; j < x; j++){
			soma1 += matriz[j][i];
		}
	}

    printf("\n");

	for(int i = y-1; i > y-2; i--){
		for(int j = 0; j < x; j++){
			soma2 += matriz[j][i];
		}
	}

    if(soma1 == soma2){
        return 1;
        }
    else
        return 0;
}





