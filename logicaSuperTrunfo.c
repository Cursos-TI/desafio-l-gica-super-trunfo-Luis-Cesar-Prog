#include <stdio.h>

int main() {
    // Declaração das variáveis para a PRIMEIRA carta 
    char estado1[10]; 
    char codigo1[10]; 
    char nome_cidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1; // em bilhões
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    // Declaração das variáveis para a SEGUNDA carta
    char estado2[10]; 
    char codigo2[10];  
    char nome_cidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2; // em bilhões
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // Entrada de dados para a PRIMEIRA carta
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado (letra de A a H):\n");
    scanf(" %c", &estado1);

    printf("Digite o codigo:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_cidade1);

    printf("Digite a Populacao:\n");
    scanf("%lu", &populacao1);

    printf("Digite a area em km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões:\n");
    scanf("%f", &pib1);

    printf("Digite os pontos turisticos:\n");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados para a SEGUNDA carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado (letra de A a H):\n");
    getchar(); 
    scanf("%c", &estado2);

    printf("Digite o codigo:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_cidade2);

    printf("Digite a Populacao:\n");
    scanf("%lu", &populacao2);

    printf("Digite a area em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões:\n");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos:\n");
    scanf("%d", &pontos_turisticos2);

    // Cálculos da Densidade populacional e Pib per Capita
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Cálculo do Super Poder
    super_poder1 = populacao1 + area1 + (pib1 * 1000000000) + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);
    super_poder2 = populacao2 + area2 + (pib2 * 1000000000) + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    // Exibição dos dados cadastrados
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparação por PIB per capita
    printf("\n=== Comparação de Cartas (Atributo: PIB per capita) ===\n");
    printf("Carta 1 - %s: %.2f\n", nome_cidade1, pib_per_capita1);
    printf("Carta 2 - %s: %.2f\n", nome_cidade2, pib_per_capita2);

    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
    
}