#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Declarando variáveis das cartas 1 e 2
    // pib
  double pib, pibC2;
  double pibPerCapita, pibPerCapitaC2;
    // área e densidade pop.
  float area, areaC2;
  float densPopulacional, densPopulacionalC2;
  float superPoder, superPoderC2;
    // população e pontos turísticos
  unsigned long int populacao, populacaoC2;
  int ptsTuristicos, ptsTuristicosC2;
    // nome, código e estado
  char nomeCidade[50], nomeCidadeC2[50];
  char codCarta[3], codCartaC2[3];
  char estado, estadoC2;

  // Inputs da carta 1
  printf("# Por favor preencha os dados para a criação da sua Carta 1\n");
  printf("C1 - Digite uma letra de A a H: ");
  scanf(" %c", &estado);
  printf("C1 - Digite um número de 1 a 4 para complementar o código da sua carta: ");
  scanf(" %s", codCarta);
  printf("C1 - Digite o nome da cidade escolhida: ");
  scanf(" %49[^\n]", nomeCidade);
  printf("C1 - Digite a quantidade total de população da cidade: ");
  scanf("%u", &populacao);
  printf("C1 - Digite a área em km² (quilometros quadrados) da cidade: ");
  scanf("%f", &area);
  printf("C1 - Digite o PIB (produto interno bruto) da cidade: ");
  scanf("%lf", &pib);
  printf("C1 - Digite a quantidade de pontos turísticos que existem na cidade: ");
  scanf("%d", &ptsTuristicos);
  
  // Feedback dos inputs da carta 1 para o usuário
  printf("\n");
  printf("# A carta 1 foi criada com sucesso.\n");
  printf("# Preencha os dados da carta 2 a seguir e no fim as duas cartas serão exibidas!\n");
  printf("\n");
  
  // Inputs da carta 2
  printf("C2 - Digite uma letra de A a H: ");
  scanf(" %c", &estadoC2);
  printf("C2 - Digite um número de 1 a 4 para complementar o código da sua carta: ");
  scanf(" %s", codCartaC2);
  printf("C2 - Digite o nome da cidade escolhida: ");
  scanf(" %49[^\n]", nomeCidadeC2);
  printf("C2 - Digite a quantidade total de população da cidade: ");
  scanf("%u", &populacaoC2);
  printf("C2 - Digite a área em km² (quilometros quadrados) da cidade: ");
  scanf("%f", &areaC2);
  printf("C2 - Digite o PIB (produto interno bruto) da cidade: ");
  scanf("%lf", &pibC2);
  printf("C2 - Digite a quantidade de pontos turísticos que existem na cidade: ");
  scanf("%d", &ptsTuristicosC2);

  // Feedback dos inputs da carta 2 para o usuário
  printf("\n");
  printf("Todos os dados foram preenchidos! As cartas serão exibidas a seguir: \n");
  printf("\n");
  
  // Cálculos das métricas das cidades
    // Densidade populacional
  densPopulacional = populacao / area;
  densPopulacionalC2 = populacaoC2 / areaC2;
    // PIB per capita
  pibPerCapita = pib / populacao;
  pibPerCapitaC2 = pibC2 / populacaoC2;
    // Superpoder
  superPoder = populacao+area+pib+ptsTuristicos+pibPerCapita+(densPopulacional*(-1));
  superPoderC2 = populacaoC2+areaC2+pibC2+ptsTuristicosC2+pibPerCapitaC2+(densPopulacionalC2*(-1));\

  // Outputs das duas cartas preenchidas e a comparação
    // carta 1
  printf("=== CARTA 1 ===\n");
  printf("Estado: %c\n", estado);
  printf("Código da carta: %c%s\n", estado, codCarta);
  printf("Nome da cidade: %s\n", nomeCidade);
  printf("População: ~%u habitantes\n", populacao);
  printf("Área: %.2fKm²\n", area);
  printf("PIB: R$%.2Lf\n", pib);
  printf("Pontos turísticos: %d\n", ptsTuristicos);
  printf("Densidade populacional: %.2f hab/km²\n", densPopulacional);
  printf("PIB per Capita: R$%.2f\n", pibPerCapita);
  printf("Super Poder: %.2f", superPoder);
  printf("\n");
  printf("______________________\n");
  printf("\n");
    // carta 2
  printf("=== CARTA 2 ===\n");
  printf("Estado: %c\n", estadoC2);
  printf("Código da carta: %c%s\n", estadoC2, codCartaC2);
  printf("Nome da cidade: %s\n", nomeCidadeC2);
  printf("População: ~%u habitantes\n", populacaoC2);
  printf("Área: %.2fKm²\n", areaC2);
  printf("PIB: R$%.2Lf\n", pibC2);
  printf("Pontos turísticos: %d\n", ptsTuristicosC2);
  printf("Densidade populacional: %.2f hab/km²\n", densPopulacionalC2);
  printf("PIB per Capita: R$%.2f\n", pibPerCapitaC2);
  printf("Super Poder: %.2f", superPoderC2);
  printf("\n");
  printf("______________________\n");
  printf("\n");
    // comparações
  printf("=== ? QUEM GANHOU ? ===\n");
  printf("Carta 1 é representada pelo número 1 e Carta 2 pelo número 0!\n");
  printf("\n");
  printf("A carta vencedora em População foi: #%d - (1-Carta1 / 0-Carta2)\n", populacao > populacaoC2);
  printf("A carta vencedora em Área foi: #%d - (1-Carta1 / 0-Carta2)\n", area > areaC2);
  printf("A carta vencedora em PIB foi: #%d - (1-Carta1 / 0-Carta2)\n", pib > pibC2);
  printf("A carta vencedora em Pontos Turísticos foi: #%d - (1-Carta1 / 0-Carta2)\n", ptsTuristicos > ptsTuristicosC2);
  printf("A carta vencedora em Densidade Populacional foi: #%d - (1-Carta1 / 0-Carta2)\n", !(densPopulacional > densPopulacionalC2));// menor ganha
  printf("A carta vencedora em PIB per Capita foi: #%d - (1-Carta1 / 0-Carta2)\n", pibPerCapita > pibPerCapitaC2);
  printf("A carta vencedora em Super Poder foi: #%d - (1-Carta1 / 0-Carta2)\n", superPoder > superPoderC2);
  
  return 0;
} 
