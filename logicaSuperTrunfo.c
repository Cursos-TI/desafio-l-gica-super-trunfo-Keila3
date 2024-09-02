#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Nivel novato

int main() {
    //Difinição de variaveis
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
         int vitoria_carta1 = 0, vitoria_carta2 =0;
        

        // Cadastro da Carta carta 1:
        printf("Cadastre as informações da carta 1:\n");
        
        //Cadastro do codigo da carta
        printf("Siga as instruções, e digite o código da carta:\n");
        printf("Digite uma letra de A a H, para representar o estado:\n");
        scanf(" %c", &estado1);
        printf("Digite um número de 1 a 4, para representar a cidade:\n");
        scanf("%d", &Codigo_cidade1);

        //Cadastro nome da cidade 1
        printf("Digite o nome da cidade 1:\n");
        scanf("%s", Nome_cidade1);

        //cadastro população
        printf("Digite a população:\n");
        scanf("%d", &populacao1);

        //Cadastro de Área
        printf("Digite a Área em km²\n");
        scanf("%f", &area1);

        //Cadastro PIB
        printf("Digite o PIB em bilhões\n");
        scanf("%f", &pib1);

        // Cadastro Número de pontos turisticos
        printf("Digite o número de pontos turísticos:\n");
        scanf("%d", &pontos_turistico1);

        // Calculo densidade populacional
        densidade1 = (float) populacao1 / area1;
       
        //Calculo PIB per capita
        pib_per_capita1 = (float) pib1 / populacao1;

         // Cadastro da Carta carta 2:
        printf("Cadastre as informações da carta 2:\n");
        
        //Cadastro do codigo da carta
        printf("Siga as instruções, e digite o código da carta:\n");
        printf("Digite uma letra de A a H, para representar o estado:\n");
        scanf(" %c", &estado2);
        printf("Digite um número de 1 a 4, para representar a cidade:\n");
        scanf("%d", &Codigo_cidade2);

        //Cadastro nome da cidade 2
        printf("Digite o nome da cidade 2:\n");
        scanf("%s", Nome_cidade2);


        //cadastro população
        printf("Digite a população:\n");
        scanf("%d", &populacao2);

        //Cadastro de Área
        printf("Digite a Área em km²\n");
        scanf("%f", &area2);

        //Cadastro PIB
        printf("Digite o PIB em bilhões\n");
        scanf("%f", &pib2);

        // Cadastro Número de pontos turisticos
        printf("Digite o número de pontos turísticos:\n");
        scanf("%d", &pontos_turistico2);

        // Calculo densidade populacional
        densidade2 = (float) populacao2 / area2;
       
        //Calculo PIB per capita
        pib_per_capita2 = (float) pib2 / populacao2;

       // Exibição dos Dados das Cartas 1:
        printf("\nDados cadastrado da carta 1:\n");
        printf("Código da carta: %c%02d\n", estado1, Codigo_cidade1);
        printf("Nome da cidade 1: %s\n", Nome_cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("Densidade populacional: %.2f\n", densidade1);
        printf("PIB: %.2f Bilhões\n", pib1);
        printf("PIB per capita: %.6f\n", pib_per_capita1);
        printf("Número de pontos túristicos: %d\n", pontos_turistico1);

        // Exibição dos Dados das Cartas 2:
        printf("\nDados cadastrado da carta 2:\n");
        printf("Código da carta: %c%02d\n", estado2, Codigo_cidade2);
        printf("Nome da cidade 2: %s\n");
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("Densidade populacional: %.2f\n", densidade2);
        printf("PIB: %.2f Bilhões\n", pib2);
        printf("PIB per capita: %.6f\n", pib_per_capita2);
        printf("Número de pontos túristicos: %d\n", pontos_turistico2);

        //calculo super poder da carta
        super_poder1 = area1 + populacao1 + pib1 + pontos_turistico1;
        super_poder2 = area2 + populacao2 + pib2 + pontos_turistico2;

        //comparação densidade: a menor vence
        if(densidade1 < densidade2){
            printf("Carta 1 vence com menor densidade\n");
            vitoria_carta1++;
        } else if (densidade2 < densidade1){
            printf("Carta 2 vence com menor densidade\n");
            vitoria_carta2++;
        } else{
            printf("Carta 1 e 2 empatou\n");}
            
        

        //Comparação população(maior vence)
        if(populacao1 > populacao2){
            printf("Carta 1 vence pela maior população\n");
            vitoria_carta1++;
        }else if (populacao2 > populacao1){
            printf("Carta 2 vence pela maior população\n");
            vitoria_carta2++;
        } else{
            printf("Carta 1 e 2 empatou\n");
        }

        //Comparação area(maior vence)
        if(area1 > area2){
            printf("Carta 1 vence pela maior area\n");
            vitoria_carta1++;
        }else if (area2 > area1){
            printf("Carta 2 vence pela maior area\n");
            vitoria_carta2++;
        } else{
            printf("Carta 1 e 2 empatou\n");
        }

        //Comparação pib(maior vence)
        if(pib1 > pib2){
            printf("Carta 1 vence pelo maior PIB\n");
            vitoria_carta1++;
        }else if (pib2 > pib1){
            printf("Carta 2 vence pelo maior PIB\n");
            vitoria_carta2++;
        } else{
            printf("Carta 1 e 2 empatou\n");
        }

        //Comparação PIB per capita(maior vence)
        if(pib_per_capita1 > pib_per_capita2){
            printf("Carta 1 vence pelo maior PIB per capita\n");
            vitoria_carta1++;
        }else if (pib_per_capita2 > pib_per_capita1){
            printf("Carta 2 vence pelo maior PIB per capita\n");
            vitoria_carta2++;
        } else{
            printf("Carta 1 e 2 empatou\n");
        }

        //Comparação Super poder(maior vence)
        if(super_poder1 > super_poder2){
            printf("Carta 1 vence pelo maior Super Poder\n");
            vitoria_carta1++;
        }else if (super_poder2 > super_poder1){
            printf("Carta 2 vence pelo maior Super Poder\n");
            vitoria_carta2++;
        } else{
            printf("Carta 1 e 2 empatou\n");
        }

       

        //exibição de resultados final
        printf("Resultado da Carta vencedora:\n");
        printf("Carta 1 venceu %d vezes\n", vitoria_carta1);
        printf("Carta 2 venceu %d vezes\n", vitoria_carta2);

        //Quem ganhou?
        if(vitoria_carta1 > vitoria_carta2){
            printf("Parabens carta 1 venceu!\n");
        } else if(vitoria_carta2 > vitoria_carta1){
            printf("Parabens carta 2 venceu!\n");
        } else{
            printf("AS carta 1 e 2 empatou!\n");
        }
            
            
            
        

        


    return 0;
}