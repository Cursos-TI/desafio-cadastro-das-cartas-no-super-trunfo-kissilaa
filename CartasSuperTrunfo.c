#include <stdio.h>

int main() {
    
    //Carta 1:
    char estado;
    char codigodacarta[20], cidade[20];
    int populacao, pontosturisticos;
    float area, pib;

    printf("-CARTA 1-" "\n");

    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado);
    printf("Estado: %c\n", estado);
    printf(" \n");


    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigodacarta);
    printf("Código da carta: %s\n", codigodacarta);
    printf(" \n");

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    printf("Nome da cidade: %s\n", cidade);
    printf(" \n");

    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("População: %d milhões\n", populacao);
    printf(" \n");

    printf("Digite a área: ");
    scanf("%f", &area);
    printf("Área: %.2f km²\n", area);
    printf(" \n");

    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("PIB: %2.f bilhões de reais\n", pib);
    printf(" \n");

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos);
    printf ("Número de pontos turísticos: %d pontos\n", pontosturisticos);
    printf(" \n");

    //Carta 2:
    char estado2;
    char codigodacarta2[20], cidade2[20];
    int populacao2, pontosturisticos2;
    float area2, pib2;

    printf("-CARTA 2-" "\n");

    printf("Digite o Estado (uma letra de A a H): " );
    scanf(" %c", &estado2);
    printf("Estado: %c\n", estado2);
    printf(" \n");

    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigodacarta2);
    printf("Código da carta: %s\n", codigodacarta2);
    printf(" \n");


    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Nome da cidade: %s\n", cidade2);
    printf(" \n");

    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("População: %d mil\n", populacao2);
    printf(" \n");

    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Área: %.2f km²\n", area2);
    printf(" \n");

    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("PIB: %2.f bilhões de reais\n", pib2);
    printf(" \n");

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);
    printf ("Pontos turísticos: %d pontos\n", pontosturisticos2);
    printf(" \n");

    return 0;
}