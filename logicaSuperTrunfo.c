#include <stdio.h>

int main() {

// VARIAVEIS DA CARTA 1

 char estado1;
 char codigo1[4];
 char cidade1[50];
 int populacao1;
 float area1;
 float pib1;
 int pontosturisticos1;

// VARIAVEIS DA CARTA 2

 char estado2;
 char codigo2[4];
 char cidade2[50];
 int populacao2;
 float area2;
 float pib2;
 int pontosturisticos2;

//INICIO DO CODIGO DE CADASTRO DA CARTA 1

 printf("+++ -> CADASTRO DA CARTA 1 <- +++\n");
 printf("Digite a letra inicial do estado (ex : A-H): ");
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

 // INICIO DO CODIGO DO CADASTRO DA CARTA 2

 printf("\n+++ -> CADASTRO DA CARTA 2 <- +++\n");
 printf("Digite a letra inicial do estado (ex : A-H): ");
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

 // DADOS PARA IMPRIMIR NA TELA CARTA 1

 printf("\n+++ -> DADOS DA CARTA 1 <- +++\n");
 printf("Estado: %c\n", estado1);
 printf("Codigo: %s\n", codigo1);
 printf("Cidade: %s\n", cidade1);
 printf("Populacao: %d\n", populacao1);
 printf("Area: %.2f km2\n", area1);
 printf("PIB: %.2f bilhões de reais\n", pib1);
 printf("Pontos Turisticos: %d\n", pontosturisticos1);

 // DADOS PARA IMPRIMIR NA TELA CARTA 2

 printf("\n+++ -> DADOS DA CARTA 2 <- +++\n");
 printf("Estado: %c\n", estado2);
 printf("Codigo: %s\n", codigo2);
 printf("Cidade: %s\n", cidade2);
 printf("Populacao: %d\n", populacao2);
 printf("Area: %.2f km2\n", area2);
 printf("PIB: %.2f bilhões de reais\n", pib2);
 printf("Pontos Turisticos: %d\n", pontosturisticos2);

 // COMPARACAO DOS ATRIBUTOS ENTRE AS DUAS CARTAS - LOGICA DO JOGO

 if (populacao1 > populacao2 && area1 > area2 && pontosturisticos1 > pontosturisticos2 && pib1 > pib2){
printf ("RESULTADO : a [carta 1] venceu !"); 
 } else {
printf ("RESULTADO : A [carta 2] venceu !");
 }

/*
A LOGICA UTILIZADA PARA A COMPARACAO FOI EM RELACAO A TODAS AS ATRIBUICOES DA CARTA, SE OS DADOS
ISERIDOS  NA CARTA 1 FOREM MAIORES QUE OS DADOS DA  CARTA 2 OU VICE-VERSA, A CARTA COM AS MAIORES
ATRIBUIÇOES SERÁ A CARTA VENCEDORA !!!

*/


    
return 0;

//- CODIGO DESENVOLVIDO POR: VNZINDEV - ANALISE E DESENVOLVIMENTO DE SISTEMAS

}
