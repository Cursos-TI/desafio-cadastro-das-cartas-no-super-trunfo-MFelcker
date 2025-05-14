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

    // Variáveis da cidade 01 e 02:
    char estado1 = 'A', estado2 = 'B';
    char codigo1[4] = "A01", codigo2[4] = "A02";
    char cidade1[20] = "Cascavel", cidade2[20] = "Toledo";
    int populacao1 = 340, populacao2 = 180;
    float area1 = 200, area2 = 100;
    float pib1 = 150, pib2 = 750;
    int turismo1 = 5, turismo2 = 3;
    float densidade1 = populacao1 / area1, densidade2 = populacao2 / area2;
    float pibpercapita1 = pib1 / populacao1, pibpercapita2 = pib2 / populacao2;

    printf("***BEM VINDO AO SUPERTRUNFO***\n\n");

    // Cadastro da primeira carta:
    printf("Cadastre sua primeira carta\n");
        printf("Digite a primeira letra do estado\n");
        scanf(" %c", &estado1);
        printf("A primeira letra do estado é: %c\n", estado1);
        printf("Digite o codigo da cidade (ex: A01)\n");
        scanf("%s", &codigo1);
        printf("O código da cidade é: %s\n", codigo1);
        printf("Digite o nome da cidade\n");
        scanf("%s", &cidade1);
        printf("O nome da cidade é: %s\n", cidade1);
        printf("Digite a população da cidade (em milhares)\n");
        scanf("%d", &populacao1);
        printf("A população da cidade é: %d\n", populacao1);
        printf("Digite a área da cidade (em km²)\n");
        scanf("%f", &area1);
        printf("A área da cidade é: %f\n", area1);
        printf("Digite o PIB da cidade (em bilhões de reais)\n");
        scanf("%f", &pib1);
        printf("O PIB da cidade é: %f\n", pib1);
        printf("Digite o número de pontos turísticos da cidade\n");
        scanf("%d", &turismo1);
        printf("O número de pontos turísticos da cidade é: %d\n", turismo1);
        printf("A carta de código: %s, foi cadastrada com sucesso\n\n", codigo1);

    // Cadastro da segunda carta:
    printf("Cadastre sua segunda carta\n");    
        printf("Digite a primeira letra do estado\n");
        scanf(" %c", &estado2);
        printf("A primeira letra do estado é: %c\n", estado2);
        printf("Digite o codigo da cidade (ex: A01)\n");
        scanf("%s", &codigo2);
        printf("O código da cidade é: %s\n", codigo2);
        printf("Digite o nome da cidade\n");
        scanf("%s", &cidade2);
        printf("O nome da cidade é: %s\n", cidade2);
        printf("Digite a população da cidade (em milhares)\n");
        scanf("%d", &populacao2);
        printf("A população da cidade é: %d\n", populacao2);
        printf("Digite a área da cidade (em km²)\n");
        scanf("%f", &area2);
        printf("A área da cidade é: %f\n", area2);
        printf("Digite o PIB da cidade (em bilhões de reais)\n");
        scanf("%f", &pib2);
        printf("O PIB da cidade é: %f\n", pib2);
        printf("Digite o número de pontos turísticos da cidade\n");
        scanf("%d", &turismo2);
        printf("O número de pontos turísticos da cidade é: %d\n", turismo2);
        printf("A carta de código: %s, foi cadastrada com sucesso\n\n", codigo2);

    // Apresentação dos dados das duas cartas
    printf("Os dados das suas cartas cadastradas são:\n\n");
        printf("Primeira carta:\n");
            printf("Estado: %c\n", estado1);
            printf("Código: %s\n", codigo1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %d mil habitantes\n", populacao1);
            printf("Área: %.1f km²\n", area1);
            printf("PIB: %.1f bilhões de reais\n", pib1);
            printf("Pontos Turísticos: %d\n", turismo1);
            printf("Densidade Populacional: %.2f hab km²\n", densidade1);
            printf("PIB per capita: %.2f milhões de reais\n\n", pibpercapita1);


        printf("Segunda carta:\n");
            printf("Estado: %c\n", estado2);
            printf("Código: %s\n", codigo2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %d mil habitantes\n", populacao2);
            printf("Área: %.1f km²\n", area2);
            printf("PIB: %.1f bilhões de reais\n", pib2);
            printf("Pontos Turísticos: %d\n", turismo2);
            printf("Densidade Populacional: %.2f hab km²\n", densidade2);
            printf("PIB per capita: %.2f milhões de reais\n\n", pibpercapita2);

    printf("***FIM DO JOGO***\n\n");
        
    return 0;
}