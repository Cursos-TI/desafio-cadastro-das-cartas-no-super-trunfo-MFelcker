#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Definição de variáveis
    char estado1 = 'A', estado2 = 'B';
    char codigo1[4] = "A01", codigo2[4] = "A02";
    char cidade1[20] = "Cascavel", cidade2[20] = "Toledo";
    unsigned long int populacao1 = 340, populacao2 = 180;
    float area1 = 200, area2 = 100;
    float pib1 = 150, pib2 = 750;
    int turismo1 = 5, turismo2 = 3;
    float densidade1 = populacao1 / area1, densidade2 = populacao2 / area2;
    float pibpercapita1 = pib1 / populacao1, pibpercapita2 = pib2 / populacao2;

    // Cálculo do Super Poder
    float superPoder1 = (double) (populacao1 + area1 + pib1 + turismo1 + pibpercapita1 + (1 / densidade1));
    float superPoder2 = (double) (populacao2 + area2 + pib2 + turismo2 + pibpercapita2 + (1 / densidade2));

    printf("***BEM VINDO AO SUPERTRUNFO***\n\n");

    // Cadastro da primeira carta:
    printf("Cadastre sua primeira carta\n\n");
        printf("Digite a primeira letra do estado\n");
        scanf(" %c", &estado1);
        printf("A primeira letra do estado é: %c\n", estado1);
        printf("Digite o codigo da cidade (ex: A01)\n");
        scanf("%s", &codigo1);
        printf("O código da cidade é: %s\n", codigo1);
        printf("Digite o nome da cidade\n");
        scanf("%s", &cidade1);
        printf("O nome da cidade é: %s\n", cidade1);
        printf("Digite a população da cidade\n");
        scanf("%lu", &populacao1);
        printf("A população da cidade é: %lu\n", populacao1);
        printf("Digite a área da cidade\n");
        scanf("%f", &area1);
        printf("A área da cidade é: %.1f\n", area1);
        printf("Digite o PIB da cidade\n");
        scanf("%f", &pib1);
        printf("O PIB da cidade é: %.1f\n", pib1);
        printf("Digite o número de pontos turísticos da cidade\n");
        scanf("%d", &turismo1);
        printf("O número de pontos turísticos da cidade é: %d\n\n", turismo1);
        printf("A carta de código: %s, foi cadastrada com sucesso\n\n", codigo1);

    // Cadastro da segunda carta:
    printf("Cadastre sua segunda carta\n\n");    
        printf("Digite a primeira letra do estado\n");
        scanf(" %c", &estado2);
        printf("A primeira letra do estado é: %c\n", estado2);
        printf("Digite o codigo da cidade (ex: A01)\n");
        scanf("%s", &codigo2);
        printf("O código da cidade é: %s\n", codigo2);
        printf("Digite o nome da cidade\n");
        scanf("%s", &cidade2);
        printf("O nome da cidade é: %s\n", cidade2);
        printf("Digite a população da cidade\n");
        scanf("%lu", &populacao2);
        printf("A população da cidade é: %lu\n", populacao2);
        printf("Digite a área da cidade\n");
        scanf("%f", &area2);
        printf("A área da cidade é: %.1f\n", area2);
        printf("Digite o PIB da cidade\n");
        scanf("%f", &pib2);
        printf("O PIB da cidade é: %.1f\n", pib2);
        printf("Digite o número de pontos turísticos da cidade\n");
        scanf("%d", &turismo2);
        printf("O número de pontos turísticos da cidade é: %d\n\n", turismo2);
        printf("A carta de código: %s, foi cadastrada com sucesso\n\n", codigo2);

    // Apresentação dos dados das duas cartas
    printf("Os dados das suas cartas cadastradas são:\n\n");
        printf("Primeira carta:\n");
            printf("Estado: %c\n", estado1);
            printf("Código: %s\n", codigo1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %lu habitantes\n", populacao1);
            printf("Área: %.0f km²\n", area1);
            printf("PIB: %.0f reais\n", pib1);
            printf("Pontos Turísticos: %d\n", turismo1);
            printf("Densidade Populacional: %.2f hab km²\n", densidade1);
            printf("PIB per capita: %.2f reais\n", pibpercapita1);
            printf("O Super Poder da Carta 1 é %.2f\n\n", superPoder1);

        printf("Segunda carta:\n");
            printf("Estado: %c\n", estado2);
            printf("Código: %s\n", codigo2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %lu habitantes\n", populacao2);
            printf("Área: %.0f km²\n", area2);
            printf("PIB: %.0f reais\n", pib2);
            printf("Pontos Turísticos: %d\n", turismo2);
            printf("Densidade Populacional: %.2f hab km²\n", densidade2);
            printf("PIB per capita: %.2f reais\n", pibpercapita2);
            printf("O Super Poder da Carta 2 é %.2f\n\n", superPoder2);
    
    /* Parte Iniciante do desafio

            // Cálculo de Comparação das Cartas
            int venceuPopulacao = populacao1 > populacao2;
            int venceuArea = area1 > area2;
            int venceuPIB = pib1 > pib2;
            int venceuTurismo = turismo1 > turismo2;
            int venceuPIBPerCapita = pibpercapita1 > pibpercapita2;
            int venceuDensidade = densidade1 < densidade2;
            int venceuSuperPoder = superPoder1 > superPoder2;

            Exibição do resultado
            printf("***Disputa***\n\n");
            printf("População: A Carta 1 venceu? %d\n", venceuPopulacao);
            printf("Área: A Carta 1 venceu? %d\n", venceuArea);
            printf("PIB: A Carta 1 venceu? %d\n", venceuPIB);
            printf("Pontos Turísticos: A Carta 1 venceu? %d\n", venceuTurismo);
            printf("Densidade Populacional: A Carta 1 venceu? %d\n", venceuDensidade);
            printf("PIB per Capita: A Carta 1 venceu? %d\n", venceuPIBPerCapita);
            printf("Super Poder: A Carta 1 venceu? %d\n\n", venceuSuperPoder);
            */

            /*Comparação das cartas utilizando If-Else
            printf("***Disputa quesito população***\n\n");
            printf("População da carta 1: %lu\n", populacao1);
            printf("População da carta 2: %lu\n\n", populacao2);
            
            if (populacao1 > populacao2)
            {
                printf ("Quesito população: Carta 1 venceu!\n\n");
            }
            else 
            {
                printf ("Quesito população: Carta 2 venceu!\n\n");
            }
    */

    /* Parte intermediária do Desafio

        // Criação do menu interativo
        int opcao;
        printf("*** Escolha o atributo de comparação! ***\n\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - PIB per Capita\n");
        printf("6 - Densidade Populacional\n");
        printf("7 - Super Poder\n");
        printf("8 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao)
        {
            case 1:
                printf("*** Disputa quesito população ***\n\n");
                printf("População da carta 1 (%s): %lu\n", cidade1, populacao1);
                printf("População da carta 2 (%s): %lu\n\n", cidade2, populacao2);
                
                if (populacao1 > populacao2)
                {
                    printf ("Quesito população: Carta 1 venceu!\n\n");
                }
                else if (populacao1 == populacao2)
                {
                    printf ("Quesito população: Empate!\n\n");
                }
                else
                {
                    printf ("Quesito população: Carta 2 venceu!\n\n");
                }
                break;

            case 2:
                printf("*** Disputa quesito área ***\n\n");
                printf("Área da carta 1 (%s): %.0f km²\n", cidade1, area1);
                printf("Área da carta 2 (%s): %.0f km²\n\n", cidade2, area2);
                
                if (area1 > area2)
                {
                    printf ("Quesito área: Carta 1 venceu!\n\n");
                }
                else if (area1 == area2)
                {
                    printf ("Quesito área: Empate!\n\n");
                }
                else 
                {
                    printf ("Quesito área: Carta 2 venceu!\n\n");
                }
                break;

            case 3:
                printf("*** Disputa quesito PIB ***\n\n");
                printf("PIB da carta 1 (%s): %.0f reais\n", cidade1, pib1);
                printf("PIB da carta 2 (%s): %.0f reais\n\n", cidade2, pib2);
                
                if (pib1 > pib2)
                {
                    printf ("Quesito PIB: Carta 1 venceu!\n\n");
                }
                else if (pib1 == pib2)
                {
                    printf ("Quesito PIB: Empate!\n\n");
                }
                else 
                {
                    printf ("Quesito PIB: Carta 2 venceu!\n\n");
                }
                break;

            case 4:
                printf("*** Disputa quesito pontos turísticos ***\n\n");
                printf("Pontos turísticos da carta 1 (%s): %d\n", cidade1, turismo1);
                printf("Pontos turísticos da carta 2 (%s): %d\n\n", cidade2, turismo2);
                
                if (turismo1 > turismo2)
                {
                    printf ("Quesito pontos turísticos: Carta 1 venceu!\n\n");
                }
                else if (turismo1 == turismo2)
                {
                    printf ("Quesito pontos turísticos: Empate!\n\n");
                }
                else 
                {
                    printf ("Quesito pontos turísticos: Carta 2 venceu!\n\n");
                }
                break;

            case 5:
                printf("*** Disputa quesito PIB per Capita ***\n\n");
                printf("PIB per Capita da carta 1 (%s): %.2f reais\n", cidade1, pibpercapita1);
                printf("PIB per Capita da carta 2 (%s): %.2f reais\n\n", cidade2, pibpercapita2);
                
                if (pibpercapita1 > pibpercapita2)
                {
                    printf ("Quesito PIB per Capita: Carta 1 venceu!\n\n");
                }
                else if (pibpercapita1 == pibpercapita2)
                {
                    printf ("Quesito PIB per Capita: Empate!\n\n");
                }
                else 
                {
                    printf ("Quesito PIB per Capita: Carta 2 venceu!\n\n");
                }
                break;

            case 6:
                printf("*** Disputa quesito densidade populacional ***\n\n");
                printf("Densidade populacional da carta 1 (%s): %.2f hab/km²\n", cidade1, densidade1);
                printf("Densidade populacional da carta 2 (%s): %.2f hab/km²\n\n", cidade2, densidade2);
                
                if (densidade1 < densidade2)
                {
                    printf ("Quesito densidade populacional: Carta 1 venceu!\n\n");
                }
                else if (densidade1 == densidade2)
                {
                    printf ("Quesito densidade populacional: Empate!\n\n");
                }
                else 
                {
                    printf ("Quesito densidade populacional: Carta 2 venceu!\n\n");
                }
                break;

            case 7: 
                printf("*** Disputa quesito super poder ***\n\n");
                printf("Super Poder da carta 1 (%s): %.2f\n", cidade1, superPoder1);
                printf("Super Poder da carta 2 (%s): %.2f\n\n", cidade2, superPoder2);
                
                if (superPoder1 > superPoder2)
                {
                    printf ("Quesito super poder: Carta 1 venceu!\n\n");
                }
                else if (superPoder1 == superPoder2)
                {
                    printf ("Quesito super poder: Empate!\n\n");
                }
                else 
                {
                    printf ("Quesito super poder: Carta 2 venceu!\n\n");
                }
                break;
            
            case 8:
                printf("*** FIM DO JOGO ***\n\n");
                break;
            
            default:
                printf("Opção inválida! Tente novamente.\n\n");
                break;
        }
    */

    int atributo1, atributo2;
    int resultado1, resultado2;

    // Escolha do primeiro atributo
    printf("*** Escolha o primeiro atributo de comparação! ***\n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - PIB per Capita\n");
    printf("6 - Densidade Populacional\n");
    printf("7 - Super Poder\n");
    printf("8 - Sair\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &atributo1);
    printf("A opção escolhida foi: %d\n\n", atributo1);
    
    // Comparação dos atributos escolhidos
    switch (atributo1)
    {
        case 1:
            printf("*** Você escolheu a opção População! ***\n\n");
            printf("População da carta 1 (%s): %lu\n", cidade1, populacao1);
            printf("População da carta 2 (%s): %lu\n\n", cidade2, populacao2);
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        
        case 2:
            printf("*** Você escolheu a opção Área! ***\n\n");
            printf("Área da carta 1 (%s): %.0f km²\n", cidade1, area1);
            printf("Área da carta 2 (%s): %.0f km²\n\n", cidade2, area2);
            resultado1 = area1 > area2 ? 1 : 0;
            break;

        case 3:
            printf("*** Você escolheu a opção PIB! ***\n\n");
            printf("PIB da carta 1 (%s): %.0f reais\n", cidade1, pib1);
            printf("PIB da carta 2 (%s): %.0f reais\n\n", cidade2, pib2);
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;

        case 4:
            printf("*** Você escolheu a opção Pontos Turísticos! ***\n\n");
            printf("Pontos turísticos da carta 1 (%s): %d\n", cidade1, turismo1);
            printf("Pontos turísticos da carta 2 (%s): %d\n\n", cidade2, turismo2);
            resultado1 = turismo1 > turismo2 ? 1 : 0;
            break;

        case 5:
            printf("*** Você escolheu a opção PIB per Capita! ***\n\n");
            printf("PIB per Capita da carta 1 (%s): %.2f reais\n", cidade1, pibpercapita1);
            printf("PIB per Capita da carta 2 (%s): %.2f reais\n\n", cidade2, pibpercapita2);
            resultado1 = pibpercapita1 > pibpercapita2 ? 1 : 0;
            break;

        case 6:
            printf("*** Você escolheu a opção Densidade Populacional! ***\n\n");
            printf("Densidade populacional da carta 1 (%s): %.2f hab/km²\n", cidade1, densidade1);
            printf("Densidade populacional da carta 2 (%s): %.2f hab/km²\n\n", cidade2, densidade2);
            resultado1 = densidade1 < densidade2 ? 1 : 0;
            break;

        case 7:
            printf("*** Você escolheu a opção Super Poder! ***\n\n");
            printf("Super Poder da carta 1 (%s): %.2f\n", cidade1, superPoder1);
            printf("Super Poder da carta 2 (%s): %.2f\n\n", cidade2, superPoder2);
            resultado1 = superPoder1 > superPoder2 ? 1 : 0;
            break;

        default:
            printf("Opção inválida! Tente novamente.\n\n");
            break;
    }

    // Escolha do segundo atributo
    printf("*** Escolha o segundo atributo de comparação!(Não repita o mesmo atributo) ***\n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - PIB per Capita\n");
    printf("6 - Densidade Populacional\n");
    printf("7 - Super Poder\n");
    printf("8 - Sair\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &atributo2);
    printf("A opção escolhida foi: %d\n\n", atributo2);

    // Comparação dos atributos escolhidos
    if (atributo1 == atributo2)
    {
        printf("Você não pode escolher o mesmo atributo duas vezes! Tente novamente.\n\n");
        return 0;
    }
    else
    {
        switch (atributo2)
        {
            case 1:
                printf("*** Você escolheu a opção População! ***\n\n");
                printf("População da carta 1 (%s): %lu\n", cidade1, populacao1);
                printf("População da carta 2 (%s): %lu\n\n", cidade2, populacao2);
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                break;
            
            case 2:
                printf("*** Você escolheu a opção Área! ***\n\n");
                printf("Área da carta 1 (%s): %.0f km²\n", cidade1, area1);
                printf("Área da carta 2 (%s): %.0f km²\n\n", cidade2, area2);
                resultado2 = area1 > area2 ? 1 : 0;
                break;

            case 3:
                printf("*** Você escolheu a opção PIB! ***\n\n");
                printf("PIB da carta 1 (%s): %.0f reais\n", cidade1, pib1);
                printf("PIB da carta 2 (%s): %.0f reais\n\n", cidade2, pib2);
                resultado2 = pib1 > pib2 ? 1 : 0;
                break;

            case 4:
                printf("*** Você escolheu a opção Pontos Turísticos! ***\n\n");
                printf("Pontos turísticos da carta 1 (%s): %d\n", cidade1, turismo1);
                printf("Pontos turísticos da carta 2 (%s): %d\n\n", cidade2, turismo2);
                resultado2 = turismo1 > turismo2 ? 1 : 0;
                break;

            case 5:
                printf("*** Você escolheu a opção PIB per Capita! ***\n\n");
                printf("PIB per Capita da carta 1 (%s): %.2f reais\n", cidade1, pibpercapita1);
                printf("PIB per Capita da carta 2 (%s): %.2f reais\n\n", cidade2, pibpercapita2);
                resultado2 = pibpercapita1 > pibpercapita2 ? 1 : 0;
                break;

            case 6:
                printf("*** Você escolheu a opção Densidade Populacional! ***\n\n");
                printf("Densidade populacional da carta 1 (%s): %.2f hab/km²\n", cidade1, densidade1);
                printf("Densidade populacional da carta 2 (%s): %.2f hab/km²\n\n", cidade2, densidade2);
                resultado2 = densidade1 < densidade2 ? 1 : 0;
                break;

            case 7:
                printf("*** Você escolheu a opção Super Poder! ***\n\n");
                printf("Super Poder da carta 1 (%s): %.2f\n", cidade1, superPoder1);
                printf("Super Poder da carta 2 (%s): %.2f\n\n", cidade2, superPoder2);
                resultado2 = superPoder1 > superPoder2 ? 1 : 0;
                break;

            default:
                printf("Opção inválida! Tente novamente.\n\n");
                break;
        }
    }

    // Demonstração dos atributos escolhidos
        switch (atributo1)
        {
            case 1:
                printf("*** População! ***\n");
                printf("População da carta 1 (%s): %lu\n", cidade1, populacao1);
                printf("População da carta 2 (%s): %lu\n", cidade2, populacao2);
                break;
            
            case 2:
                printf("*** Área! ***\n");
                printf("Área da carta 1 (%s): %.0f km²\n", cidade1, area1);
                printf("Área da carta 2 (%s): %.0f km²\n", cidade2, area2);
                break;

            case 3:
                printf("*** PIB! ***\n");
                printf("PIB da carta 1 (%s): %.0f reais\n", cidade1, pib1);
                printf("PIB da carta 2 (%s): %.0f reais\n", cidade2, pib2);
                break;

            case 4:
                printf("*** Pontos Turísticos! ***\n");
                printf("Pontos turísticos da carta 1 (%s): %d\n", cidade1, turismo1);
                printf("Pontos turísticos da carta 2 (%s): %d\n", cidade2, turismo2);
                break;

            case 5:
                printf("*** PIB per Capita! ***\n");
                printf("PIB per Capita da carta 1 (%s): %.2f reais\n", cidade1, pibpercapita1);
                printf("PIB per Capita da carta 2 (%s): %.2f reais\n", cidade2, pibpercapita2);
                break;

            case 6:
                printf("*** Densidade Populacional! ***\n");
                printf("Densidade populacional da carta 1 (%s): %.2f hab/km²\n", cidade1, densidade1);
                printf("Densidade populacional da carta 2 (%s): %.2f hab/km²\n", cidade2, densidade2);
                break;

            case 7:
                printf("*** Super Poder! ***\n");
                printf("Super Poder da carta 1 (%s): %.2f\n", cidade1, superPoder1);
                printf("Super Poder da carta 2 (%s): %.2f\n", cidade2, superPoder2);
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

        printf("\n");

        switch (atributo2)
        {
            case 1:
                printf("*** População! ***\n");
                printf("População da carta 1 (%s): %lu\n", cidade1, populacao1);
                printf("População da carta 2 (%s): %lu\n", cidade2, populacao2);
                break;
            
            case 2:
                printf("*** Área! ***\n");
                printf("Área da carta 1 (%s): %.0f km²\n", cidade1, area1);
                printf("Área da carta 2 (%s): %.0f km²\n", cidade2, area2);
                break;

            case 3:
                printf("*** PIB! ***\n");
                printf("PIB da carta 1 (%s): %.0f reais\n", cidade1, pib1);
                printf("PIB da carta 2 (%s): %.0f reais\n", cidade2, pib2);
                break;

            case 4:
                printf("*** Pontos Turísticos! ***\n");
                printf("Pontos turísticos da carta 1 (%s): %d\n", cidade1, turismo1);
                printf("Pontos turísticos da carta 2 (%s): %d\n", cidade2, turismo2);
                break;

            case 5:
                printf("*** PIB per Capita! ***\n");
                printf("PIB per Capita da carta 1 (%s): %.2f reais\n", cidade1, pibpercapita1);
                printf("PIB per Capita da carta 2 (%s): %.2f reais\n", cidade2, pibpercapita2);
                break;

            case 6:
                printf("*** Densidade Populacional! ***\n");
                printf("Densidade populacional da carta 1 (%s): %.2f hab/km²\n", cidade1, densidade1);
                printf("Densidade populacional da carta 2 (%s): %.2f hab/km²\n", cidade2, densidade2);
                break;

            case 7:
                printf("*** Super Poder! ***\n");
                printf("Super Poder da carta 1 (%s): %.2f\n", cidade1, superPoder1);
                printf("Super Poder da carta 2 (%s): %.2f\n", cidade2, superPoder2);
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
        
    printf("\n")

    // Disputa final
        printf("*** DISPUTA FINAL! ***\n\n");
            if ((resultado1) && (resultado2))
            {
                printf("A carta 1 (%s) venceu!\n\n", cidade1);
            }
            else if (resultado1 != resultado2)
            {
                printf("As cartas empataram!\n\n");
            }
            else
            {
                printf("A carta 2 (%s) venceu!\n\n", cidade2);
            }
    
    printf("\n\n");

    printf("*** FIM DO JOGO ***\n\n");
        
    return 0;
}