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
    int numPontosTuristicos1, numPontosTuristicos2;
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
    printf("Atribuiçao: Super Poder \n");

    printf("Carta 1- Cidade: %s: Super Poder= %.3lf \n", nomeCidade1, superPoder1 );
     printf("Carta 2- Cidade: %s: Super Poder= %.3lf \n", nomeCidade2, superPoder2 );
     if (superPoder1> superPoder2) {
        printf("Resultado: Carta 1 venceu!");
     } else {
     printf ("Resultado: Carta 2 venceu!");
     }




    return 0;
}
