# include <stdio.h>
# include <israel.h>

void bubbleSort(int * arr, int tam){
    for(int i = 0; i < tam; i++){
        for(int j = i; j < tam; j++){
            if(arr[i] > arr[j])
                swap(arr, i, j);
        }
    }
}

int main(void){
    int arr[5] = {4, 3, 6, 2, 1};
    printf("%d\n", length(sizeof(arr)));
    printArr(arr, 5);
    bubbleSort(arr, 5);
    printArr(arr, 5);
}

// Quick heap merge sort