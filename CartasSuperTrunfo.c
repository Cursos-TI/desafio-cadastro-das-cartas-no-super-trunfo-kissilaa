#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("DESAFIO SUPER TRUNFO:\n");
    printf("\n");

    //Carta 1:
    char estado = 'A';
    char codigodacarta[20] = "A01";
    char cidade[20] = "Salvador";
    int populacao = 2;
    float area = 693.8;
    float pib = 62.8;
    int pontosturisticos = 92;

    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Codigo da carta: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", cidade );
    printf("População: %d milhões\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %2.f bilhões de reais\n", pib);
    printf ("Número de pontos turisticos: %d pontos\n", pontosturisticos);

    //Carta 2:
    char estado2 = 'B';
    char codigodacarta2[20] = "B01";
    char cidade2[20] = "Juazeiro";
    int populacao2 = 237;
    float area2 = 6.721;
    float pib2 = 5.2;
    int pontosturisticos2 = 14;

    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigodacarta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d mil\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %2.f bilhões de reais\n", pib2);
    printf ("Número de pontos turisticos: %d pontos\n", pontosturisticos2);
    
    return 0;
}
