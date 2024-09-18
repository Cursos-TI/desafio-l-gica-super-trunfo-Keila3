#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Nivel Mestre

int main() {
    // Definição de variáveis
    char estado1, estado2;
    int Codigo_cidade1, Codigo_cidade2;
    char Nome_cidade1[50], Nome_cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turistico1, pontos_turistico2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    int vitoria_carta1 = 0, vitoria_carta2 = 0;

    // Cadastro da Carta 1:
    printf("Cadastre as informações da carta 1:\n");

    // Cadastro do código da carta
    printf("Siga as instruções, e digite o código da carta:\n");
    printf("Digite uma letra de A a H, para representar o estado:\n");
    scanf(" %c", &estado1);
    printf("Digite um número de 1 a 4, para representar a cidade:\n");
    scanf("%d", &Codigo_cidade1);

    // Cadastro nome da cidade 1
    printf("Digite o nome da cidade 1:\n");
    scanf("%s", Nome_cidade1);

    // Cadastro população
    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    // Cadastro de Área
    printf("Digite a Área em km²\n");
    scanf("%f", &area1);

    // Cadastro PIB
    printf("Digite o PIB em bilhões\n");
    scanf("%f", &pib1);

    // Cadastro Número de pontos turísticos
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_turistico1);

    // Cálculo densidade populacional
    densidade1 = (float) populacao1 / area1;

    // Cálculo PIB per capita
    pib_per_capita1 = (float) pib1 / populacao1;

    // Cadastro da Carta 2:
    printf("Cadastre as informações da carta 2:\n");

    // Cadastro do código da carta
    printf("Siga as instruções, e digite o código da carta:\n");
    printf("Digite uma letra de A a H, para representar o estado:\n");
    scanf(" %c", &estado2);
    printf("Digite um número de 1 a 4, para representar a cidade:\n");
    scanf("%d", &Codigo_cidade2);

    // Cadastro nome da cidade 2
    printf("Digite o nome da cidade 2:\n");
    scanf("%s", Nome_cidade2);

    // Cadastro população
    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    // Cadastro de Área
    printf("Digite a Área em km²\n");
    scanf("%f", &area2);

    // Cadastro PIB
    printf("Digite o PIB em bilhões\n");
    scanf("%f", &pib2);

    // Cadastro Número de pontos turísticos
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_turistico2);

    // Cálculo densidade populacional
    densidade2 = (float) populacao2 / area2;

    // Cálculo PIB per capita
    pib_per_capita2 = (float) pib2 / populacao2;

    // Cálculo super poder da carta 1 e 2
    super_poder1 = area1 + populacao1 + pib1 + pontos_turistico1;
    super_poder2 = area2 + populacao2 + pib2 + pontos_turistico2;

    // Menu interativo
    int opcao;
    printf("\nEscolha uma opção\n");
    printf("1. Exibir dados cadastrados da carta 1!\n");
    printf("2. Exibir dados cadastrados da carta 2!\n");
    printf("3. Iniciar jogo!\n");
    printf("Opção: \n");
    scanf("%d", &opcao);

    // Exibição dos resultados do menu:
    switch (opcao) {
        case 1: // Exibição dos dados cadastrados da carta 1
            printf("\nDados cadastrados da carta 1:\n");
            printf("Código da carta: %c%02d\n", estado1, Codigo_cidade1);
            printf("Nome da cidade 1: %s\n", Nome_cidade1);
            printf("População: %d\n", populacao1);
            printf("Área: %.2f km²\n", area1);
            printf("Densidade populacional: %.2f\n", densidade1);
            printf("PIB: %.2f Bilhões\n", pib1);
            printf("PIB per capita: %.6f\n", pib_per_capita1);
            printf("Número de pontos turísticos: %d\n", pontos_turistico1);
            break;

        case 2: // Exibição dos dados cadastrados da carta 2
            printf("\nDados cadastrados da carta 2:\n");
            printf("Código da carta: %c%02d\n", estado2, Codigo_cidade2);
            printf("Nome da cidade 2: %s\n", Nome_cidade2);
            printf("População: %d\n", populacao2);
            printf("Área: %.2f km²\n", area2);
            printf("Densidade populacional: %.2f\n", densidade2);
            printf("PIB: %.2f Bilhões\n", pib2);
            printf("PIB per capita: %.6f\n", pib_per_capita2);
            printf("Número de pontos turísticos: %d\n", pontos_turistico2);
            break;

        case 3: // Menu interativo 2
        {
            int num_atributos;
            printf("Vamos iniciar o jogo, escolha como você quer jogar:\n");
            printf("1. Comparar apenas 1 atributo\n");
            printf("2. Comparar 2 atributos\n");
            printf("3. Comparar todos os atributos\n");
            printf("Digite sua opção: ");
            scanf("%d", &num_atributos);

            if(num_atributos == 1) {
                // Comparação de 1 atributo
                printf("\nEscolha um atributo para comparar\n");
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Densidade\n");
                printf("5. PIB per capita\n");
                printf("6. Super poder\n");
                printf("Digite sua opção: ");
                scanf("%d", &opcao);

                // Comparação dos atributos escolhidos
                switch (opcao) {
                    case 1: // População
                        vitoria_carta1 += (populacao1 > populacao2) ? 1 : 0;
                        vitoria_carta2 += (populacao2 > populacao1) ? 1 : 0;
                        break;
                    case 2: // Área
                        vitoria_carta1 += (area1 > area2) ? 1 : 0;
                        vitoria_carta2 += (area2 > area1) ? 1 : 0;
                        break;
                    case 3: // PIB
                        vitoria_carta1 += (pib1 > pib2) ? 1 : 0;
                        vitoria_carta2 += (pib2 > pib1) ? 1 : 0;
                        break;
                    case 4: // Densidade vence o menor
                        vitoria_carta1 += (densidade1 < densidade2) ? 1 : 0;
                        vitoria_carta2 += (densidade2 < densidade1) ? 1 : 0;
                        break;
                    case 5: // PIB per capita
                        vitoria_carta1 += (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
                        vitoria_carta2 += (pib_per_capita2 > pib_per_capita1) ? 1 : 0;
                        break;
                    case 6: // Super poder
                        vitoria_carta1 += (super_poder1 > super_poder2) ? 1 : 0;
                        vitoria_carta2 += (super_poder2 > super_poder1) ? 1 : 0;
                        break;
                    default:
                        printf("Opção inválida...\n");
                        break;
                }
            } else if(num_atributos == 2) {
                // Comparação de dois atributos
                int opcao1, opcao2;
                printf("\nEscolha dois atributos para comparar\n");
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Densidade\n");
                printf("5. PIB per capita\n");
                printf("6. Super poder\n");
                printf("Digite a primeira opção: ");
                scanf("%d", &opcao1);
                printf("Digite a segunda opção: ");
                scanf("%d", &opcao2);

                // Comparação dos dois atributos escolhidos
                switch (opcao1) {
                    case 1: // População
                        vitoria_carta1 += (populacao1 > populacao2) ? 1 : 0;
                        vitoria_carta2 += (populacao2 > populacao1) ? 1 : 0;
                        break;
                    case 2: // Área
                        vitoria_carta1 += (area1 > area2) ? 1 : 0;
                        vitoria_carta2 += (area2 > area1) ? 1 : 0;
                        break;
                    case 3: // PIB
                        vitoria_carta1 += (pib1 > pib2) ? 1 : 0;
                        vitoria_carta2 += (pib2 > pib1) ? 1 : 0;
                        break;
                    case 4: // Densidade vence o menor
                        vitoria_carta1 += (densidade1 < densidade2) ? 1 : 0;
                        vitoria_carta2 += (densidade2 < densidade1) ? 1 : 0;
                        break;
                    case 5: // PIB per capita
                        vitoria_carta1 += (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
                        vitoria_carta2 += (pib_per_capita2 > pib_per_capita1) ? 1 : 0;
                        break;
                    case 6: // Super poder
                        vitoria_carta1 += (super_poder1 > super_poder2) ? 1 : 0;
                        vitoria_carta2 += (super_poder2 > super_poder1) ? 1 : 0;
                        break;
                    default:
                        printf("Opção inválida...\n");
                        break;
                }

                switch (opcao2) {
                    case 1: // População
                        vitoria_carta1 += (populacao1 > populacao2) ? 1 : 0;
                        vitoria_carta2 += (populacao2 > populacao1) ? 1 : 0;
                        break;
                    case 2: // Área
                        vitoria_carta1 += (area1 > area2) ? 1 : 0;
                        vitoria_carta2 += (area2 > area1) ? 1 : 0;
                        break;
                    case 3: // PIB
                        vitoria_carta1 += (pib1 > pib2) ? 1 : 0;
                        vitoria_carta2 += (pib2 > pib1) ? 1 : 0;
                        break;
                    case 4: // Densidade vence o menor
                        vitoria_carta1 += (densidade1 < densidade2) ? 1 : 0;
                        vitoria_carta2 += (densidade2 < densidade1) ? 1 : 0;
                        break;
                    case 5: // PIB per capita
                        vitoria_carta1 += (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
                        vitoria_carta2 += (pib_per_capita2 > pib_per_capita1) ? 1 : 0;
                        break;
                    case 6: // Super poder
                        vitoria_carta1 += (super_poder1 > super_poder2) ? 1 : 0;
                        vitoria_carta2 += (super_poder2 > super_poder1) ? 1 : 0;
                        break;
                    default:
                        printf("Opção inválida...\n");
                        break;
                }

            } else if(num_atributos == 3) {
                // Comparação de todos os atributos
                printf("\nComparação de todos os atributos:\n");

                vitoria_carta1 += (populacao1 > populacao2) ? 1 : 0;
                vitoria_carta2 += (populacao2 > populacao1) ? 1 : 0;

                vitoria_carta1 += (area1 > area2) ? 1 : 0;
                vitoria_carta2 += (area2 > area1) ? 1 : 0;

                vitoria_carta1 += (pib1 > pib2) ? 1 : 0;
                vitoria_carta2 += (pib2 > pib1) ? 1 : 0;

                vitoria_carta1 += (densidade1 < densidade2) ? 1 : 0;
                vitoria_carta2 += (densidade2 < densidade1) ? 1 : 0;

                vitoria_carta1 += (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
                vitoria_carta2 += (pib_per_capita2 > pib_per_capita1) ? 1 : 0;

                vitoria_carta1 += (super_poder1 > super_poder2) ? 1 : 0;
                vitoria_carta2 += (super_poder2 > super_poder1) ? 1 : 0;
            } else {
                printf("Número inválido de atributos...\n");
            }

            // Resultado final
            printf("\nResultado da comparação:\n");
            if(vitoria_carta1 > vitoria_carta2) {
                printf("Carta 1 teve %d pontos/n", vitoria_carta1);
                printf("Carta 2 teve %d pontos/n", vitoria_carta2);
                printf("Carta 1 vence!\n");
            } else if(vitoria_carta2 > vitoria_carta1) {
                printf("Carta 1 teve %d pontos/n", vitoria_carta1);
                printf("Carta 2 teve %d pontos/n", vitoria_carta2);
                printf("Carta 2 vence!\n");
            } else {
                printf("Carta 1 teve %d pontos/n", vitoria_carta1);
                printf("Carta 2 teve %d pontos/n", vitoria_carta2);
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida...\n");
            break;
    }}

    return 0;
}
