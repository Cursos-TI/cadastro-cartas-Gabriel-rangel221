#include <stdio.h>

int main() {
  //==== Variaveis para carta 1 ====
  char estado1;
  char codigo1[5];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos_turisticos1;

  //==== Variáveis para carta 2 ====
  char estado2;
  char codigo2[5];
  char cidade2[50];
  int população2;
  float area2;
  float pib2;
  int pontos_turisticos2;


  //==== Cadastro da Carta 1 ====
  printf("-- Cadastro da Carta 1 -- ");

  printf("Digite a letra do estado (A a H): ");
  scanf("%c" , &estado1);

  printf("Digite o código da carta (ex: A01): ");
  scanf("%s" , &codigo1);

  printf("Digite o nome da cidade: ");
  scanf("%s" , &cidade1);

  printf("Digite a população (Numero inteiro): ");
  scanf("%d" , &populacao1);


  printf("Digite a área em Km² (Ex:2119.2): ");
  scanf("%f" , &area1);


  printf ("Digite o PIB em bilhoes (ex: 696.97): ");
  scanf("%f" , &pib1);

  printf("Digite o número de pontos turisticos: ");
  scanf("%d" , &pontos_turisticos1);



  //==== Cadastro da Carta 2 ====
  printf("-- Cadastro da Carta 2 --");

  printf("Digite a letra do estado (A a H): ");
  scanf("%c" , &estado2);

  pritnf("Digite o código da carta (Ex: B02): ")
  scanf






return 0;
} 
