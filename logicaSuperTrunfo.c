#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Carta 1
    char estado1[50], c_carta1[50], n_cidade1[50];
    unsigned long int populacao1;
    int n_pontos1;
    float area1, pib1;
    float densidade1;
    float pibpercapita1;
    float inversodensidade1;
    int totalsuper1;

    // Carta 2
    char estado2[50], c_carta2[50], n_cidade2[50];
    unsigned long int populacao2; 
    int n_pontos2;
    float area2, pib2;
    float densidade2;
    float pibpercapita2;
    float inversodensidade2;
    int totalsuper2;

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // ----- Entrada da Carta 1 -----
    printf("Digite os dados da Carta 1:\n");

    printf("UF do estado: ");
    scanf("%s", estado1);

    printf("Código da carta: ");
    scanf("%s", c_carta1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", n_cidade1);  // Lê string com espaços

    printf("População: ");
    scanf("%ld", &populacao1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &n_pontos1);

    printf("Área da cidade: ");
    scanf("%f", &area1);

    printf("PIB da cidade: ");
    scanf("%f", &pib1);
    
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    inversodensidade1 = 1 / densidade1;
    totalsuper1 = populacao1 + n_pontos1 + (int)area1 + (int)pib1 + (int)pibpercapita1 + (int)inversodensidade1;

    // ----- Entrada da Carta 2 -----
    printf("\nDigite os dados da Carta 2:\n");

    printf("UF do estado: ");
    scanf("%s", estado2);

    printf("Código da carta: ");
    scanf("%s", c_carta2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", n_cidade2);

    printf("População: ");
    scanf("%ld", &populacao2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &n_pontos2);

    printf("Área da cidade: ");
    scanf("%f", &area2);

    printf("PIB da cidade: ");
    scanf("%f", &pib2);
    
    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    inversodensidade2 = 1 / densidade2;
    totalsuper2 = populacao2 + n_pontos2 + (int)area2 + (int)pib2 + (int)pibpercapita2 + (int)inversodensidade2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    if (populacao1 > populacao2){
        printf("A cidade vencedora foi %s, com %ld de população! \n", n_cidade1, populacao1);
    } else {
        printf("A cidade vencedora foi %s, com %ld de população! \n", n_cidade2, populacao2);
    }

    return 0;
}
