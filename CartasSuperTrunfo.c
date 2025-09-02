#include <stdio.h>

int main (){
    char estado1[20], nome1[50], codigo1[10]; //definindo as variáveis que tem caracteres e seus limites, como o nome do estado, nome da cidade e o código da carta da cidade 1
    int turistico1; //definindo em números a quantidade de pontos turísticos da cidade 1
    double area1, pib1, densidade1, pibpercap1, superpoder1; //definindo em números mais precisos a quantidade do pib, área e população da cidade 1 
    unsigned long int populacao1;
        //função printf será utilizada para poder imprimir no terminal a pergunta
        //função scanf será utilizada para registrar a resposta do usuário sobre determinada pergunta

    printf("Digite o Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigo1);

    printf("Digita o Nome da Cidade: \n");
    scanf("%s", &nome1);

    printf("Digite a População da Cidade: \n");
    scanf("%lu", &populacao1);

    printf("Área em KM²: \n");
    scanf("%lf", &area1);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turistico1);


        printf("\n");
        printf("**CARTA 1**");
        printf("\n");
        printf("Estado: %s \n", estado1);
        printf("Código da Carta: %s \n", codigo1);
        printf("Nome da Cidade: %s \n", nome1);
        printf("População: %lu \n", populacao1);
        printf("Área KM²: %.0lfkm² \n", area1);
        printf("PIB: R$%.0lf \n", pib1);
        printf("Pontos Turísticos: %d \n", turistico1);
            densidade1 = (float) populacao1 / area1;
        printf("Densidade Populacional: %.1f hab/km²\n", densidade1);
            pibpercap1 = (float) pib1 / populacao1;
        printf("PIB per Capita: %.2f reais \n", pibpercap1); 
            superpoder1 = (float) populacao1 + area1 + pib1 + turistico1 + (1 / densidade1);
        printf("Super Poder: %.0f \n\n", superpoder1);

        
        ("\n");
           
    char estado2[20], nome2[50], codigo2[10]; //definindo as variáveis que tem caracteres e seus limites, como o nome do estado, nome da cidade e o código da carta da cidade 1
    int turistico2; //definindo em números a quantidade de pontos turísticos da cidade 1
    double area2, pib2, densidade2, pibpercap2, superpoder2; //definindo em números mais precisos a quantidade do pib, área e população da cidade 1 
    unsigned long int populacao2;
        //função printf será utilizada para poder imprimir no terminal a pergunta
        //função scanf será utilizada para registrar a resposta do usuário sobre determinada pergunta

    printf("Digite o Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigo2);

    printf("Digita o Nome da Cidade: \n");
    scanf("%s", &nome2);

    printf("Digite a População da Cidade: \n");
    scanf("%lu", &populacao2);

    printf("Área em KM²: \n");
    scanf("%lf", &area2);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turistico2);


           printf("\n");
        printf("**CARTA 2**");
        printf("\n");
        printf("Estado: %s \n", estado2);
        printf("Código da Carta: %s \n", codigo2);
        printf("Nome da Cidade: %s \n", nome2);
        printf("População: %lu \n", populacao2);
        printf("Área KM²: %.0lfkm² \n", area2);
        printf("PIB: R$%.0lf \n", pib2);
        printf("Pontos Turísticos: %d \n", turistico2);
            densidade2 = (float) populacao2 / area2;
        printf("Densidade Populacional: %.1f hab/km²\n", densidade2);
            pibpercap2 = (float) pib2 / populacao2;
        printf("PIB per Capita: %.2f reais \n", pibpercap2); 
            superpoder2 = (float) populacao2 + area2 + pib2 + turistico2 + (1 / densidade2);
        printf("Super Poder: %.0f \n\n\n", superpoder2);


        printf("**COMPARAÇÃO DAS CARTAS**\n");
        printf("*CARTA1 = 1 & CARTA2 = 0*\n\n");
        printf("População: %d\n", populacao1 >= populacao2);
        printf("Área: %d\n", area1 >= area2);
        printf("PIB: %d\n", pib1 >= pib2);
        printf("Números de pontos turísticos: %d\n", turistico1 >= turistico2);
        printf("PIB per Capta: %d\n", pibpercap1 >= pibpercap2);
        printf("Densidade Populacional: %d\n", densidade1 >= densidade2);
        printf ("Super Poder: %d\n\n", superpoder1 >= superpoder2);

        printf("COMPARAÇÃO DE CARTAS (ATRIBUTO: PIB)\n");

        printf("Carta 1 - %s - PIB: R$%.0lf\n", nome1, pib1);
        printf("Carta 2 - %s - PIB: R$%.0lf\n", nome2, pib2);

        if(area1 > area2){
            printf("A carta 1 venceu!\n");
        }
        else{
            printf("A carta 2 venceu!\n");
        }
        return 0;
    }
