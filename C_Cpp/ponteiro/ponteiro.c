#include <stdio.h>
#include <stdlib.h>

void ponteiro(int x){
    //int *p = NULL;    ponteiro seguro, se não tiver null ele aponta para um lugar aleatório e quebra o código
    int *p = &x;    // p guarda o endereço de x

    printf("\n%d", x);  //imprime 42
    printf("\n%p", p);  //imprime o endereço
    printf("\n%d", *p); //imprime 42 (derreferência)

    *p = 100;
    printf("\n%d", x);  //altera x via ponteiro 
// & "endereço de" -> obtém o endereço 
// * "conteúdo em" -> acessa o valor no endereço
}

int dobrar(int *p){
    *p = *p * 2;
    return *p;
}

void array(int *v){
    printf("\n%d", v[1]);        // imprime 20
    printf("\n%d", *(v + 1));    // imprime 20 (v + 1 é o endereço do segundo elemento, * desreferencia para obter o valor)
}

int Malloc(){
    int *arr = (int*)malloc(5 * sizeof(int));
    if(arr == NULL)
        // malloc falhou -- sem memória
        return 1;
    else
        // malloc bem-sucedido
        free(arr); // libera a memória alocada
        return 0;
}

void main() {
    int x = 5;
    int dobro;
    ponteiro(42);

    //Dobra o valor usando ponteiro no parâmetro
    dobro = dobrar(&x);
    printf("\n%d", x);

    //nome da array já é um ponteiro para o seu primeiro elemento
    int v[3] = {10, 20, 30};
    array(v);

    //Malloc e free
    int exit = 0;

    exit = Malloc();
    printf("\n%d", exit);

    printf("\n");
    system("pause");   
    
}
