#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[40];
    int matricula;
    float nota;
} Aluno;

typedef struct{
    int dia, mes, ano;
} Data;

typedef struct{
    char Nome[50];
    Data nascimento;    // struct dentro de struct
} Pessoa;

typedef struct{
    char nome[30];
    float preco;
    int estoque;
} Produto;

typedef struct{
    char nome[50];
    char tel[15];
} Contato;

typedef struct No{
    int val;    // Armazena um valor (número)
    struct No *prox;    // Ponteiro para o próximo nó
} No;

// Passagem por valor — cria uma cópia (caro para structs grandes)
void mostra(Aluno a){
    printf("\nNome: %s\nNota: %.2f", a.nome, a.nota);
}

// Passagem por referência — eficiente, modifica o original
void ponteiroStruct(Aluno *a){
    Aluno *prt = a;

    // printf("\nNome com ponteiro: %s", (*prt).nome);
    printf("\nNome com ponteiro: %s", prt->nome); // forma preferida
    a->nota = 5;
    printf("\nNota com ponteiro: %.2f", prt->nota);
}

void array(Aluno *turma, int n){
    for(int i = 0; i < n; i++)
        printf("\nNome: %s  -   Nota: %.2f", turma[i].nome, turma[i].nota);
}

void structAninhadaPessoa(){
    Pessoa p = {"Largatixq", 25, 5, 2007};

    printf("\n Dia: %d\n Mes: %d\n Ano: %d", p.nascimento.dia, p.nascimento.mes, p.nascimento.ano);
}

void lerAlunos(Aluno *turma, int n){
    for(int i = 0; i < n; i++){
        printf("\n--- ALUNO %d ---", i + 1);
        
        printf("\nNome: ");
        fgets(turma[i].nome, sizeof(turma[i].nome), stdin);
        
        printf("Matricula: ");
        scanf("%d", &turma[i].matricula);
        
        printf("Nota: ");
        scanf("%f", &turma[i].nota);
        getchar();  // limpa o \n
    }
}

void estoque(Produto *prods){
    printf("\n\n--- ESTOQUE ---");
    for(int i = 0; i < 3; i++){
        printf("\nProduto: %s\n Valor total: %.2f\n\n", prods[i].nome, prods[i].preco * prods[i].estoque);
    }
}

void produtos(Produto *prods){
    for(int i = 0; i < 3; i++){
        printf("\n<--- PRODUTO %d --->", i + 1);

        printf("\n Digite o nome do produto: ");
        fgets(prods[i].nome, sizeof(prods[i].nome), stdin);

        printf("\n DIgite o preco do produto: ");
        scanf("%f", &prods[i].preco);

        printf("\n Digite a quantidade no estoque do produto: ");
        scanf("%d", &prods[i].estoque);
        getchar();
    }
    estoque(prods);
}

Aluno* melhorAluno(Aluno *turma, int n){
    Aluno *maiorNota = &turma[0];
    
    for(int i = 1; i < n; i++){
        if(turma[i].nota > maiorNota->nota){
            maiorNota = &turma[i];
        }
    }
    
    printf("\n--- MELHOR ALUNO ---");
    printf("\nNome: %s", maiorNota->nome);
    printf("\nNota: %.2f", maiorNota->nota);
    
    return maiorNota;
}

void telefone(){
    int n = 0;
    printf("\n Quantos contatos exitem: ");
    scanf("%d", &n);
    getchar();

    Contato *cont = (Contato *)malloc(n * sizeof(Contato));
    for(int i = 0; i < n; i++){
        printf("\nDigite o %d.o nome: ", i + 1);
        fgets(cont[i].nome, sizeof(cont[i].nome), stdin);

        printf("\nDigite o numero do telefone: ");
        fgets(cont[i].tel, sizeof(cont[i].tel), stdin);
    }

    for(int i = 0; i < n; i++){
        printf("\n%d.o Nome -- %s", i + 1, cont[i].nome);
        printf("%d.o Telefone -- %s", i + 1, cont[i].tel);
    }
}

void imprimirLista(No *lista){
    printf("\nLista: ");
    for(No *temp = lista; temp !=NULL; temp = temp->prox){
        printf("%d, ", temp->val);
    }
}

void ponteiros(){
    int n;
    No *lista = NULL;   // Começa vazia

    for(int i = 0; i < 5; i++){
        No *novo = (No *)malloc(sizeof(No));
        printf("Digite o valor do %d.o numero: ", i + 1);
        scanf("%d", &n);
        novo->val = n;
        novo->prox = lista;  //← NULL = final da lista
        lista = novo;   //  Atualiza o ponteiro da lista
    }
    imprimirLista(lista);
}


int main(){
    Aluno a = {"Largatixq", 1001, 2.55};   // inicialização direta
    // struct Aluno a;
    // a.matricula = 1001;
    // a.nota = 2.55;
    // strcpy(a.nome, "Largatixq");
    // mostra(a);

    // ponteiroStruct(&a);

    // Array de structs - lê dados do usuário
    Aluno turma[3];
    // lerAlunos(turma, 3);
    // array(turma, 3);

    // Structs aninhadas
    structAninhadaPessoa();

    //Crie uma struct Produto com campos nome[50], preco e estoque. Leia dados de 3 produtos e imprima o valor total em estoque de cada um.
    Produto prods[3];
    // produtos(prods);
    
    //Use a struct Aluno {char nome[50]; float nota;}. Leia n alunos e retorne, via ponteiro, o aluno com maior nota usando Aluno* melhorAluno(Aluno *turma, int n).
    // melhorAluno(turma, 3);

    //Crie uma struct Contato {char nome[50]; char tel[15];}. Aloque dinamicamente um array de n contatos (lido do usuário), preencha e imprima todos. Libere ao final.
    // telefone();
    
    // Crie uma struct No {int val; struct No *prox;}. Implemente funções para inserir no início e imprimir a lista. Crie uma lista com 5 nós e imprima.
    ponteiros();
    
    // for(int i = 0; i < 5; i++){  // ← ESTE LOOP EXECUTA 5 VEZES!
    // No *novo = (No *)malloc(sizeof(No));
    // novo->prox = NULL;
    
    // if(lista == NULL)         // ← ESTE IF/ELSE TESTA A CADA ITERAÇÃO
    //     lista = novo;
    // else {
    //     No *temp = lista;
    //     while(temp->prox != NULL) temp = temp->prox;
    //     temp->prox = novo;
    // }
    

    printf("\n");
    system("pause");
    return 0;
}