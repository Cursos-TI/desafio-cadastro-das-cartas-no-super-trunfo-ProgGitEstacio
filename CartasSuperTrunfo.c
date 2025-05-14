#include <stdio.h>


int main() {
    
    // Definindo as variáveis separadas para cada atributo da cidade 1;

    int populacao1, npontosturisticos1;
    float area1, PIB1;
    char estado1[20], codigodacarta1[20], nomedacidade1[20];
    int populacao2, npontosturisticos2;
    float area2, PIB2;
    char estado2[20], codigodacarta2[20], nomedacidade2[20];
  
    // Cadastrando as Cartas, utilizando a função scanf para a captura das entradas do usuário para cada atributo da carta;
    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o Código da carta: \n");
    scanf("%s", &codigodacarta1);

    printf("Digite o nome da cidade: \n");
    scanf ("%s", &nomedacidade1);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos Turísticos: \n");
    scanf("%d", &npontosturisticos1);

    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o Código da carta: \n");
    scanf("%s", &codigodacarta2);

    printf("Digite o nome da cidade: \n");
    scanf ("%s", &nomedacidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos Turísticos: \n");
    scanf("%d", &npontosturisticos2);


    // Exibindo os dos Dados das Cartas, um por linha,  utilizando a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    printf("Carta 01:\n");
    printf("Estado:%s\n", estado1);
    printf("Código:%s\n", codigodacarta1);
    printf("Nome da Cidade:%s\n", nomedacidade1);
    printf("População:%d\n", populacao1);
    printf("Área:%f\n", area1);
    printf("PIB:%f\n", PIB1);
    printf("Número de Pontos Turísticos:%d\n", npontosturisticos1);

    printf("Carta 02:\n");
    printf("Estado:%s\n", estado2);
    printf("Código:%s\n", codigodacarta2);
    printf("Nome da Cidade:%s\n", nomedacidade2);
    printf("População:%d\n", populacao2);
    printf("Área:%f\n", area2);
    printf("PIB:%f\n", PIB2);
    printf("Número de Pontos Turísticos:%d\n", npontosturisticos2);

    return 0;
 }
