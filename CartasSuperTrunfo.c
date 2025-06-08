#include <stdio.h>


int main() {
    
    // Definindo as variáveis separadas para cada atributo da cidade 1;

    unsigned long int populacao1;
    int npontosturisticos1;
    float area1;
    float PIB1;
    char estado1[20], codigodacarta1[20], nomedacidade1[20], carta1[20];
    unsigned long int populacao2;
    int npontosturisticos2;
    float area2;
    float PIB2;
    char estado2[20], codigodacarta2[20], nomedacidade2[20], carta2[20];
    float ResultadoPIB, Resultadopopulacao, Resultadonpontosturisticos, Resultadoarea, Resultadoquociente1, Resultadoquociente2, ResultadoSuperPoder;
    float quociente1 = populacao1 / area1;
    float quociente2 = PIB1 / populacao1;
    float quociente3 = populacao2 / area2;
    float quociente4 = PIB2 / populacao2;
    float SuperPoder1 = (populacao1 + PIB1 + npontosturisticos1 + area1 + quociente1 + quociente2);
    float SuperPoder2 = (populacao2 + PIB2 + npontosturisticos2 + area2 + quociente3 + quociente4);
    ResultadoPIB = PIB1 > PIB2;
    Resultadopopulacao = populacao1 > populacao2;
    Resultadonpontosturisticos = npontosturisticos1 > npontosturisticos2;
    Resultadoarea = area1 > area2;
    Resultadoquociente1 = quociente1 < quociente3;
    Resultadoquociente2 = quociente2 > quociente4;
    ResultadoSuperPoder = SuperPoder1 > SuperPoder2;

    // Cadastrando as Cartas, utilizando a função scanf para a captura das entradas do usuário para cada atributo da carta;
    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o Código da carta: \n");
    scanf("%s", &codigodacarta1);

    printf("Digite o nome da cidade: \n");
    scanf ("%s", &nomedacidade1);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

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
    printf("População:%lu\n", populacao1);
    printf("Área:%.2f Km2\n", area1);
    printf("PIB:%.2f Bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos:%d\n", npontosturisticos1);
    printf("Densidade populacional:%.2f hab/km2\n", quociente1);
    printf("Pib per Capta:%.2f reais\n\n", quociente2);

    printf("Carta 02:\n");
    printf("Estado:%s\n", estado2);
    printf("Código:%s\n", codigodacarta2);
    printf("Nome da Cidade:%s\n", nomedacidade2);
    printf("População:%lu\n", populacao2);
    printf("Área:%.2f km2\n", area2);
    printf("PIB:%.2f Bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos:%d\n", npontosturisticos2);
    printf("Densidade populacional:%.2f hab/km2\n", quociente3);
    printf("Pib per Capta:%.2f reais\n\n", quociente4);

    // Comparação entre as cartas

    printf("Comparação entre as cartas:\n");
    printf("População: Carta1 venceu:%d\n", Resultadopopulacao);
    printf("PIB: Carta1 venceu:%d\n", ResultadoPIB);
    printf("Pontos Turísticos: Carta1 venceu:%d\n", Resultadonpontosturisticos);
    printf("Área: Carta1 venceu:%d\n", Resultadoarea);
    printf("Densidade Populacional: Carta1 venceu:%d\n", Resultadoquociente1);
    printf("PIB per Capta: Carta1 venceu:%d\n", Resultadoquociente2);
    printf("SuperPoder: Carta1 venceu:%d\n", ResultadoSuperPoder);

    return 0;
 }
