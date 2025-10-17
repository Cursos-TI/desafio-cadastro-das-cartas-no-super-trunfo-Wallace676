#include <stdio.h>

int main()
{
  printf(" Bem vindo ao Super Trunfo \n"); // Exibe mensagem de boas-vindas.

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
  int atributo1, atributo2; // Aqui armazenamos os dois atributos escolhidos

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

  // Calcula o PIB per capita
  pib_percapitaC1 = (pibC1 * 1e9) / (double)populacaoC1;

  //==== Cadastro da carta 2 ====;
  printf("\nPreencha a Carta 2\n");

  printf(" Informe o Estado: ");
  scanf(" %[^\n]", estadoC2);

  printf(" Informe o Código: ");
  scanf("%s", codigoC2);

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

  // calcula densidade Populacional
  densidade_populacionalC2 = (float)populacaoC2 / areaC2;

  // calcula PIB per capita
  pib_percapitaC2 = (pibC2 * 1e9) / (double)populacaoC2;

  // Calcula o super poder de cada carta somando todos os atributos
  super_poderC1 = (float)populacaoC1 + areaC1 + pibC1 + numero_pontos_turisticosC1 + pib_percapitaC1 + (1 / densidade_populacionalC1);
  super_poderC2 = (float)populacaoC2 + areaC2 + pibC2 + numero_pontos_turisticosC2 + pib_percapitaC2 + (1 / densidade_populacionalC2);

  printf("\n------------------------------------------------\n\n");

  // Menu dinâmico para o primeiro atributo
  printf("Escolha o primeiro atributo para comparar:\n");
  printf("  1. População\n");
  printf("  2. Área\n");
  printf("  3. PIB\n");
  printf("  4. Pontos turísticos\n");
  printf("  5. Densidade demográfica\n");
  printf("  6. Super Poder\n\n");
  printf("Digite sua escolha: ");
  scanf("%d", &atributo1);

  // Menu dinâmico para o segundo atributo, evitando repetir o primeiro
  do
  {
    printf("\nEscolha o segundo atributo (não pode repetir o primeiro):\n");

    // Mostra apenas os atributos disponíveis
    for (int i = 1; i <= 6; i++)
    {
      if (i != atributo1) // Não mostra o atributo já escolhido
      {
        switch (i)
        {
        case 1:
          printf(" 1. População\n");
          break;
        case 2:
          printf(" 2. Área\n");
          break;
        case 3:
          printf(" 3. PIB\n");
          break;
        case 4:
          printf(" 4. Pontos turísticos\n");
          break;
        case 5:
          printf(" 5. Densidade demográfica\n");
          break;
        case 6:
          printf(" 6. Super Poder\n");
          break;
        }
      }
    }

    printf("Digite sua escolha: ");
    scanf("%d", &atributo2);

    if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 6)
    {
      printf("Escolha inválida! Tente novamente.\n"); // Garante que não repita ou escolha inválida
    }
  } while (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 6);

  // Função simples para pegar o valor de qualquer atributo
  float valor_carta(int atributo,
                    unsigned long populacao, float area, double pib,
                    int pontos, double densidade, float super_poder)
  {
    switch (atributo)
    {
    case 1:
      return populacao;
    case 2:
      return area;
    case 3:
      return pib;
    case 4:
      return pontos;
    case 5:
      return -densidade; // menor vence, então invertemos
    case 6:
      return super_poder;
    default:
      return 0;
    }
  }

  // Calcula a soma dos valores dos atributos escolhidos para cada carta
  float somaC1 = valor_carta(atributo1, populacaoC1, areaC1, pibC1, numero_pontos_turisticosC1, densidade_populacionalC1, super_poderC1) +
                 valor_carta(atributo2, populacaoC1, areaC1, pibC1, numero_pontos_turisticosC1, densidade_populacionalC1, super_poderC1);

  float somaC2 = valor_carta(atributo1, populacaoC2, areaC2, pibC2, numero_pontos_turisticosC2, densidade_populacionalC2, super_poderC2) +
                 valor_carta(atributo2, populacaoC2, areaC2, pibC2, numero_pontos_turisticosC2, densidade_populacionalC2, super_poderC2);

  // Exibe o resultado final de forma clara
  printf("\n**** Resultado Final da Comparação ****\n");
  printf("Carta 1: %s\n", estadoC1);
  printf("Carta 2: %s\n\n", estadoC2);

  printf("Soma dos atributos escolhidos %s: %.2f\n", estadoC1, somaC1);
  printf("Soma dos atributos escolhidos %s: %.2f\n", estadoC2, somaC2);

  if (somaC1 > somaC2)
  {
    printf("Vencedor: %s \n", estadoC1);
  }
  else if (somaC2 > somaC1)
  {
    printf("Vencedor: %s \n", estadoC2);
  }
  else
  {
    printf("Vencedor: Empate! \n");
  }

  return 0;
}