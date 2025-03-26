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

    printf("Digite o estado da carta 2: ");
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

    int escolhaComparacao1, escolhaComparacao2;

    printf("====ESCOLHA O PRIMEIRO ATRIBUTO QUE DESEJA COMPARAR ENTRE AS CARTAS====\n");

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
    scanf("%d", &escolhaComparacao1);


    printf("====ESCOLHA O SEGUNDO ATRIBUTO QUE DESEJA COMPARAR ENTRE AS CARTAS====\n");

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
    scanf("%d", &escolhaComparacao2);



    if (escolhaComparacao1 == escolhaComparacao2) {
      printf("Você escolheu o mesmo atributo!"); 
  } else {
      // Comparações para o primeiro atributo
      switch (escolhaComparacao1) {
          case 1:
              printf ("VOCÊ ESCOLHEU A OPÇÃO CÓDIGO\n");
              printf ("O Código da Carta 1 é: %s\n", codigo);
              printf ("O Código da Carta 2 é: %s\n", codigo2);     
              break;
          case 2:
              printf ("VOCÊ ESCOLHEU A OPÇÃO ESTADO\n");
              printf ("O Estado da Carta 1 é: %s\n", estado);
              printf ("O Estado da Carta 2 é: %s\n", estado2);
              break;
          case 3:
              printf ("VOCÊ ESCOLHEU A OPÇÃO CIDADE\n");
              printf ("A Cidade da Carta 1 é: %s\n", nome); 
              printf ("A Cidade da Carta 2 é: %s\n", nome2); 
              break;
          case 4:
              printf ("VOCÊ ESCOLHEU A OPÇÃO POPULAÇÃO\n");
              escolhaComparacao1 = populacao > populacao2 ? 1 : 0; 
              break;
          case 5:
              printf ("VOCÊ ESCOLHEU A OPÇÃO ÁREA\n");
              escolhaComparacao1 = area > area2 ? 1 : 0; 
              break;
          case 6:
              printf ("VOCÊ ESCOLHEU A OPÇÃO PIB\n");
              escolhaComparacao1 = pib > pib2 ? 1 : 0; 
              break;
          case 7:
              printf ("VOCÊ ESCOLHEU A OPÇÃO PONTOS TURÍSTICOS\n");
              escolhaComparacao1 = pontos_turisticos > pontos_turisticos2 ? 1 : 0;
              break;
          case 8:
              printf ("VOCÊ ESCOLHEU A OPÇÃO DENSIDADE POPULACIONAL\n");
              escolhaComparacao1 = densidadepop > densidadepop2 ? 1 : 0;
              break;
          case 9:
              printf ("VOCÊ ESCOLHEU A OPÇÃO PIB PER CAPITA\n");
              escolhaComparacao1 = pibpercapita > pibpercapita2 ? 1 : 0;
              break;
          case 10:
              printf ("VOCÊ ESCOLHEU A OPÇÃO SUPER PODER\n");
              escolhaComparacao1 = super_poder > super_poder2 ? 1 : 0; 
              break;
          default:
              printf ("OPÇÃO INVÁLIDA\n");
              break;
      }

      // Comparações para o segundo atributo
      switch (escolhaComparacao2) {
          case 1:
              printf ("VOCÊ ESCOLHEU A OPÇÃO CÓDIGO\n");
              printf ("O Código da Carta 1 é: %s\n", codigo);
              printf ("O Código da Carta 2 é: %s\n", codigo2);     
              break;
          case 2:
              printf ("VOCÊ ESCOLHEU A OPÇÃO ESTADO\n");
              printf ("O Estado da Carta 1 é: %s\n", estado);
              printf ("O Estado da Carta 2 é: %s\n", estado2);
              break;
          case 3:
              printf ("VOCÊ ESCOLHEU A OPÇÃO CIDADE\n");
              printf ("A Cidade da Carta 1 é: %s\n", nome); 
              printf ("A Cidade da Carta 2 é: %s\n", nome2); 
              break;
          case 4:
              printf ("VOCÊ ESCOLHEU A OPÇÃO POPULAÇÃO\n");
              escolhaComparacao2 = populacao > populacao2 ? 1 : 0; 
              break;
          case 5:
              printf ("VOCÊ ESCOLHEU A OPÇÃO ÁREA\n");
              escolhaComparacao2 = area > area2 ? 1 : 0; 
              break;
          case 6:
              printf ("VOCÊ ESCOLHEU A OPÇÃO PIB\n");
              escolhaComparacao2 = pib > pib2 ? 1 : 0; 
              break;
          case 7:
              printf ("VOCÊ ESCOLHEU A OPÇÃO PONTOS TURÍSTICOS\n");
              escolhaComparacao2 = pontos_turisticos > pontos_turisticos2 ? 1 : 0;
              break;
          case 8:
              printf ("VOCÊ ESCOLHEU A OPÇÃO DENSIDADE POPULACIONAL\n");
              escolhaComparacao2 = densidadepop > densidadepop2 ? 1 : 0;
              break;
          case 9:
              printf ("VOCÊ ESCOLHEU A OPÇÃO PIB PER CAPITA\n");
              escolhaComparacao2 = pibpercapita > pibpercapita2 ? 1 : 0;
              break;
          case 10:
              printf ("VOCÊ ESCOLHEU A OPÇÃO SUPER PODER\n");
              escolhaComparacao2 = super_poder > super_poder2 ? 1 : 0; 
              break;
          default:
              printf ("OPÇÃO INVÁLIDA\n");
              break;
      }

  // Resultados da comparação
  if (escolhaComparacao1 && escolhaComparacao2) { 
    printf ("A Carta 1 Venceu as Duas Comparações\n");
} else if (!escolhaComparacao1 && !escolhaComparacao2) {
    printf ("A Carta 2 Venceu as Duas Comparações\n");     
} else {
    printf("Cada carta venceu uma comparação!\n");
}
}

return 0;
}

