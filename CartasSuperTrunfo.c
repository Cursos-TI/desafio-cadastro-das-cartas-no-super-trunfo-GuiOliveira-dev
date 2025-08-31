#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char Estado;
    char Carta [4];
    char Cidade [50];
    int Populacao;
    float Area;
    int Pontos_Turisticos;
    float PIB;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite um Estado: \n");
    scanf(" %c", &Estado);

    printf("Digite uma Carta: \n");
    scanf(" %s", Carta);

    printf("Digite uma Cidade: \n");
    scanf(" %s", Cidade);

    printf("Digite a População: \n");
    scanf(" %d", &Populacao);

    printf("Digite a Área: \n");
    scanf(" %f \n", &Area);

     printf("Digite Quantos Pontos Turisticos: \n");
    scanf(" %d \n", &Pontos_Turisticos);

    printf("Digite o PIB: \n");
    scanf(" %f \n", &PIB);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
