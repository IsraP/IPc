# include <stdio.h>
# include <stdlib.h>

int main(void){
    for (int min = 10; min >= 0; min--){
        if (min != 10){
            for(int seg = 59; seg > 0; seg--)
            printf("%d:%d\n", min, seg);
            printf("%d:00\n", min);
        }
        else
            printf("%d:00\n");
    }
    return 0;
}