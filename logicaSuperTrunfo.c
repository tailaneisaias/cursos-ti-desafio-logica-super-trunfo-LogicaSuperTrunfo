#include <stdio.h>

/*Carta 1*/

int main()
{
  char Estado;
  char CodigoDaCarta[20];
  char NomeDaCidade[50];

  unsigned long int Populacao;
  int NumeroDePontosTuristicos, opcao;
  float Area, PIB, DensidadePopulacional, PibPerCapita, SuperPoder;

  printf("Carta - 1 \n");

  printf("Uma letra que represente seu estado: \n");
  scanf("%c", &Estado);

  printf("Digite a letra do seu estado, junto com um número de 01 a 04 (ex: C01, B02) \n");
  scanf("%s", CodigoDaCarta);

  printf("Nome da sua cidade: \n");
  scanf("%s", NomeDaCidade);

  printf("O número de habitantes da sua cidade: \n");
  scanf("%d", &Populacao);

  printf("A aréa da cidade em quilometros quadrados: \n");
  scanf("%f", &Area);

  printf("O produto interno Bruto da cidade: \n");
  scanf("%f", &PIB);

  printf("A quantidade de pontos turisticos da sua cidade: \n");
  scanf("%i", &NumeroDePontosTuristicos);

  DensidadePopulacional = (float)(Populacao / Area);
  PibPerCapita = (float)(PIB / Populacao);
  SuperPoder = (float)Populacao + Area + PIB + NumeroDePontosTuristicos + PibPerCapita + (1.0f / DensidadePopulacional);

  printf("-Estado: %c \n-CodigoDaCarta: %s \n-NomeDaCidade: %s \n-População: %d\n", Estado, CodigoDaCarta, NomeDaCidade, Populacao);
  printf("-Area: %.2f \n-PIB: %.2f \n-Número De Pontos Turísticos: %i \n-Densidade Populacional: %.2f hab/km² \n-PIB Per capita: %.2f reais\n-Super Poder: %.2f\n", Area, PIB, NumeroDePontosTuristicos, DensidadePopulacional, PibPerCapita, SuperPoder);

  /*Carta 2*/

  char NomeDoEstado;
  char Codigo[30];
  char Cidade[40];

  unsigned long int Habitantes;
  int Turismo;
  float AreaDaCidade, PibDacidade, Densidadepopulacional, PIBPercapita, Superpoder;

  printf("Carta - 2 \n");

  printf(" - Digite uma letra de 'A' a 'H' que represente seu estado: \n");
  scanf(" %c", &NomeDoEstado);

  printf(" - A letra do seu estado seguida de número de 01 a 04(Ex: A02, B03): \n");
  scanf(" %s", Codigo);

  printf(" - Digite o nome da sua cidade: \n");
  scanf("%s", Cidade);

  printf(" - Número de habitantes da sua cidade: \n");
  scanf("%d", &Habitantes);

  printf("- A quantidade de pontos turisticos da sua cidade: \n");
  scanf("%i", &Turismo);

  printf(" - A área da sua cidade em quilomêtros quadrados: \n");
  scanf("%f", &AreaDaCidade);

  printf(" - O produto interno Bruto da cidade: \n");
  scanf("%f", &PibDacidade);

  Densidadepopulacional = (float)(Habitantes / AreaDaCidade);
  PIBPercapita = (float)(PibDacidade / Habitantes);
  Superpoder = (float)Habitantes + AreaDaCidade + PibDacidade + Turismo + PIBPercapita + (1.0f / Densidadepopulacional);

  printf("-estado: %c \n-codigodacarta: %s \n-nomedacidade %s \n-populacao: %d \n", NomeDoEstado, Codigo, Cidade, Habitantes);
  printf("-numerodepontosturisticos: %i \n-area: %.2f \n-pib: %.2f \n-DensidadePopulacional: %.2f hab/km²\n-PIB per capita: %.2f reais\n-Super Poder: %.2f\n", Turismo, AreaDaCidade, PibDacidade, Densidadepopulacional, PIBPercapita, SuperPoder);

  printf("\n-----Comparação de cartas ----- \n");

  printf("\nPopulação: (Carta 1) - Ganhou %d\n", Populacao > Habitantes);
  printf("Área: (Carta 1) - Ganhou %d\n", Area > AreaDaCidade);
  printf("PIB: (Carta 1) - Ganhou %d\n", PIB > PibDacidade);
  printf("Pontos Turísticos: (Carta 1) - Ganhou %d\n", NumeroDePontosTuristicos > Turismo);
  printf("Densidade Populacional: (Carta 1) - Ganhou %d\n", DensidadePopulacional < Densidadepopulacional);
  printf("PIB per Capita: (Carta 1) - Ganhou %d\n", PibPerCapita > PIBPercapita);
  printf("Super Poder: (Carta 1) - Ganhou %d\n", SuperPoder > Superpoder);

  printf("\n -----Comparação de cartas (Atributo: População)----- \n");

  printf("\n(Carta 1) - %s (%c): %d Habitantes \n", NomeDaCidade, Estado, Populacao);
  printf("(Carta 2) - %s (%c): %d Habitantes \n", Cidade, NomeDoEstado, Habitantes);

  if (Populacao > Habitantes)
  {
    printf("(Carta 1) - %s Venceu!\n", NomeDaCidade);
  }
  else if (Populacao < Habitantes)
  {
    printf("(Carta 2) - %s - Venceu!\n", Cidade);
  }
  else
  {
    printf("EMPATE!");
  }

  printf("\n *** Menu de comparação *** \n");
  printf("1 - População\n");
  printf("2 - Aréa\n");
  printf("3 - PIB\n");
  printf("4 - Número de pontos turísticos\n");
  printf("5 - Densidade demográfica\n");
  printf("Escolha um atributo para comparar: ");
  scanf("%d", &opcao);

  printf("\n *** Resultado da Comparação*** \n ");

  switch (opcao)
  {
  case 1:
    printf("Atributo escolhido: População");
    printf("Carta - 1: %s: %lu Habitantes \n", NomeDaCidade, Populacao);
    printf("Carta - 2: %s: %lu Habitantes \n", Cidade, Habitantes);
    if (Populacao > Habitantes)
      printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade);
    else if (Populacao < Habitantes)
      printf("Resultado: Carta 2 (%s) venceu!\n", Cidade);
    else
      printf("Empate!\n");
    break;

  case 2:
    printf("Atributo: Área\n");
    printf("Carta 1 - %s: %.2f km²\n", NomeDaCidade, Area);
    printf("Carta 2 - %s: %.2f km²\n", Cidade, AreaDaCidade);
    if (Area > AreaDaCidade)
      printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade);
    else if (Area < AreaDaCidade)
      printf("Resultado: Carta 2 (%s) venceu!\n", Cidade);
    else
      printf("Empate!\n");
    break;

  case 3:
    printf("Atributo: PIB\n");
    printf("Carta 1 - %s: %.2f bilhões\n", NomeDaCidade, PIB);
    printf("Carta 2 - %s: %.2f bilhões\n", Cidade, PibDacidade);
    if (PIB > PibDacidade)
      printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade);
    else if (PIB < PibDacidade)
      printf("Resultado: Carta 2 (%s) venceu!\n", Cidade);
    else
      printf("Empate!\n");
    break;

  case 4:
    printf("Atributo: Pontos Turísticos\n");
    printf("Carta 1 - %s: %d pontos\n", NomeDaCidade, NumeroDePontosTuristicos);
    printf("Carta 2 - %s: %d pontos\n", Cidade, Turismo);
    if (NumeroDePontosTuristicos > Turismo)
      printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade);
    else if (NumeroDePontosTuristicos < Turismo)
      printf("Resultado: Carta 2 (%s) venceu!\n", Cidade);
    else
      printf("Empate!\n");
    break;

  case 5:
    printf("Atributo: Densidade Populacional\n");
    printf("Carta 1 - %s: %.2f hab/km²\n", NomeDaCidade, DensidadePopulacional);
    printf("Carta 2 - %s: %.2f hab/km²\n", Cidade, Densidadepopulacional);
    if (DensidadePopulacional < Densidadepopulacional)
      printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade);
    else if (DensidadePopulacional > Densidadepopulacional)
      printf("Resultado: Carta 2 (%s) venceu!\n", Cidade);
    else
      printf("Empate!\n");
    break;

  default:
    printf("Opção inválida!\n");
  }
  return 0;
}