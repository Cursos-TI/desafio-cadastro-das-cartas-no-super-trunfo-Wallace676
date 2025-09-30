#include <stdio.h>

int main()
{
  printf(" Bem vindo ao Super Trunfo \n"); // Exibe mensagem de boas vindas.

  // ==== Variáveis principais da carta ====;
  char estado[50];
  char codigo[10];
  char cidade[50];
  int populacao;
  float area;
  double pib;
  float densidade_populacional;
  double pib_percapita;
  int numero_pontos_turisticos;

  // ==== Cadastro da carta 1 ====;
  printf("\nPreencha a Carta 1\n");

  printf(" Informe o Estado: ");
  scanf(" %[^\n]", estado);

  printf(" Informe o Código: ");
  scanf("%s", codigo);

  printf(" Informe o nome da Cidade: ");
  scanf(" %[^\n]", cidade);

  printf(" Informe População: ");
  scanf("%d", &populacao);

  printf(" Informe a Área: ");
  scanf("%f", &area);

  printf(" Informe o PIB: ");
  scanf("%lf", &pib);

  printf(" Informe o Numero de Pontos Turisticos: ");
  scanf("%d", &numero_pontos_turisticos);

  // Calcula a densidade populacional da carta 1
  densidade_populacional = (float)populacao / area;

  // Calcula o PIB per capita da carta 1 (reais/habitante)
  // Fórmula: PIB per capita = PIB / população
  pib_percapita = (pib * 1e9) / (double)populacao;

  // Imprime as informações cadastradas na carta 1
  printf(" \nCarta 1\n");
  printf(" Estado: %s\n", estado);
  printf(" Código: %s\n", codigo);
  printf(" Nome da Cidade: %s\n", cidade);
  printf(" População: %d\n", populacao);
  printf(" Área: %.2f km²\n", area);
  printf(" PIB: %.2f bilhões de reais\n", pib);
  printf(" Numero de Pontos Turísticos: %d\n", numero_pontos_turisticos);
  printf(" Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
  printf(" PIB per capita: %.2f\n", pib_percapita);

  // ==== Cadastro da carta 2 ====
  printf("\nPreencha a Carta 2\n");

  printf(" Informe o Estado: ");
  scanf(" %[^\n]", estado);

  printf(" Informe o Código: ");
  scanf("%s", codigo);

  printf(" Informe a Cidade: ");
  scanf(" %[^\n]", cidade);

  printf(" Informe a População: ");
  scanf("%d", &populacao);

  printf(" Informe a Área: ");
  scanf("%f", &area);

  printf(" Informe o PIB: ");
  scanf("%lf", &pib);

  printf(" Informe o Numero de pontos Turísticos: ");
  scanf("%d", &numero_pontos_turisticos);

  // Calcula a densidade populacional da carta 2
  densidade_populacional = (float)populacao / area;

  // multiplica o PIB em bilhões por 1e9 para converter em reais,
  // depois divide pelo número de habitantes (convertido para double)
  pib_percapita = (pib * 1e9) / (double)populacao;

  // imprime as informações cadastradas na carta 2
  printf(" \nCarta 2\n");
  printf(" Estado: %s\n", estado);
  printf(" Código: %s\n", codigo);
  printf(" Nome da Cidade: %s\n", cidade);
  printf(" População: %d\n", populacao);
  printf(" Área: %.2f km²\n", area);
  printf(" PIB: %.2f bilhões de reais\n", pib);
  printf(" Numero de Pontos Turísticos: %d\n", numero_pontos_turisticos);
  printf(" Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
  printf(" PIB per capita: %.2f reais\n", pib_percapita);

  return 0; // Encerra o programa
}