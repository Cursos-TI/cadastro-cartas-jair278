#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
/* Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados
 e printf para exibir as informações.*/

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char EstadoA[20] = "Para";
  char EstadoB[20] = "Tocantins";

  char CodigoCartaA1[20] = "A01";
  char CodigoCartaB1[20] = "B01";

  char NomeCidadeA01[20] = "Uruara";
  char NomeCidadeB01[25] = "Luzinopolis";

  int PopulacaoA01 = 43110;
  int PopulacaoB01 = 24654;

  float AreaA01 = 10791.54;
  float AreaB01 = 282;

  double PibA01 = 1100000000;
  double PibB01 = 58000000;

  int TurismoA01 = 16;
  int TurismoB01 = 12;
  
  char confirmacao[10];



  // Área para entrada de dados
  printf("Digite S para mostrar as cartas: ");
  scanf("%s", &confirmacao);
  //Confirmação apenas "estetica", visto que não temos ainda estrutura de decisão no codigo. Serve apenas para iniciar o programa


  // Área para exibição dos dados da cidade
  printf("Cartas: \n\n");

  printf("Codigo: %s\n", CodigoCartaA1);
  printf("Estado: %s\n", EstadoA);
  printf("Cidade: %s\n", NomeCidadeA01);
  printf("Populacao: %d\n", PopulacaoA01);
  printf("Area em Km2: %.2f\n", AreaA01);
  printf("PIB: %.2f\n", PibA01);
  printf("Pontos Turisticos: %d\n\n", TurismoA01);

  printf("Codigo: %s\n", CodigoCartaB1);
  printf("Estado: %s\n", EstadoB);
  printf("Cidade: %s\n", NomeCidadeB01);
  printf("Populacao: %d\n", PopulacaoB01);
  printf("Area em Km2: %.2f\n", AreaB01);
  printf("PIB: %.2f\n", PibB01);
  printf("Pontos Turisticos: %d\n", TurismoB01);


  return 0;
} 
