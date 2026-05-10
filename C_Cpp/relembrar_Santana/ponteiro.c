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
    // *p = *p * 2;
    return *p * 2;
}

int quadrado(int *p){
    return *p * *p;
}

void array(int *v){
    printf("\n%d", v[1]);        // imprime 20
    printf("\n%d", *(v + 1));    // imprime 20 (v + 1 é o endereço do segundo elemento, * desreferencia para obter o valor)
}

int Malloc(){
    int n;
    printf("\n Digite o tamanho do array: ");
    scanf("%d", &n);    //usuário digita o tamanho do array
    //int arr[100];   // stack - tamanho FIXO em tempo de compilação
    int *arr = (int*)malloc(n * sizeof(int));   //// heap - tamanho DINÂMICO em tempo de execução
    if(arr == NULL)
        // malloc falhou -- sem memória
        return 1;
    else
        // malloc bem-sucedido
        free(arr); // libera a memória alocada
        arr = NULL; // boa prática: evitar dangling pointer (ponteiro que aponta para memória liberada)
        return 0;
}

void trocar(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
    printf("\nx = %d", *a);
    printf("\ny = %d", *b);
}

void minMax(int *v, int n,int *min, int *max){
    // int i = 0;

    for(int i = 0; i < n; i++){
        if(*min > v[i])
            *min = v[i];
        if(*max < v[i])
            *max = v[i];
    }
    printf("\nMenor = %d", *min);
    printf("\nMaior = %d", *max);

}

int mallocDinamico(){
    int n, i = 0;

    printf("\n Digite o tamanho da array: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL)
        return 1;
    else
        for(i = 0; i < n; i++){ //preenche a array
            printf("\nDigite o valor no %d.o espaco: ", i + 1); 
            scanf("%d", &arr[i]);
        }
        for(i = 0; i < n; i++){ //mostra a array
            printf("[%d]  ",arr[i]);
        }
        free(arr);
        arr = NULL;
        return 0;
}

void aplicar(int *v, int n, int (*f)(int*)){
    int resultado = 0;
    printf("\nResultado: ");
    for(int i = 0; i < n; i++){
        //resultado = f(v[i]);
        printf("[%d]  ",f(&v[i]));
    }
}

void main() {
    int dobro;
    ponteiro(42);

    //Dobra o valor usando ponteiro no parâmetro
    int z = 5;
    dobro = dobrar(&z);
    printf("\n%d", z);

    //nome da array já é um ponteiro para o seu primeiro elemento
    int v[3] = {10, 20, 30};
    array(v);

    //Malloc e free
    int exit = 0;

    exit = Malloc();
    printf("\n%d", exit);

    //exerxício 1- Escreva a função void trocar(int *a, int *b) que troca os valores de dois inteiros. Teste com x = 3, y = 7 e imprima antes e depois.
    int x = 3;
    int y = 7;
    trocar(&x, &y);

    //Escreva void minMax(int *v, int n, int *min, int *max) que percorre um array e preenche os ponteiros min e max com o menor e maior valor.
    int larga[] = {5, 2, 9, 1, 3};
    int min = 9990, max = 0;
    int n = sizeof(larga) / sizeof(larga[0]);

    minMax(larga, n, &min, &max);

    //Peça ao usuário um valor n. Aloque dinamicamente um array de n inteiros com malloc, leia os valores, calcule a média e libere a memória.
    mallocDinamico();

    //Crie uma função aplicar(int *v, int n, int (*f)(int)) que aplica a função f a cada elemento do array. Teste com uma função que duplica e outra que eleva ao quadrado.
    int arrf[5] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(arrf) / sizeof(arrf[0]);

    aplicar(arrf, tamanho, dobrar); //aplica a função dobrar a cada elemento do array
    aplicar(arrf, tamanho, quadrado); // aplica quadrado a cada elemento
    printf("\n");
    system("pause");   
    
}
