#include <stdio.h>

main() {
    int quantidadeFita, quantidadeVendida = 0, quantidadeAtrasada = 0, quantidadeEstragada = 0, reposicao = 0, total = 0;
    float aluguel, aluguelMensal = 0, aluguelAnual = 0, multaMensal = 0, multaAnual = 0;

    // entrada
    printf("\n Digite a quantidade de fitas que possui: ");
    scanf("%d", &quantidadeFita);
    printf("\n Digite o aluguel de cada fita: ");
    scanf("%f", &aluguel);

    // faturamento mensal e anual
    quantidadeVendida = quantidadeFita / 3;
    aluguelMensal = aluguel * quantidadeVendida;
    aluguelAnual = aluguelMensal * 12;
    printf("\n O aluguel mensal = R$%.2f", aluguelMensal);
    printf("\n O aluguel anual = R$%.2f", aluguelAnual);

    // multas por mês e por ano
    quantidadeAtrasada = quantidadeVendida / 10;
    multaMensal = quantidadeAtrasada * (aluguel * 0.1);
    multaAnual = multaMensal * 12;
    printf("\n O valor ganho com multa por mes = R$%.2f", multaMensal);
    printf("\n O valor ganho com multa por ano = R$%.2f", multaAnual);

    // quantidade de fita estragada
    quantidadeEstragada = quantidadeFita * 0.02;
    printf("\n A quantidade de fitas estragadas = %d", quantidadeEstragada);

    // quantidade de reposição
    reposicao = quantidadeFita / 10;
    printf("\n A quantidade de fitas para reposicao = %d", reposicao);

    // quantidade de locadoras que terá no final do ano
    total = quantidadeFita - quantidadeEstragada + reposicao;
    printf("\n A quantidade de fitas na locadora no final do ano = %d", total);
}