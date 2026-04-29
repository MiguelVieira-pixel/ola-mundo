#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
}

// struct Pessoas p1;
// p1.idade = 20

struct Pessoa *p;
p->idade = 20;

