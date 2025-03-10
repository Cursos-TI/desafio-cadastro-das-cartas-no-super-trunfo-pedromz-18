#include <stdio.h>

int main (){
    char estado1[20], nome1[50], codigo1[10]; //definindo as variáveis que tem caracteres e seus limites, como o nome do estado, nome da cidade e o código da carta da cidade 1
    int turistico1; //definindo em números a quantidade de pontos turísticos da cidade 1
    float pib1, area1, populacao1; //definindo em números mais precisos a quantidade do pib, área e população da cidade 1

        //função printf será utilizada para poder imprimir no terminal a pergunta
        //função scanf será utilizada para registrar a resposta do usuário sobre determinada pergunta

    printf("Digite o Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigo1);

    printf("Digita o Nome da Cidade: \n");
    scanf("%s", &nome1);

    printf("Digite a População da Cidade: \n");
    scanf("%f", &populacao1);

    printf("Área em KM²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turistico1);
        printf("\n");
        printf("CARTA 1 \n");
        printf("\n");
        printf("Estado: %s \n", estado1);
        printf("Código da Carta: %s \n", codigo1);
        printf("Nome da Cidade: %s \n", nome1);
        printf("População: %0.0f \n", populacao1);
        printf("Área KM²: %0.0f \n", area1);
        printf("PIB: %0.1f \n", pib1);
        printf("Pontos Turísticos: %d \n\n", turistico1);
        ("\n");
            //a função printf está sendo utilizada para imprimir todas as informações da carta 1

        char estado2[20], nome2[50], codigo2[10]; //definindo as variáveis que tem caracteres e seus limites, como o nome do estado, nome da cidade e o código da carta da cidade 2
        int turistico2; //definindo em números a quantidade de pontos turísticos da cidade 1
        float pib2, area2, populacao2; //definindo em números mais precisos a quantidade do pib, área e população da cidade 1

        //função printf será utilizada para poder imprimir no terminal a pergunta
        //função scanf será utilizada para registrar a resposta do usuário sobre determinada pergunta


        printf("Digite o Estado: \n");
        scanf("%s", &estado2);
    
        printf("Digite o Código da Carta: \n");
        scanf("%s", &codigo2);
    
        printf("Digita o Nome da Cidade: \n");
        scanf("%s", &nome2);
    
        printf("Digite a População da Cidade: \n");
        scanf("%f", &populacao2);
    
        printf("Área em KM²: \n");
        scanf("%f", &area2);
    
        printf("Digite o PIB: \n");
        scanf("%f", &pib2);
    
        printf("Número de Pontos Turísticos: \n");
        scanf("%d", &turistico2);
            printf("\n");
            printf("CARTA 2 \n");
            printf("Estado: %s \n", estado2);
            printf("Código da Carta: %s \n", codigo2);
            printf("Nome da Cidade: %s \n", nome2);
            printf("População: %0.0f \n", populacao2);
            printf("Área KM²: %0.0f \n", area2);
            printf("PIB: %0.1f \n", pib2);
            printf("Pontos Turísticos: %d \n", turistico2);
            printf("\n");
    
            //a função printf está sendo utilizada para imprimir todas as informações da carta 2

    return 0; //sinalizando o fim do programa

}