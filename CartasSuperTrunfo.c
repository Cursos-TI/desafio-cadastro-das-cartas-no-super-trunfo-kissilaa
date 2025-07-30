#include <stdio.h>

int main() {
    
    //Carta 1:
    char estado;
    char codigodacarta[20], cidade[20];
    int pontosturisticos;
    unsigned long int populacao;
    float area, pib;

    printf("-CARTA 1-" "\n");

    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado);

    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigodacarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite a população: ");
    scanf("%lu", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos);

    printf(" \n");
    printf("-RESUMO DA CARTA 1-" "\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %lu pessoas \n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f reais\n", pib);
    printf ("Número de pontos turísticos: %d pontos\n", pontosturisticos);

    float densidadepopulacional = (float) populacao / area;
    
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional);

    float pibpercapita = (float) pib / populacao;
    
    printf("PIB per Capita: %.2f reais\n", pibpercapita);

    float densidadeinversa = (float) area / populacao;

    float superpoder = (float) populacao + area + pib + pibpercapita + pontosturisticos + densidadeinversa;

    printf("Super poder: %.2f\n", superpoder);

    printf(" \n");

    //Carta 2:
    char estado2;
    char codigodacarta2[20], cidade2[20];
    int pontosturisticos2;
    unsigned long int populacao2;
    float area2, pib2;

    printf("-CARTA 2-" "\n");

    printf("Digite o Estado (uma letra de A a H): " );
    scanf(" %c", &estado2);

    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigodacarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf(" \n");
    printf("-RESUMO DA CARTA 2-" "\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigodacarta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu pessoas\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf ("Pontos turísticos: %d pontos\n", pontosturisticos2);

    float densidadepopulacional2 = (float) populacao2 / area2;
    
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);

    float pibpercapita2 = (float) pib2 / populacao2;
    
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    float densidadeinversa2 = (float) area2 / populacao2;

    float superpoder2 = (float) populacao2 + area2 + pib2 + pibpercapita2 + pontosturisticos2 + densidadeinversa2;

    printf("Super poder: %.2f\n", superpoder2);

    //comparação de cartas
    printf("\n");
    printf("Quem Ganhou?\n");
    printf("População: Carta 1 venceu %d\n", populacao > populacao2);
    printf("Área: Carta 1 venceu %d\n", area > area2);
    printf("PIB: Carta 1 venceu %d\n", pib > pib2);
    printf("Pontos turísticos: Carta 1 venceu %d\n", pontosturisticos > pontosturisticos2);
    printf("Densidade populacional: Carta 1 venceu %d\n", densidadepopulacional < densidadepopulacional2);
    printf("PIB per capita: Carta 1 venceu %d\n", pibpercapita > pibpercapita2);
    printf("Super Poder: Carta 1 venceu %d\n", superpoder > superpoder2);

    return 0;
}