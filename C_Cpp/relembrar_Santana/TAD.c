#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 5

typedef struct{
    float x;
    float y;
} Ponto;

typedef struct {
    char nome[50];
    int  nivel;
    int  ouro;
} Dados;

typedef struct{
    Dados dados[MAX];
    int inicio;
    int fim;
    int tamanho;
} Fila;

typedef struct {
    int dados[MAX];
    int topo;
} Pilha;

Ponto ponto_criar(){
    Ponto p;

    printf("\n Digite o ponto x: ");
    scanf("%f", &p.x);
    printf("\n Digite o ponto y: ");
    scanf("%f", &p.y);

    return p;
}

void imprimir_ponto(Ponto p){
    printf("\n Ponto: (%.2f, %.2f)\n", p.x, p.y);

}

float ponto_distancia(Ponto a, Ponto b){
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    
    return sqrt(dx*dx + dy*dy);
}

void fila_iniciar(Fila *f){
    f->inicio = 0;
    f->fim = 0;
    f->tamanho = 0;
}

int fila_vazia(Fila f){
    return f.tamanho == 0;
}

int fila_cheia(Fila f){
    return f.tamanho == MAX;
}

int fila_enfileirar(Fila *f, Dados v){
    if(!fila_cheia(*f)){
        f->dados[f->fim] = v;
        f->fim = (f->fim + 1) % MAX;
        f->tamanho ++;
        return 0;
    }
    else
        return 1;
}

Dados fila_desenfileirar(Fila *f){
    if(!fila_vazia(*f)){
        Dados v = f->dados[f->inicio];
        f->inicio = (f->inicio + 1) % MAX;
        f->tamanho --;
        return v;
    }
    // else 
    //     return 1;
}

void main(){
    // Crie um TAD Ponto {float x, y;} com operações: ponto_criar, ponto_distancia(Ponto a, Ponto b) e ponto_imprimir. Calcule a distância entre dois pontos lidos.
    Fila f;
    // Ponto p1;
    // Ponto p2;

    // for(int i=0; i < 2; i++){
    //     if(i == 0){
    //         p1 = ponto_criar();
    //         imprimir_ponto(p1);
    //     }
    //     else{
    //         p2 = ponto_criar();
    //         imprimir_ponto(p2);
    //     }
    // }

    // float dist = ponto_distancia(p1, p2);
    // printf("\n Distancia: %.2f", dist);

    // Implemente um TAD Fila com array circular. Operações: fila_iniciar, fila_enfileirar, fila_desenfileirar, fila_vazia. Enfileire 5 valores e desenfileire todos imprimindo a ordem.

    // fila_iniciar(&f);

    // // Criando os personagens
    // Dados d1 = {"Aldric", 5, 350};
    // Dados d2 = {"Lyria", 8, 720};
    // Dados d3 = {"Zephon", 12, 100};

    // // Enfileirando
    // fila_enfileirar(&f, d1);
    // fila_enfileirar(&f, d2);
    // fila_enfileirar(&f, d3);


    // // Desenfileirando e exibindo
    // Dados atual;
    // atual = fila_desenfileirar(&f);
    // printf("\nSaiu: %s | Nivel: %d | Ouro: %d\n", atual.nome, atual.nivel, atual.ouro);
    // atual = fila_desenfileirar(&f);
    // printf("\nSaiu: %s | Nivel: %d | Ouro: %d\n", atual.nome, atual.nivel, atual.ouro);
    // atual = fila_desenfileirar(&f);
    // printf("\nSaiu: %s | Nivel: %d | Ouro: %d\n", atual.nome, atual.nivel, atual.ouro);

    // Use o TAD Pilha (do guia) para verificar se uma expressão tem parênteses balanceados. Ex: "(a+b)*(c-d)" → balanceado; "((x+y)" → não balanceado.

    
    system("pause");
}