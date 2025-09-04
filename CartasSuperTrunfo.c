#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1;
    char codigo1[4], nomeCidade1 [50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;
    float densidadePopulacional1, pibPerCapita1;

    char estado2;
    char codigo2[4], nomeCidade2 [50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;
    float densidadePopulacional2, pibPerCapita2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Informe o Estado  (letra de A a H): ");
    scanf("%c", &estado1);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o nome da Cidade: ");
    scanf("%s", nomeCidade1);

    printf("Informe a População: ");
    scanf("%d", &populacao1);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB: ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: B01): ");
    scanf("%s", codigo2);

    printf("Informe o nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("Informe a População: ");
    scanf("%d", &populacao2);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional1 = (float) (populacao1 / area1);
    densidadePopulacional2 = (float) (populacao2 / area2);

    pibPerCapita1 = (float) (pib1 / populacao1);
    pibPerCapita2 = (float) (pib2 / populacao2);

    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Carta: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %f\n", densidadePopulacional1);
    printf("PIB Per Capita: %f\n", pibPerCapita1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Carta: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %f\n", densidadePopulacional2);
    printf("PIB Per Capita: %f\n", pibPerCapita2);

    return 0;
}
