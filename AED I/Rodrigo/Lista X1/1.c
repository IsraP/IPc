# include <stdio.h>

void seila(); 

int main(void){
    char string[100];
    char *VetorPont;
    puts("DIGITE AE NAMORELAS: ");
    fgets(string, 100, stdin);
    VetorPont = string;
    seila(VetorPont);
    return 0;
}

void seila(char *VetorPont){
    for (int i = 0; i < 100; i++){
        if (VetorPont[i] == 'a'){
            VetorPont[i] = 'u';
        }
        else if (VetorPont[i] == 'e'){
            VetorPont[i] = 'o';
        }
        else if (VetorPont[i] == 'i'){
            VetorPont[i] = 'u';
        }
        else if (VetorPont[i] == 'o'){
            VetorPont[i] = 'a';
        }
        else if (VetorPont[i] == 'u'){
            VetorPont[i] = 'e';
        }
    }
}
