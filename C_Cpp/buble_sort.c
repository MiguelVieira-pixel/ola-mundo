#include <stdio.h>

typedef struct{
    char nome[30];
    int cpf;
    int idade;
} Pessoa;

Pessoa p[]={{"Largatixq", 123456789, 40}, {"Miguel", 987543210, 19}, {"Felix", 192827364, 20}};

void Troca(Pessoa p[], int tamanho){
    int i = 0, j = 0;
    Pessoa p_aux;
    for(int i = 0; i < tamanho - 1; i++){
        for(int j = 0; j < tamanho - 1 - i; j++){
            if(p[j].idade > p[j + 1].idade){
                p_aux = p[j];
                p[j] = p[j + 1];
                p[j + 1] = p_aux;
            }
        }
    }
}

void mostraPessoa(int tamanho){
    int i;
    for (i=0; i<tamanho; i++){
        printf("\n Nome: %s  CPF: %d    Idade: %d", p[i].nome, p[i].cpf, p[i].idade);
    }
}

int main() {
    int tamanho = sizeof(p)/sizeof(p[0]);
    Troca(p, tamanho);
    mostraPessoa(tamanho);
    printf("\nPressione ENTER para encerrar...");
    getchar();
    return 0;
}