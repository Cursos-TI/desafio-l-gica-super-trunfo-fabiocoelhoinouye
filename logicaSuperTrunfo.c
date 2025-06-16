#include <stdio.h>
#include <string.h>

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char codigoA[20], codigoB[20];
    char cidadeA[50], cidadeB[50];
    int populacaoA, populacaoB;
    float areaA, areaB, pibA, pibB;
   
    
        // Cadastro das Cartas:
        // Solicita os dados da primeira cidade
        printf("Digite o código da cidade A: ");
        scanf("%s", codigoA);
        printf("Digite o nome da cidade A: ");
        scanf("%s", cidadeA);
        printf("Digite a população da cidade A: ");
        scanf("%d", &populacaoA);
        printf("Digite a área da cidade A (em km²): ");
        scanf("%f", &areaA);
        printf("Digite o PIB da cidade 1: ");
        scanf("%f", &pibA);

        // Solicita os dados da segunda cidade
        printf("\nDigite o código da cidade B: ");
        scanf("%s", codigoB);
        printf("Digite o nome da cidade B: ");
        scanf("%s", cidadeB);
        printf("Digite a população da cidade B: ");
        scanf("%d", &populacaoB);
        printf("Digite a área da cidade B (em km²): ");
        scanf("%f", &areaB);
        printf("Digite o PIB da cidade B: ");
        scanf("%f", &pibB);

        // Comparação de Cartas:
        printf("\n--- Resultados da Comparação ---\n");

        // Comparação por população
        if (populacaoA > populacaoB) {
            printf("A cidade %s tem maior população (%d).\n", cidadeA, populacaoA);
        } else if (populacaoA < populacaoB) {
            printf("A cidade %s tem maior população (%d).\n", cidadeB, populacaoB);
        } else {
            printf("As cidades têm a mesma população (%d).\n", populacaoA);
        }

        // Comparação por área
        if (areaA > areaB) {
            printf("A cidade %s tem uma área maior (%.2f km²).\n", cidadeA, areaA);
        } else if (areaA < areaB) {
            printf("A cidade %s tem uma área maior (%.2f km²).\n", cidadeB, areaB);
        } else {
            printf("As cidades têm a mesma área (%.2f km²).\n", areaA);
        }

        // Comparação por PIB
        if (pibA > pibB) {
            printf("A cidade %s tem um PIB maior (R$ %.2f).\n", cidadeA, pibA);
        } else if (pibA < pibB) {
            printf("A cidade %s tem um PIB maior (R$ %.2f).\n", cidadeB, pibB);
        } else {
            printf("As cidades têm o mesmo PIB (R$ %.2f).\n", pibA);
        }

        

    return 0;
}
