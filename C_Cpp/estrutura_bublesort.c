# include <stdio.h>

void main() {
    int tamanho = sizeof(N)/sizeof(N[0]); //n é uma struct

    N n_aux;
    for(int i = 0; i < tamanho - 1; i++){
        for(int j = 0; j < tamanho - i - 1; j++){
            if(arr[j] > arr[j + 1])
                n_aux = arr[j];
                arr[j] = arr [j + 1];
                arr[j + 1] = arr[j];
        }
    }
}