#include <stdio.h>
#include <string.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//Teste Náiady Fernandes

int main()
{


    // Defina variáveis separadas para cada atributo da cidade.
    char Estado1, Estado2;
    char codigoCarta1[10];
    char codigoCarta2[10];
    char nomeCidade1 [50];
    char nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    double area1, area2;
    double pib1, pib2;
    double pib_percapita1, pib_percapita2;
    double densidade1, densidade2;
    int numPontosTuristicos1, numPontosTuristicos2, escolhaDeAtributo;
    double superPoder1, superPoder2;

    // Tema do jogo:

    printf ("Desafio Super Trunfo-Paises \n");
    // Cadastrando as cartas: printf para indicar qual informação o usuário deve digitar, e o scanf para ler a informação digitada.
    printf("CARTA 1 \n");
    printf("Estado: (A-H) ");
    scanf("%c", &Estado1);
    while(getchar() != '\n'); // limpa buffer
    printf("Codigo da carta: (Letra do Estado + 0 + 1, ou 2, ou 3, ou 4: ");
    scanf("%s", codigoCarta1);
    while(getchar() != '\n'); // limpa buffer
    printf("Nome da cidade: ");
    fgets (nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;
    printf("Populacao: (Sem . ou ,) ");
    scanf("%lu", &populacao1);
    printf("Area em KM: ");
    scanf("%lf", &area1);
    printf("PIB: ");
    scanf("%lf", &pib1);
    printf("Numeros de Pontos Turisticos: ");
    scanf("%d", &numPontosTuristicos1);
    while(getchar() != '\n'); // limpa buffer


// Vamos agora para a carta 2
    printf("CARTA 2 \n");
    printf("Estado: (A-H):  ");
    scanf("%c", &Estado2);
    while(getchar() != '\n'); // limpa buffer

    printf("Codigo da carta: (Letra do Estado + 0 + 1, ou 2, ou 3, ou 4: ");
    scanf("%s", codigoCarta2);
    while(getchar() != '\n'); // limpa buffer
    printf("Nome da cidade: ");
    fgets (nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;
    printf("Populacao: (Sem . ou ,) ");
    scanf("%lu", &populacao2);
    printf("Area em KM: ");
    scanf("%lf", &area2);
    printf("PIB: ");
    scanf("%lf", &pib2);
    printf("Numeros de Pontos Turisticos: ");
    scanf("%d", &numPontosTuristicos2);

    printf("\nCARTA 1: \n ");
    printf("Estado: %c \n", Estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2lf km² \n", area1);
    printf("PIB: %.2lf bilhoes de reais \n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", numPontosTuristicos1);
    densidade1= (double) populacao1/area1;
    pib_percapita1=  (pib1 * 1000000000) / populacao1;
    printf("Densidade Populacional= %.2lf hab/km² \n", densidade1);
    printf("PIB per capita= %.2lf reais \n", pib_percapita1);
    superPoder1= (double) populacao1 + area1 + pib1+ (double) numPontosTuristicos1+ pib_percapita1 + (1.0/densidade1);
    printf("SUPER PODER: %.2lf\n", superPoder1);

    printf("\nCARTA 2: \n ");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2lf km² \n", area2);
    printf("PIB: %.2lf bilhoes de reais \n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", numPontosTuristicos2);
    densidade2= (double) populacao2/area2;
    pib_percapita2=  (pib2 * 1000000000) /populacao2;
    printf("Densidade Populacional= %.2lf hab/km² \n", densidade2);
    printf("PIB per capita= %.2lf reais \n", pib_percapita2);
    superPoder2= (double) populacao2 + area2 + pib2+ (double) numPontosTuristicos2+ pib_percapita2 + (1.0/ densidade2);
    printf("SUPER PODER: %.2lf\n", superPoder2);
    //comparação das cartas
    //obs:(condição) ? valor_se_verdadeiro : valor_se_falso;

    printf("\n===== COMPARACAO DE CARTAS =====\n\n");
    printf ("Escolha um atributo para comparação, conforme as opções abaixo: \n");
    printf("1. POPULACAO \n");
    printf("2. AREA \n");
    printf("3. PIB \n");
    printf("4. NUMERO DE PONTOS TURISTICOS \n");
    printf("5. DENSIDADE POPULACIONAL \n");
    printf("6. PIB PER CAPITA \n");
    printf("7. SUPER PODER \n");
    printf(" \n ");
    printf("Digite um numero: \n");
    scanf("%d", &escolhaDeAtributo);

    switch (escolhaDeAtributo){
    case 1:
     if (populacao1>populacao2){
     printf("Populacao carta 1: %lu / Populacao carta 2: %lu \n", populacao1, populacao2);
        printf("CARTA 1 VENCEU \n");
        printf("Cidade: %s\n", nomeCidade1);
        printf ("Atributo escolhido para comparacao: Populacao \n");

     }else if (populacao2>populacao1) {
         printf("Populacao carta 1: %lu / Populacao carta 2: %lu \n", populacao1, populacao2);
      printf("CARTA 2 VENCEU \n");
       printf("Cidade: %s\n", nomeCidade2);
        printf ("Atributo escolhido para comparacao: Populacao \n");
     }else {
         printf("Populacao carta 1: %lu / Populacao carta 2: %lu \n", populacao1, populacao2);
      printf("HOUVE EMPATE \n");
     }
     break;
    case 2:
       if (area1>area2){
            printf("Area carta 1: %lf - Area carta 2: %lf \n", area1, area2);
        printf("CARTA 1 VENCEU \n");
        printf("Cidade: %s\n", nomeCidade1);
        printf ("Atributo escolhido para comparacao: AREA \n");

     }else if (area2>area1) {
         printf("Area carta 1: %lf - Area carta 2: %lf \n", area1, area2);
      printf("CARTA 2 VENCEU \n");
       printf("Cidade: %s\n", nomeCidade2);
        printf ("Atributo escolhido para comparacao: area \n");
     }else {
         printf("Area carta 1: %lf - Area carta 2: %lf \n", area1, area2);
      printf("HOUVE EMPATE \n");
     }
     break;

    case 3:
     if (pib1>pib2){
            printf("Pib carta 1: %lf - Pib carta 2: %lf \n", pib1, pib2);
        printf("CARTA 1 VENCEU \n");
        printf("Cidade: %s\n", nomeCidade1);
        printf ("Atributo escolhido para comparacao: PIB \n");

     }else if (pib2>pib1) {
          printf("Pib carta 1: %lf - Pib carta 2: %lf \n", pib1, pib2);
      printf("CARTA 2 VENCEU \n");
       printf("Cidade: %s\n", nomeCidade2);
        printf ("Atributo escolhido para comparacao: PIB \n");
     }else {
          printf("Pib carta 1: %lf - Pib carta 2: %lf \n", pib1, pib2);
      printf("HOUVE EMPATE \n");
     }
     break;
    case 4:
        if (numPontosTuristicos1> numPontosTuristicos2){
        printf("Numero de Pontos Turisticos carta1: %d - Numero de pontos Turisticos carta 2: %d \n", numPontosTuristicos1, numPontosTuristicos2);
        printf("CARTA 1 VENCEU \n");
        printf("Cidade: %s\n", nomeCidade1);
        printf ("Atributo escolhido para comparacao: NUMERO DE PONTOS TURISTICOS \n");

     }else if (numPontosTuristicos2>numPontosTuristicos1) {
          printf("Numero de Pontos Turisticos carta1: %d - Numero de pontos Turisticos carta 2: %d \n", numPontosTuristicos1, numPontosTuristicos2);
      printf("CARTA 2 VENCEU \n");
       printf("Cidade: %s\n", nomeCidade2);
        printf ("Atributo escolhido para comparacao: NUMERO DE PONTOS TURISTICOS \n");
     }else {
      printf("HOUVE EMPATE \n");
     }
     break;
    case 5:
        if (densidade1<densidade2){
                printf("Densidade carta 1: %lf - Densidade carta 2: %lf \n", densidade1, densidade2);
        printf("CARTA 1 VENCEU \n");
        printf("Cidade: %s\n", nomeCidade1);
        printf ("Atributo escolhido para comparacao: DENSIDADE DEMOGRÁFICA \n");

     }else if (densidade2<densidade1) {
          printf("Densidade carta 1: %lf - Densidade carta 2: %lf \n", densidade1, densidade2);
      printf("CARTA 2 VENCEU \n");
       printf("Cidade: %s\n", nomeCidade2);
        printf ("Atributo escolhido para comparacao: DENSIDADE DEMOGRAFICA \n");
     }else {
          printf("Densidade carta 1: %lf - Densidade carta 2: %lf \n", densidade1, densidade2);
      printf("HOUVE EMPATE \n");
     }
     break;
    case 6:
     if (pib_percapita1> pib_percapita2){
            printf("Pib PerCapita carta 1: %lf - Pib PerCapita carta 2: %lf \n", pib_percapita1, pib_percapita2);
        printf("CARTA 1 VENCEU \n");
        printf("Cidade: %s\n", nomeCidade1);
        printf ("Atributo escolhido para comparacao: PIB PER CAPITA \n");

     }else if (pib_percapita2>pib_percapita1) {
          printf("Pib PerCapita carta 1: %lf - Pib PerCapita carta 2: %lf \n", pib_percapita1, pib_percapita2);
      printf("CARTA 2 VENCEU \n");
       printf("Cidade: %s\n", nomeCidade2);
        printf ("Atributo escolhido para comparacao: PIB PER CAPITA\n");
     }else {
          printf("Pib PerCapita carta 1: %lf - Pib PerCapita carta 2: %lf \n", pib_percapita1, pib_percapita2);
      printf("HOUVE EMPATE \n");
     }
     break;
     case 7:
        if (superPoder1> superPoder2){
                printf("Super Poder carta 1: %lf - Super Poder Carta 2: %lf \n", superPoder1, superPoder2);
        printf("CARTA 1 VENCEU \n");
        printf("Cidade: %s\n", nomeCidade1);
        printf ("Atributo escolhido para comparacao: SUPER PODER \n");

     }else if (superPoder2>superPoder1) {
         printf("Super Poder carta 1: %lf - Super Poder Carta 2: %lf \n", superPoder1, superPoder2);
      printf("CARTA 2 VENCEU \n");
       printf("Cidade: %s\n", nomeCidade2);
        printf ("Atributo escolhido para comparacao: SUPER PODER \n");
     }else {
         printf("Super Poder carta 1: %lf - Super Poder Carta 2: %lf \n", superPoder1, superPoder2);
      printf("HOUVE EMPATE \n");
     }
     break;
     default:
        printf("OPCAO INVALIDA. TENTE NOVAMENTE \n");
        break;

    }








    return 0;
}
