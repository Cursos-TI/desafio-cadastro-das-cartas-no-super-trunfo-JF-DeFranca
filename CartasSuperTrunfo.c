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



    // Escolha de Comparação das Cartas

    printf("\n====COMPARAÇÃO DAS CARTAS====\n");

    int escolhaComparacao;

    printf("====ESCOLHA O ATRIBUTO QUE DESEJA COMPARAR ENTRE AS CARTAS====\n");

    printf("1. CÓDIGO\n");
    printf("2. ESTADO\n");
    printf("3. NOME DA CIDADE\n");
    printf("4. POPULAÇÃO\n");
    printf("5. ÁREA\n");
    printf("6. PIB\n");
    printf("7. PONTOS TURÍSTICOS\n");
    printf("8. DENSIDADE POPULACIONAL\n");
    printf("9. PIB PER CAPITA\n");
    printf("10. SUPER PODER\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolhaComparacao);


    // Exibição do Resultado das Comparações


   switch (escolhaComparacao)
    {
    case 1:
     printf ("O Código da Carta 1 é: %s\n", codigo);
     printf ("O Código da Carta 2 é: %s\n", codigo2);
        break;

    case 2:
     printf ("O Estado da Carta 1 é: %s\n", estado);
     printf ("O Estado da Carta 2 é: %s\n", estado2);
        break;

    case 3:
     printf ("A Cidade da Carta 1 é: %s\n", nome); 
     printf ("A Cidade da Carta 2 é: %s\n", nome2);  
        break;

    case 4:
      if (populacao > populacao2)
      {
        printf ("Carta 1: %lu  Carta 2: %lu \n", populacao, populacao2);
        printf ("A População da Carta 1 Ganhou !\n");
      } else if (populacao < populacao2)
      {
        printf ("Carta 1: %lu  Carta 2: %lu \n", populacao, populacao2);
        printf ("A População da Carta 2 Ganhou !\n");
      } else {
        printf ("HOUVE UM EMPATE!\n");
      }
        break;

    case 5:
      if (area > area2)
      {
        printf ("Carta 1: %.2f  Carta 2: %.2f \n", area, area2);
        printf ("A Área da Carta 1 Ganhou !\n");
      } else if (area < area2)
      {
        printf ("Carta 1: %.2f  Carta 2: %.2f \n", area, area2);
        printf ("A Área da cidade 2 Ganhou !\n");
      } else {
        printf ("HOUVE UM EMPATE!\n");
      }
        break;

    case 6:
      if (pib > pib2)
      {
        printf ("Carta 1: %.2f  Carta 2: %.2f \n", pib, pib2);
        printf ("O PIB da Carta 1 Ganhou !\n");
      } else if (pib < pib2)
      {
        printf ("Carta 1: %.2f  Carta 2: %.2f \n", pib, pib2);
        printf ("O PIB da Carta 2 Ganhou !\n");
      } else {
        printf ("Carta 1: %.2f  Carta 2: %.2f \n", pib, pib2);
        printf ("HOUVE UM EMPATE!\n");
      }
        break;

    case 7:
      if (pontos_turisticos > pontos_turisticos2)
      {
        printf ("Carta 1: %d  Carta 2: %d \n", pontos_turisticos, pontos_turisticos2);
        printf ("Os Pontos Turísticos da Carta 1 Ganharam !\n");
      } else if (pontos_turisticos < pontos_turisticos2)
      {
        printf ("Carta 1: %d  Carta 2: %d \n", pontos_turisticos, pontos_turisticos2);
        printf ("Os Pontos Turísticos da Carta 2 Ganharam !\n");
      } else {
        printf ("Carta 1: %d  Carta 2: %d \n", pontos_turisticos, pontos_turisticos2);
        printf ("HOUVE UM EMPATE!\n");
      }
        break;

    case 8:
      if (densidadepop2 > densidadepop)
      {
        printf ("Carta 1: %.2f  Carta 2: %.2f \n", densidadepop, densidadepop2);
        printf ("A Densidade Populacional da Carta 1 Ganhou !\n");
      } else if (densidadepop2 < densidadepop)
      {
        printf ("Carta 1: %.2f  Carta 2: %.2f \n", densidadepop, densidadepop2);
        printf ("A Densidade Populacional da Carta 2 Ganhou !\n");
      } else {
        printf ("Carta 1: %.2f  Carta 2: %.2f \n", densidadepop, densidadepop2);
        printf ("HOUVE UM EMPATE!\n");
      }
        break;

    case 9:
      if (pibpercapita > pibpercapita2)
      {
        printf ("Carta 1: %.2f  Carta 2: %.2f \n", pibpercapita, pibpercapita2);
        printf ("O PIB per Capita da Carta 1 Ganhou !\n");
      } else if (pibpercapita < pibpercapita2)
      {
        printf ("Carta 1: %.2f  Carta 2: %.2f \n", pibpercapita, pibpercapita2);
        printf ("O PIB per Capita da Carta 2 Ganhou !\n");
      } else {
        printf ("Carta 1: %.2f  Carta 2: %.2f \n", pibpercapita, pibpercapita2);
        printf ("HOUVE UM EMPATE!\n");
      }
        break;

    case 10:
      if (super_poder > super_poder2)
      {
        printf ("Carta 1: %f  Carta 2: %f \n", super_poder, super_poder2);
        printf ("O Super Poder da Carta 1 Ganhou !\n");
      } else if (super_poder < super_poder2)
      {
        printf ("Carta 1: %f  Carta 2: %f \n", super_poder, super_poder2);
        printf ("O Super Poder da Carta 2 Ganhou !\n");
      } else {
        printf ("Carta 1: %f  Carta 2: %f \n", super_poder, super_poder2);
        printf ("HOUVE UM EMPATE!\n");
      }
        break;
   
    default:
       printf("OPÇÃO INVÁLIDA!\n");
        break;
    }








    
    return 0;


}
