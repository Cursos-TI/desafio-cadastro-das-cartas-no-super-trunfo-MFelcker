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

    // Variáveis da cidade 01:
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[20] = "Cascavel";
    int populacao1 = 340000;
    float area1 = 2000000;
    float pib1 = 15000000000;
    int pontosturisticos1 = 5;

    // Variáveis da cidade 02:
    char estado2 = 'A';
    char codigo2[4] = "A01";
    char cidade2[20] = "Cascavel";
    int populacao2 = 340000;
    float area2 = 2000000;
    float pib2 = 15000000000;
    int pontosturisticos2 = 5;

    // Cadastro da primeira carta:
    printf("Cadastre sua primeira carta\n");
        printf("Digite a letra do estado\n");
        scanf(" %c", &estado1);
        printf("A primeira letra do estado é: %c\n", estado1);
        printf("Digite o codigo da cidade\n");
        scanf("%s", &codigo1);
        printf("O código da cidade é: %s\n", codigo1);
        printf("Digite o nome da cidade\n");
        scanf("%s", &cidade1);
        printf("O nome da cidade é: %s\n", cidade1);
        printf("Digite a população da cidade\n");
        scanf("%d", &populacao1);
        printf("A população da cidade é: %d\n", populacao1);
        printf("Digite a área da cidade\n");
        scanf("%f", &area1);
        printf("A área da cidade é: %.2f\n", area1);
        printf("Digite o PIB da cidade\n");
        scanf("%f", &pib1);
        printf("O PIB da cidade é: %.2f\n", pib1);
        printf("Digite o número de pontos turísticos da cidade\n");
        scanf("%d", &pontosturisticos1);
        printf("O número de pontos turísticos da cidade é: %d\n", pontosturisticos1);
        printf("A carta de código: %s, foi cadastrada com sucesso\n", codigo1);

    // Cadastro da segunda carta:
    printf("Cadastre sua segunda carta\n");    
        printf("Digite a letra do estado\n");
        scanf(" %c", &estado2);
        printf("A primeira letra do estado é: %c\n", estado2);
        printf("Digite o codigo da cidade\n");
        scanf("%s", &codigo2);
        printf("O código da cidade é: %s\n", codigo2);
        printf("Digite o nome da cidade\n");
        scanf("%s", &cidade2);
        printf("O nome da cidade é: %s\n", cidade2);
        printf("Digite a população da cidade\n");
        scanf("%d", &populacao2);
        printf("A população da cidade é: %d\n", populacao2);
        printf("Digite a área da cidade\n");
        scanf("%f", &area2);
        printf("A área da cidade é: %.2f\n", area2);
        printf("Digite o PIB da cidade\n");
        scanf("%f", &pib2);
        printf("O PIB da cidade é: %.2f\n", pib2);
        printf("Digite o número de pontos turísticos da cidade\n");
        scanf("%d", &pontosturisticos2);
        printf("O número de pontos turísticos da cidade é: %d\n", pontosturisticos2);
        printf("A carta de código: %s, foi cadastrada com sucesso\n", codigo2);

    // Apresentação dos dados das duas cartas
    printf("Os dados das suas cartas cadastradas são:\n");
        printf("Primeira carta:\n");
            printf("Estado: %c\n", estado1);
            printf("Código: %s\n", codigo1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %d\n", populacao1);
            printf("Área: %f\n", area1);
            printf("PIB: %f\n", pib1);
            printf("Pontos Turísticos: %d\n", pontosturisticos1);

        printf("Segunda carta:\n");
            printf("Estado: %c\n", estado2);
            printf("Código: %s\n", codigo2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %d\n", populacao2);
            printf("Área: %f\n", area2);
            printf("PIB: %f\n", pib2);
            printf("Pontos Turísticos: %d\n", pontosturisticos2);
        
    return 0;
}