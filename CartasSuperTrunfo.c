#include <stdio.h>

// ========== SEÇÃO 1: DECLARAÇÃO DE VARIÁVEIS ==========

int main() {
/*
===========================================
PROGRAMA: SUPER TRUNFO - CADASTRO DE CARTAS
DESCRIÇÃO: Cadastra e exibe duas cartas do Super trunfo
===========================================
*/

  //==== Variaveis para carta 1 ====
  char estado1;                        // Letra do estado (A a H)
  char codigo1[5];                     // Código da carta (ex: "A01")
  char cidade1[50];                    // Nome da cidade (pode ter espaços)
  int populacao1;                      // População (número inteiro)
  float area1;                         // Área em km² (pode ter decimais)
  float pib1;                          // PIB em bilhões (valor monetário)
  int pontos_turisticos1;              // Pontos turísticos (número inteiro)

  //==== Variáveis para carta 2 ====
  char estado2;                        // Mesmas variáveis para a segunda carta
  char codigo2[5];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;


// ========== SEÇÃO 2: ENTRADA DE DADOS ==========

  //==== Cadastro da Carta 1 ====
  printf("\n-- Cadastro da Carta 1 --\n");

  printf("Digite a letra do estado (A a H): ");
  scanf(" %c" , &estado1);                            // Espaço antes do %c limpa buffer

  printf("Digite o código da carta (ex: A01): ");
  scanf("%s" , codigo1);                              // Arrays não usam & no scanf

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]" , cidade1);                         // %[^\n] lê até encontrar nova linha

  printf("Digite a população (Número inteiro): ");
  scanf("%d" , &populacao1);

  printf("Digite a área em Km² (Ex:2119.2): ");
  scanf("%f" , &area1);

  printf ("Digite o PIB em bilhões (ex: 696.97): ");
  scanf("%f" , &pib1);

  printf("Digite o número de pontos turisticos: ");
  scanf("%d" , &pontos_turisticos1);



  //==== Cadastro da Carta 2 ====
  printf("\n-- Cadastro da Carta 2 --\n");

  printf("Digite a letra do estado (A a H): ");
  scanf(" %c" , &estado2);

  printf("Digite o código da carta (Ex: B02): ");
  scanf("%s" , codigo2);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]" , cidade2);

  printf("Digite a população (Número inteiro): ");
  scanf("%d" , &populacao2);

  printf("Digite a área em Km² (Ex: 1550.3): ");
  scanf("%f" , &area2);

  printf("Digite o PIB em bilhôes (ex:496,20): ");
  scanf("%f" , &pib2);

  printf("Digite o número de  pontos turisticos: ");
  scanf("%d" , &pontos_turisticos2);



// ========== SEÇÃO 3: SAÍDA DE DADOS ==========

//==== Exibição de cartas ====
//==== Exibição da carta 1 ====
printf("\n-- Carta 1 --\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f\n", area1);                // .2f = 2 casas decimais
printf("PIB: %.2f\n", pib1);
printf("Número de pontos turísticos: %d\n", pontos_turisticos1);

//==== Exibição da carta 2 ====
printf("\n-- Carta 2 --\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Número de pontos turísticos: %d\n", pontos_turisticos2);

// ========== FIM DO PROGRAMA ==========

return 0;                 // Retorna 0 indicando execução bem-sucedida
} 
