#include <stdio.h>

int main() {

    // variaveis carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade1;
    float pibpercapita1;
    float superpoder1;

    // variaveis carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float pibpercapita2;
    float superpoder2;

    // cadastro carta 1
    printf("+++ -> CADASTRO DA CARTA 1 <- +++\n");
    printf("Digite a letra inicial do estado (ex: A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a cidade: ");
    scanf("%s", cidade1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area (km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    // cadastro carta 2
    printf("\n+++ -> CADASTRO DA CARTA 2 <- +++\n");
    printf("Digite a letra inicial do estado (ex: A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite a cidade: ");
    scanf("%s", cidade2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area (km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    // calculos densidade e pib per capita
    densidade1 = (float)populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // calculo super poder
    superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1/densidade1);
    superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1/densidade2);

    // exibicao dados carta 1
    printf("\n+++ -> DADOS DA CARTA 1 <- +++\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    // exibicao dados carta 2
    printf("\n+++ -> DADOS DA CARTA 2 <- +++\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // exibicao comparacoes
    printf("\n+++ -> COMPARACAO DE CARTAS <- +++\n\n");

    printf("Populacao: Carta %s venceu (%d)\n", populacao1 > populacao2 ? "1" : "2", populacao1 > populacao2 ? 1 : 0);
    printf("Area: Carta %s venceu (%d)\n", area1 > area2 ? "1" : "2", area1 > area2 ? 1 : 0);
    printf("PIB: Carta %s venceu (%d)\n", pib1 > pib2 ? "1" : "2", pib1 > pib2 ? 1 : 0);
    printf("Pontos Turisticos: Carta %s venceu (%d)\n", pontosturisticos1 > pontosturisticos2 ? "1" : "2", pontosturisticos1 > pontosturisticos2 ? 1 : 0);
    printf("Densidade Populacional: Carta %s venceu (%d)\n", densidade1 < densidade2 ? "1" : "2", densidade1 < densidade2 ? 1 : 0);
    printf("PIB per Capita: Carta %s venceu (%d)\n", pibpercapita1 > pibpercapita2 ? "1" : "2", pibpercapita1 > pibpercapita2 ? 1 : 0);
    printf("Super Poder: Carta %s venceu (%d)\n", superpoder1 > superpoder2 ? "1" : "2", superpoder1 > superpoder2 ? 1 : 0);

    return 0;
}
//CODIGO DESENVOLVIDO POR : VNZINDEV - ANALISE E DESENVOLVIMENTO DE SISTEMAS
