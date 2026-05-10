#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct{
    float x;
    float y;
} Ponto;

typedef struct{
    int dados[5];
    int inicio;
    int fim;
    int tamanho;
} Fila;

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

void main(){
    // Crie um TAD Ponto {float x, y;} com operações: ponto_criar, ponto_distancia(Ponto a, Ponto b) e ponto_imprimir. Calcule a distância entre dois pontos lidos.
    Ponto p1;
    Ponto p2;

    for(int i=0; i < 2; i++){
        if(i == 0){
            p1 = ponto_criar();
            imprimir_ponto(p1);
        }
        else{
            p2 = ponto_criar();
            imprimir_ponto(p2);
        }
    }

    float dist = ponto_distancia(p1, p2);
    printf("\n Distancia: %.2f", dist);

    // Implemente um TAD Fila com array circular. Operações: fila_iniciar, fila_enfileirar, fila_desenfileirar, fila_vazia. Enfileire 5 valores e desenfileire todos imprimindo a ordem.

    fila_iniciar();

    system("pause");
}