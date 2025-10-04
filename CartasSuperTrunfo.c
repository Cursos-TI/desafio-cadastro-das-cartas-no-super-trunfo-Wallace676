#include <stdio.h>

int main()
{
  printf(" Bem vindo ao Super Trunfo \n"); // Exibe mensagem de boas vindas.

  // ==== Variáveis principais da carta ====;
  char estadoC1[50], estadoC2[50];
  char codigoC1[10], codigoC2[10];
  char cidadeC1[50], cidadeC2[50];
  unsigned long int populacaoC1, populacaoC2;
  float areaC1, areaC2, super_poderC1, super_poderC2;
  double pibC1, pibC2;
  double densidade_populacionalC1, densidade_populacionalC2;
  double pib_percapitaC1, pib_percapitaC2;
  int numero_pontos_turisticosC1, numero_pontos_turisticosC2;

  //==== Cadastro da carta 1 ====;
  printf("\nPreencha a Carta 1\n");

  printf(" Informe o Estado: ");
  scanf(" %[^\n]", estadoC1);

  printf(" Informe o Código: ");
  scanf("%s", codigoC1);

  printf(" Informe o nome da Cidade: ");
  scanf(" %[^\n]", cidadeC1);

  printf(" Informe População: ");
  scanf("%lu", &populacaoC1);

  printf(" Informe a Área: ");
  scanf("%f", &areaC1);

  printf(" Informe o PIB: ");
  scanf("%lf", &pibC1);

  printf(" Informe o Numero de Pontos Turisticos: ");
  scanf("%d", &numero_pontos_turisticosC1);

  // Calcula a densidade populacional da carta 1
  densidade_populacionalC1 = (float)populacaoC1 / areaC1;

  // multiplica o PIB em bilhões por 1e9 para converter em reais,
  // depois divide pelo número de habitantes (convertido para double)
  pib_percapitaC1 = (pibC1 * 1e9) / (double)populacaoC1;

  //==== Cadastro da carta 2 ====
  printf("\nPreencha a Carta 2\n");

  printf(" Informe o Estado: ");
  scanf(" %[^\n]", estadoC2);

  printf(" Informe o Código: ");
  scanf(" %s", codigoC2);

  printf(" Informe a Cidade: ");
  scanf(" %[^\n]", cidadeC2);

  printf(" Informe a População: ");
  scanf("%lu", &populacaoC2);

  printf(" Informe a Área: ");
  scanf("%f", &areaC2);

  printf(" Informe o PIB: ");
  scanf("%lf", &pibC2);

  printf(" Informe o Numero de pontos Turísticos: ");
  scanf("%d", &numero_pontos_turisticosC2);

  // Calcula a densidade populacional da carta 2
  densidade_populacionalC2 = (float)populacaoC2 / areaC2;

  // multiplica o PIB em bilhões por 1e9 para converter em reais,
  // depois divide pelo número de habitantes (convertido para double)
  pib_percapitaC2 = (pibC2 * 1e9) / (double)populacaoC2;

  // Imprime as informações cadastradas na carta 1
  printf(" \nCarta 1\n");
  printf(" Estado: %s\n", estadoC1);
  printf(" Código: %s\n", codigoC1);
  printf(" Nome da Cidade: %s\n", cidadeC1);
  printf(" População: %lu\n", populacaoC1);
  printf(" Área: %.2f km²\n", areaC1);
  printf(" PIB: %.2f bilhões de reais\n", pibC1);
  printf(" Numero de Pontos Turísticos: %d\n", numero_pontos_turisticosC1);
  printf(" Densidade Populacional: %.2f hab/km²\n", densidade_populacionalC1);
  printf(" PIB per capita: %.2f\n", pib_percapitaC1);

  // Atribui valor ao super poder somando todas as outras funções e converte para float na carta 1
  super_poderC1 = (float)populacaoC1 + areaC1 + pibC1 + numero_pontos_turisticosC1 + pib_percapitaC1 + (1 / densidade_populacionalC1);

  printf(" Super poder: carta 1 %.2f\n", super_poderC1);

  // imprime as informações cadastradas na carta 2
  printf(" \nCarta 2\n");
  printf(" Estado: %s\n", estadoC2);
  printf(" Código: %s\n", codigoC2);
  printf(" Nome da Cidade: %s\n", cidadeC2);
  printf(" População: %lu\n", populacaoC2);
  printf(" Área: %.2f km²\n", areaC2);
  printf(" PIB: %.2f bilhões de reais\n", pibC2);
  printf(" Numero de Pontos Turísticos: %d\n", numero_pontos_turisticosC2);
  printf(" Densidade Populacional: %.2f hab/km²\n", densidade_populacionalC2);
  printf(" PIB per capita: %.2f reais\n", pib_percapitaC2);

 // Atribui valor ao super poder somando todas as outras funções e converte para float na carta 2
  super_poderC2 = (float)populacaoC2 + areaC2 + pibC2 + numero_pontos_turisticosC2 + pib_percapitaC2 + (1 / densidade_populacionalC2);

// Imprime a informação do super poder da carta 2
  printf(" Super poder: %.2f\n", super_poderC2);

  // Realiza a comparação entre as duas cartas e guarda em uma variavel
  int vencedor_populacao = populacaoC1 > populacaoC2;
  int vencedor_area = areaC1 > areaC2;
  int vencedor_pib = pibC1 > pibC2;
  int vencedor_pontos_turisticos = numero_pontos_turisticosC1 > numero_pontos_turisticosC2;
  int vencedor_densidadePopulacional = densidade_populacionalC1 < densidade_populacionalC2;
  int vencedor_pibPercapita = pib_percapitaC1 > pib_percapitaC2;
  int vencedor_super_poder = super_poderC1 > super_poderC2;


  // imprime o resultado das cartas comparadas e diz qual venceu
  printf(" \nRELATORIO DE COMPARAÇÃO\n");
  printf(" População: A Carta %d Venceu? (%d)\n", vencedor_populacao + 1, vencedor_populacao);
  printf(" Área: A Carta %d Venceu? (%d)\n", vencedor_area + 1, vencedor_area);
  printf(" PIB: A Carta %d Venceu? (%d)\n", vencedor_pib + 1, vencedor_pib);
  printf(" Numero de Pontos Turísticos: A Carta %d Venceu? (%d)\n", vencedor_pontos_turisticos + 1, vencedor_pontos_turisticos);
  printf(" Densidade Populacional:A Carta %d Venceu? (%d)\n", vencedor_densidadePopulacional + 1, vencedor_densidadePopulacional);
  printf(" PIB per capita: A Carta %d Venceu? (%d)\n", vencedor_pibPercapita + 1, vencedor_pibPercapita);
  printf(" Super poder: A Carta %d Venceu? (%d)\n", vencedor_super_poder + 1, vencedor_super_poder);

  return 0; // Encerra o programa
}