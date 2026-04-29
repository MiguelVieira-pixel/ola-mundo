#include <stdio.h>

typedef struct{
    char produto[20];
    float preco;
} Produto;

Produto p[]={{"rebinboca", 1450.99}, {"lixadeira", 750}, {"serra", 1200.50}, {"furadeira", 900.75}};

float maiorValorRecursivo(Produto p[], int tamanho, int indice, float maior){
    if(indice == tamanho){
        return maior;
    }

    if(p[indice].preco > maior){
        maior = p[indice].preco;
    }

    return maiorValorRecursivo(p, tamanho, indice + 1, maior);
}

void bubbleSortProdutos(Produto p[], int tamanho){
    Produto p_aux;
    for(int i = 0; i < tamanho - 1; i++){
        for(int j = 0; j < tamanho - 1 - i; j++){
            if(p[j].preco < p[j +1].preco){
                p_aux = p[j];
                p[j] = p[j + 1];
                p[j + 1] = p_aux;
            }
        }
    }
}

void mostraProdutos(int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("\n Produto: %s  Preço: %.2f", p[i].produto, p[i].preco);
    }
}

int main(){
    float maior = 0;
    int tamanho = sizeof(p) / sizeof(p[0]);
    maior = maiorValorRecursivo(p, tamanho, 0, 0);
    printf("O maior valor é: %.2f", maior);
    bubbleSortProdutos(p, tamanho);
    printf("\n Produtos ordenados por preço:\n");
    mostraProdutos(tamanho);
    printf("\nPressione ENTER para encerrar...");

    return 0;
}