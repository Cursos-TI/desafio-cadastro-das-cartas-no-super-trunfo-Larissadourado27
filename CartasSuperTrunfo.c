#include <stdio.h>

int main() {
    //Carta 1 - São Paulo
    int populacao1 = 12300000;
    float pib1 = 800.0;
    int pontos_turisticos1 = 20;

    //Carta 2 - Manaus
    int populacao2 = 2200000;
    float pib2 = 120.0;
    int pontos_turisticos2 = 5;

    //Impressão das cartas
    printf("\n--- Carta 1: São Paulo ---\n");
    printf("Populacao: %d\n", populacao1);
    printf("PIB:%.2f bilhões R$\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\n--- Carta 2: Manaus ---\n");
    printf("Populacao: %d\n", populacao2);
    printf("PIB: %2f bilhões R$\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}