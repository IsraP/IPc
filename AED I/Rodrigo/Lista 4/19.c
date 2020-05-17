# include <stdio.h>

int main(void){
    int alunosNotas[30];

    for (int i = 0; i < 30; i++){
        while(1){
            printf("Digite a nota: ");
            scanf("%d", &alunosNotas[i]);
            if(alunosNotas[i] < 0 || alunosNotas[i] > 100)
                printf("Discagem incorreta, digite uma nota entre 0 e 100.\n");
            else
                break;
        }
    }

    int frequenciaAbs = 0;
    float frequenciaRel = 0;

    for (int i = 0; i < 30; i++){
        frequenciaAbs = 0;
        frequenciaRel = 0;

        for (int v = 0; v < 30; v++){
            if(alunosNotas[i] == alunosNotas[v])
                frequenciaAbs++;
                frequenciaRel++;
        }

        printf("A frequencia absoluta da nota %d eh de %d\n", alunosNotas[i], frequenciaAbs);
        printf("A frequencia relativa da nota %d eh de %.2f\n", alunosNotas[i], (float)frequenciaRel / 30);
    }

    return 0;
}