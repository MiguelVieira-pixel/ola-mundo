#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

typedef struct{
	char nome[50];
	int prioridade;
}Elemento;

typedef struct No{
	char nome[50];
	int prioridade;
	struct No *prox;
	struct No *ant;
}No;

typedef struct{
	int tamanho;
	No *inicio;
	No *fim;
}FilaPrioridade;


void init(FilaPrioridade *f){
	f->inicio = NULL;
	f->fim = NULL;
	f->tamanho = 0;
}

int filaVazia(FilaPrioridade *f){
	return f->inicio == NULL;
}

int inserir(FilaPrioridade *f, Elemento e){
	//cria o novo nó
	No *novo = (No*)malloc(sizeof(No));
	if(novo == NULL) return -1;
	
	strcpy(novo->nome, e.nome);
	novo->prioridade = e.prioridade;
	novo->prox = NULL;
	novo->ant = NULL;
	
	//caso 1: fila vazia ou prioridade menor a direita
	if(filaVazia(f)){
		f->inicio = novo;
		f->fim = novo;
	}
	
	//caso 2: maior prioridade que o primeiro - entra no inicio
	else if(e.prioridade < f->inicio->prioridade){
		f->inicio->ant = novo;
		novo->prox = f->inicio;
		f->inicio = novo;
	}
	
	//caso 3: menor ou igual ao ultimo ->entra direto no fim
	else if(e.prioridade >= f->fim->prioridade){
		novo->ant = f->fim;
		f->fim->prox = novo;
		f->fim = novo;
	}
	
	//caso 4: meio da fila -> percorre até achar posição
	else{
		No *atual = f->inicio;
		while(atual->prox != NULL && atual->prox->prioridade <= e.prioridade)
			atual = atual->prox;
		novo->prox = atual->prox;
		novo->ant = atual;
        atual->prox->ant = novo;
        atual->prox = novo;
        
	}
	f->tamanho++;
	return 0;
}

int retirar(FilaPrioridade *f, Elemento *e){
	if(filaVazia(f)) return -1;
	
	No *temp = f->inicio;
	strcpy(e->nome, temp->nome);
	e->prioridade = temp->prioridade;
	
	f->inicio = f->inicio->prox;
	if(f->inicio != NULL)
        f->inicio->ant = NULL;  // ? limpa o ponteiro para o nó liberado
    else
        f->fim = NULL;          // ? fila ficou vazia
        
    free(temp);
	f->tamanho--;
	return 0;
}

void imprimir(FilaPrioridade *f){
	if(filaVazia(f)){
		printf("\n Fila vazia.");
		return;
	}
	No *aux = f->inicio;
	while(aux != NULL){
		printf("\nNome: %s \n Prioridade: %d \n", aux->nome, aux->prioridade);
		aux = aux->prox;
	}
	
}

int main(){
	FilaPrioridade f;
	init(&f);
	
	Elemento e;
	int opcao;
	
	do{
		 printf("\n--- MENU ---\n");
        printf("[1] Inserir\n[2] Retirar\n[3] Imprimir\n[4] Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        
		switch(opcao){
		case 1:
			printf("\n Nome: ");
			scanf(" %[^\n]", e.nome);
			printf("Prioridade (1=alta, 2=media, 3=baixa): ");
			scanf("%d", &e.prioridade);
			if(inserir(&f, e) == 0)
				printf("\n inserido com sucesso.");
			else
				printf("\n fila cheia.");
			break;
		case 2:
			if(retirar(&f, &e) == 0){
				printf("\nretirado com sucesso.");
				printf("\n Nome: %s \n Prioridade: %d \n", e.nome, e.prioridade);
			}
			else
				printf("\nfila vazia.");
			break;
		case 3:
			imprimir(&f);
			break;
		case 4:
			printf("\n Saindo.");
			break;
		default:
			printf("\n opcao invalida.");
			break;
		}
	}while(opcao != 4);
	
	
	return 0;
}
