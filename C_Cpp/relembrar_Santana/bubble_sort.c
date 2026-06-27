#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

typedef struct { 
    char nome[50]; 
    float nota; 
} Aluno;

typedef struct{
    char nome[50];
    float preco;
} Produto;

// void bubble_sort(int v[], int n){
//     int trocou = 0;
//     for(int i = 0; i < n - 1; i++){
//         for(int j = 0; j < n - 1 - i; j++){
//             if(v[j] > v[j + 1]){
//                 int aux = v[j + 1];
//                 v[j + 1] = v[j];
//                 v[j] = aux;
//                 trocou = 1;
//             }
//         }
//         if(!trocou)
//             break;
//     }
// }

int bubble_sort(int v[], int n, int t){
    t = 0;
    int aux = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(v[j] > v[j + 1]){
                aux = v[j + 1];
                v[j + 1] = v[j];
                v[j] = aux;
                t++;
            }
            if(!t)
                break;
        }
    }
    return t;
}

void bubble_sort_char(char v[][20], int n){
    char aux[20];
    int troca = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(strcmp(v[j], v[j + 1]) > 0){
                strcpy(aux, v[j + 1]);
                strcpy(v[j + 1], v[j]);
                strcpy(v[j], aux);
                troca = 1;
            }
        }
        if(!troca)
            break;
    }
}

void bubble_struct(Aluno *a, int n){
    Aluno aux;
    int trocou = 0;

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(a[j].nota > a[j + 1].nota){
                aux = a[j + 1];
                a[j + 1] = a[j];
                a[j] = aux;
                trocou = 1;
            }
        }
        if(!trocou)
            break;
    }
}

void imprimir_array(int v[], int n){
    printf("\n");
    for(int i = 0; i < n; i++)
        printf("   %d", v[i]);
    printf("\n");
}

void imprimir_bubble_char(char v[][20], int n){
    printf("\n");
    for(int i = 0; i < n; i++){
        printf("    %s", v[i]);
    }
    printf("\n");
}

void imprimir_struct(Aluno a[], int n){
    for(int i = 0; i < n; i++){
        printf("\n--- ALUNO %d ---", i + 1);
        printf("\n Nome: %s", a[i].nome);
        printf("\n Nota: %.2f", a[i].nota);
    }
    printf("\n");
}

void main(){
// int vetor[8] = {45, 12, 89, 3, 27, 56, 71, 18};
// int tamanho = sizeof(vetor) / sizeof(vetor[0]);
// imprimir_array(vetor, tamanho);
// bubble_sort(vetor, tamanho);
// imprimir_array(vetor, tamanho);

//     Aluno a[MAX] = {
//     {"Carlos Silva",   7.5},
//     {"Ana Souza",      9.2},
//     {"Pedro Lima",     5.0},
//     {"Julia Ferreira", 8.1},
//     {"Lucas Mendes",   6.3}
// };
//     int tamanho_struct = MAX;
//     imprimir_struct(a, tamanho_struct);
//     bubble_struct(a, tamanho_struct);
//     imprimir_struct(a, tamanho_struct);

// Modifique o Bubble Sort para contar e retornar o número total de trocas realizadas. Teste com {5,3,8,1,2} e imprima o array ordenado e a quantidade de trocas.
    // int vetor[] = {5,3,8,1,2};
    // int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    // int troca = bubble_sort(vetor, tamanho, troca);
    // printf("\n houve %d trocas.", troca);
    // imprimir_array(vetor, tamanho);

    // Use Bubble Sort para ordenar {"banana","abacaxi","uva","maca","laranja"}. Use strcmp para comparar e strcpy para trocar.
    // char frutas[][20] = {"banana","abacaxi","uva","maca","laranja"};
    // int tamanho = sizeof(frutas) / sizeof(frutas[0]);
    // bubble_sort_char(frutas, tamanho);
    // imprimir_bubble_char(frutas, tamanho);

    // Crie um array de 5 Produto {char nome[50]; float preco;}. Use Bubble Sort para ordenar do mais barato ao mais caro e imprima a lista.

    Produto p;
    
system("pause");
}