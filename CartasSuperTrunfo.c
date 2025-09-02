#include <stdio.h>

int main() {
    printf(" Bem vindo ao Super Trunfo \n"); // Exibe mensagem de boas vindas.

    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int numero_pontos_turisticos;


    /* Aqui começa a parte do cadastro de dados 
    essa seção lê as informações digitadas na carta 1 pelo usuario. */
    printf("\nPreencha a Carta 1\n");

     printf(" Informe o Estado: ");
     scanf("%[^\n]", estado); 

     printf(" Informe o Código: ");
     scanf("%s", codigo);

     printf(" Informe o nome da Cidade: ");
     scanf(" %[^\n]", cidade);

     printf(" Informe População: ");
     scanf("%d", &populacao);

     printf(" Informe a Área: ");
     scanf(" %f", &area);
     
     printf(" Informe o PIB: ");
     scanf("%f", &pib);

     printf(" Informe o Numero de Pontos Turisticos: ");
     scanf("%d", &numero_pontos_turisticos);


     // Essa parte imprime as informações cadastradas na carta 1.
     printf(" \nCarta 1\n");
     printf(" Estado: %s\n",estado);
     printf(" Código: %s\n", codigo);
     printf(" Nome da Cidade: %s\n", cidade);
     printf(" População: %d\n", populacao);
     printf(" Área: %.2f km²\n", area);
     printf(" PIB: %.3f\n", pib);
     printf(" Numero de Pontos Turísticos: %d\n", numero_pontos_turisticos);
 

    // Essa seção lê as informações digitadas na carta 2 pelo usuário.
     printf("\nPreencha a Carta 2\n");

     printf(" Informe o Estado: ");
     scanf(" %[^\n]", &estado);

     printf(" Informe o Código: ");
     scanf("%s", &codigo);

     printf(" Informe a Cidade: ");
     scanf(" %[^\n]", &cidade);

     printf(" Informe a População: ");
     scanf("%d", &populacao);

     printf(" Informe a Área: ");
     scanf("%f", &area);

     printf(" Informe o PIB: ");
     scanf("%f", &pib);

     printf(" Informe o Numero de pontos Turísticos: ");
     scanf("%d", &numero_pontos_turisticos);

     // Essa parte imprime as informações cadastradas na carta 2.
     printf(" \nCarta 2\n");
     printf(" Estado: %s\n", estado);
     printf(" Código: %s\n", codigo);
     printf(" Nome da Cidade: %s\n", cidade);
     printf(" População: %d\n", populacao);
     printf(" Área: %.2f km²\n", area);
     printf(" PIB: %.3f\n", pib);
     printf(" Numero de Pontos Turísticos: %d\n", numero_pontos_turisticos);



     return 0;// Essa parte encerra o programa.

}