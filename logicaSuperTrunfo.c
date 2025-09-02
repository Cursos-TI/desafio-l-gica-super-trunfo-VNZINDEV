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

    int opcao;

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

    // calculos de densidade e pib per capita
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // exibicao carta 1
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

    // exibicao carta 2
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

    // menu de comparacao
    printf("\nEscolha o atributo que deseja comparar:\n");
    printf("1 - populacao\n");
    printf("2 - area\n");
    printf("3 - pontos turisticos\n");
    printf("4 - pib\n");
    printf("5 - densidade populacional\n");
    printf("6 - pib per capita\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n");

    // switch-case para comparar o atributo escolhido
    switch(opcao){
        case 1:
            if(populacao1 > populacao2) printf("RESULTADO: Carta 1 venceu!\n");
            else if(populacao2 > populacao1) printf("RESULTADO: Carta 2 venceu!\n");
            else printf("RESULTADO: Empate!\n");
            break;
        case 2:
            if(area1 > area2) printf("RESULTADO: Carta 1 venceu!\n");
            else if(area2 > area1) printf("RESULTADO: Carta 2 venceu!\n");
            else printf("RESULTADO: Empate!\n");
            break;
        case 3:
            if(pontosturisticos1 > pontosturisticos2) printf("RESULTADO: Carta 1 venceu!\n");
            else if(pontosturisticos2 > pontosturisticos1) printf("RESULTADO: Carta 2 venceu!\n");
            else printf("RESULTADO: Empate!\n");
            break;
        case 4:
            if(pib1 > pib2) printf("RESULTADO: Carta 1 venceu!\n");
            else if(pib2 > pib1) printf("RESULTADO: Carta 2 venceu!\n");
            else printf("RESULTADO: Empate!\n");
            break;
        case 5:
            if(densidade1 > densidade2) printf("RESULTADO: Carta 1 venceu!\n");
            else if(densidade2 > densidade1) printf("RESULTADO: Carta 2 venceu!\n");
            else printf("RESULTADO: Empate!\n");
            break;
        case 6:
            if(pibpercapita1 > pibpercapita2) printf("RESULTADO: Carta 1 venceu!\n");
            else if(pibpercapita2 > pibpercapita1) printf("RESULTADO: Carta 2 venceu!\n");
            else printf("RESULTADO: Empate!\n");
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
//CODIGO DESENVOLVIDO POR : VNZINDEV - ANALISE E DESENVOLVIMENTO DE SISTEMAS
