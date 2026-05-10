#include <stdio.h>
#include <string.h>
#define MAX 5

typedef struct {
    char isbn[20];
    char titulo[20];
} Livro;

typedef struct {
    Livro v[MAX];
    int topo; // pilha vazia se topo == -1
} Pilha;

void init(Pilha *p){
    p->topo = -1;
}

int pilhaVazia(Pilha p){
    if(p.topo == -1)
        return 1;
    else
        return 0;
}

int pilhaCheia(Pilha p){
    if(p.topo == MAX -1)
        return 1;
    else
        return 0;
}

int push(Pilha *p, Livro l){ //empilha
    if(pilhaCheia(*p))
        return -1;
    else
        p->topo ++;
        p->v[p->topo] = l;
        return 0;
}

int pop(Pilha *p, Livro *l){ //desempilha
    if(pilhaVazia(*p))
        return -1;
    else
        *l = p->v[p->topo];
        p->topo --;
        return 0;
}

void main(){
    Pilha biblioteca;
    Livro book;

    init(&biblioteca);

    strcpy(book.isbn, "123456789");
    strcpy(book.titulo, "ilha das moscas");

    if(push(&biblioteca, book) != 0)
        printf("\n Livro não cadastrado [%s] - pilha estava cheia.", book.titulo);
    
    strcpy(book.isbn, "987654321");
    strcpy(book.titulo, "o sol é para todos");


    if(push(&biblioteca, book))
        printf("\n Livro não cadastrado [%s] - pilha estava cheia.", book.titulo);

    if(pop(&biblioteca, &book) == 0)
        printf("\n %s ", book.titulo);
    else
        printf("\n Pilha esta vazia.");
    if(pop(&biblioteca, &book) == 0)
        printf("\n %s ", book.titulo);
    else
        printf("\n Pilha esta vazia.");
    if(pop(&biblioteca, &book) == 0)
        printf("\n %s ", book.titulo);
    else
        printf("\n Pilha esta vazia.");

}