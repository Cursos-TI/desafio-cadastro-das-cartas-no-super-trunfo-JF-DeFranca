#include <stdio.h>


int main() {
  
    //Variáveis carta 1

    char codigo[4];
    char nome[20];
    int populacao;
    float area;
    float pib; 
    int pontos_turisticos;

    //Variáveis carta 2

    char codigo2[4];
    char nome2[20];
    int populacao2;
    float area2;
    float pib2; 
    int pontos_turisticos2;

    
    
    // Dados de cadastro da primeira carta
    

    printf("Vamos cadastrar a primeira carta, digite o codigo da carta 1: ");
    scanf("%s", &codigo);

    printf("Qual o nome da cidade da carta 1: ");
    scanf("%s", &nome);

    printf("Qual a população da primeira carta: ");
    scanf("%d", &populacao);


    printf("Qual a area da primeira carta: ");
    scanf("%f", &area);


    printf("Qual o pib da primeira carta: ");
    scanf("%f", &pib);


    printf("Qual a quantidade de pontos turisticos da primeira carta: ");
    scanf("%d", &pontos_turisticos);

   
    // Dados de cadastro da segunda carta

    
    printf("Vamos cadastrar a segunda carta, digite o codigo da carta 2: ");
    scanf("%s", &codigo2);

    printf("Qual o nome da cidade da carta 2: ");
    scanf("%s", &nome2);

    printf("Qual a população da segunda carta: ");
    scanf("%d", &populacao2);


    printf("Qual a area da segunda carta: ");
    scanf("%f", &area2);


    printf("Qual o pib da segunda carta: ");
    scanf("%f", &pib2);


    printf("Qual a quantidade de pontos turisticos da segunda carta: ");
    scanf("%d", &pontos_turisticos2);



    // Impressão da carta 1

    printf("Carta 1\n");

    printf("Codigo da carta 1: %s\n", codigo);

    printf("Cidade da carta 1 %s\n", nome);

    printf("Populacao da carta 1: %.d\n", populacao);

    printf("Area da carta 1: %f\n", area);

    printf("PIB da carta 1: %.2f\n", pib);

    printf("Pontos turisticos da carta 1: %d\n", pontos_turisticos);


    
    // Impressão da carta 2

    printf("Carta 2\n");

    printf("Codigo da carta 2 %s\n", codigo2);

    printf("Cidade da carta 2 %s\n", nome2);

    printf("Populacao da carta 2: %d\n", populacao2);

    printf("Area da carta 2: %f\n", area2);

    printf("PIB da carta 2: %.2f\n", pib2);

    printf("Pontos turisticos da carta 2: %d\n", pontos_turisticos2);




    return 0;
}
