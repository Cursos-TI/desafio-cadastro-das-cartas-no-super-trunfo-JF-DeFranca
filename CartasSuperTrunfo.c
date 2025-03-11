#include <stdio.h>


int main() {
  

    //Variáveis carta 1

    char codigo[4], estado[20], nome[20];
    int populacao, pontos_turisticos;
    float area, pib, densidadepop, pibpercapita;


    //Variáveis carta 2

    char codigo2[4], estado2[20], nome2[20];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidadepop2, pibpercapita2;

    
    
    // Dados de cadastro da primeira carta
     printf ("***BEM VINDO AO PROGRAMA DE CADASTRO DE CARTAS***\n");

    printf("Vamos cadastrar a primeira carta, digite o codigo da carta 1 Ex (AO1, AO2...): ");
    scanf("%s", codigo);

    printf("Digite o estado da carta 1: ");
    scanf("%s", estado);

    printf("Qual o nome da cidade da carta 1: ");
    scanf("%s", nome);

    printf("Qual a população da primeira carta: ");
    scanf("%d", &populacao);


    printf("Qual a area da primeira carta: ");
    scanf("%f", &area);


    printf("Qual o pib da primeira carta: ");
    scanf("%f", &pib);


    printf("Qual a quantidade de pontos turisticos da primeira carta: ");
    scanf("%d", &pontos_turisticos);

   
    // Dados de cadastro da segunda carta

    
    printf("Vamos cadastrar a segunda carta, digite o codigo da carta 2 Ex (AO1, AO2...): ");
    scanf("%s", codigo2);

    printf("Digite o estado da carta 1: ");
    scanf("%s", estado2);

    printf("Qual o nome da cidade da carta 2: ");
    scanf("%s", nome2);

    printf("Qual a população da segunda carta: ");
    scanf("%d", &populacao2);


    printf("Qual a area da segunda carta: ");
    scanf("%f", &area2);


    printf("Qual o pib da segunda carta: ");
    scanf("%f", &pib2);


    printf("Qual a quantidade de pontos turisticos da segunda carta: ");
    scanf("%d", &pontos_turisticos2);



   // Operações Matemáticas para cálculo da Média



   densidadepop = populacao / area;
   pibpercapita = pib / populacao;


   densidadepop2 = populacao2 / area2;
   pibpercapita2 = pib2 / populacao2;

   

    // Impressão da carta 1

    
    printf ("\n ----- Carta 1 -----\n");
    printf ("Código: %s\n", codigo);
    printf ("Estado: %s\n", estado);
    printf ("Cidade: %s\n", nome);
    printf ("População: %d\n", populacao);
    printf ("Área: %.2f km²\n", area);
    printf ("PIB: %.2f bilhões\n", pib);
    printf ("Pontos turísticos: %d\n", pontos_turisticos);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadepop);
    printf ("PIB per capita: %.2f\n", pibpercapita);


    
    // Impressão da carta 2

    printf ("\n ----- Carta 2 -----\n");
    printf ("Código: %s\n", codigo2);
    printf ("Estado: %s\n", estado2);
    printf ("Cidade: %s\n", nome2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: %.2f bilhões\n", pib2);
    printf ("Pontos turísticos: %d\n", pontos_turisticos2);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
    printf ("PIB per capita: %.2f\n", pibpercapita2);




    return 0;
}
