#include <stdio.h>


int main() {
  

    //Variáveis carta 1

    char codigo[4], estado[20], nome[20];
    unsigned long int populacao;
    int pontos_turisticos;
    float area, pib, densidadepop, pibpercapita, super_poder;


    //Variáveis carta 2

    char codigo2[4], estado2[20], nome2[20];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, pib2, densidadepop2, pibpercapita2, super_poder2;

    
    
    // Dados de cadastro da primeira carta
     printf ("***BEM VINDO AO PROGRAMA DE CADASTRO DE CARTAS***\n");

    printf("Vamos cadastrar a primeira carta, digite o codigo da carta 1 Ex (AO1, AO2...): ");
    scanf("%s", codigo);

    printf("Digite o estado da carta 1: ");
    scanf("%s", estado);

    printf("Qual o nome da cidade da carta 1: ");
    scanf("%s", nome);

    printf("Qual a população da primeira carta: ");
    scanf("%lu", &populacao);


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
    scanf("%lu", &populacao2);


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


   // Adição da variável super poder

   super_poder = populacao + area + pib + pontos_turisticos + pibpercapita + (1 / densidadepop);
   super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pibpercapita2 + (1 / densidadepop2);


   

    // Impressão da carta 1
    
    printf ("\n ----- Carta 1 -----\n");
    printf ("Código: %s\n", codigo);
    printf ("Estado: %s\n", estado);
    printf ("Cidade: %s\n", nome);
    printf ("População: %lu\n", populacao);
    printf ("Área: %.2f km²\n", area);
    printf ("PIB: %.2f bilhões\n", pib);
    printf ("Pontos turísticos: %d\n", pontos_turisticos);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadepop);
    printf ("PIB per capita: %.2f\n", pibpercapita);
    printf("O Super Poder é: %f\n", super_poder);

    
    // Impressão da carta 2

    printf ("\n ----- Carta 2 -----\n");
    printf ("Código: %s\n", codigo2);
    printf ("Estado: %s\n", estado2);
    printf ("Cidade: %s\n", nome2);
    printf ("População: %lu\n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: %.2f bilhões\n", pib2);
    printf ("Pontos turísticos: %d\n", pontos_turisticos2);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
    printf ("PIB per capita: %.2f\n", pibpercapita2);
    printf("O Super Poder é: %f\n", super_poder2);



    // Comparação das Cartas

    printf("\n====COMPARAÇÃO DAS CARTAS====\n");

    if (populacao > populacao2){
        printf("POPULAÇÃO -- Carta 1 Venceu!\n");
    } else {
        printf("POPULAÇÃO -- Carta 2 Venceu!\n");
    }

    if (area > area2){
        printf("ÁREA -- Carta 1 Venceu!\n");
    } else {
        printf("ÁREA -- Carta 2 Venceu!\n");
    }

    if (pib > pib2){
        printf("PIB -- Carta 1 Venceu!\n");
    } else {
        printf("PIB -- Carta 2 Venceu!\n");
    }

    if (pontos_turisticos > pontos_turisticos2){
        printf("PONTOS TURÍSTICOS -- Carta 1 Venceu!\n");
    } else {
        printf("PONTOS TURÍSTICOS -- Carta 2 Venceu!\n");
    }

    if (densidadepop < densidadepop2){
        printf("DENSIDADE POPULACIONAL -- Carta 1 Venceu!\n");
    } else {
        printf("DENSIDADE POPULACIONAL -- Carta 2 Venceu!\n");
    }

    if (pibpercapita > pibpercapita2){
        printf("PIB PER CAPITA -- Carta 1 Venceu!\n");
    } else {
        printf("PIB PER CAPITA -- Carta 2 Venceu!\n");
    }

    if (super_poder > super_poder2){
        printf("SUPER PODER -- Carta 1 Venceu!\n");
    } else {
        printf("SUPER PODER -- Carta 2 Venceu!\n");
    }










    return 0;


}
