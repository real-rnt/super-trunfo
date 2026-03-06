#include <stdio.h>
#include <locale.h>

float calculoDensidade(int populacao, float area);
float calculoPib(int populacao, float pib);
float calculoSuperPoder(unsigned long int populacao, float area, float pib, int numeroPontosTuristicos, float pibPerCapita, float densidade);

int main(){
    //define o encoding
    setlocale(LC_ALL, "pt_BR.UTF-8");

    //primeira carta
    char estado1, codigoCarta1[40], nomeCidade1[40];
    int numeroPontosTuristicos1;
    unsigned long int populacao1;
    float areaKmQuadrado1, pib1;

    //segunda carta
    char estado2, codigoCarta2[40], nomeCidade2[40];
    int numeroPontosTuristicos2;
    unsigned long int populacao2;
    float areaKmQuadrado2, pib2;

    //saudações
    printf("Olá, seja bem vindo ao jogo super trunfo!\n");
    printf("Cadastre suas duas cartas para jogar!\n");

    //início da coleta de dados da primeira carta
    printf("Primeira carta:\n");

    printf("Digite uma letra de 'A' a 'H' para representar o estado da sua carta: ");
    scanf("%c", &estado1);
    printf("Digite o código da sua carta(letra do estado seguido de um número de 01 a 04): ");
    scanf("%s", codigoCarta1);
    printf("Digite o nome da cidade referente a carta: ");
    scanf("%s", nomeCidade1);
    printf("Digite o número de habitantes da sua cidade: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade em quilometros quadrados, ex(1500,10): ");
    scanf("%f", &areaKmQuadrado1);
    printf("O produto interno bruto da cidade: "); 
    scanf("%f", &pib1);
    printf("A quantidade de pontos turísticos da cidade: ");
    scanf("%d", &numeroPontosTuristicos1);

    //coleta de dados da segunda carta
    printf("Perfeito!! Agora vamos inserir os dados da segunda carta:\n");

    printf("Digite uma letra de 'A' a 'H' para representar o estado da sua carta: ");
    scanf(" %c", &estado2);
    printf("Digite o código da sua carta(letra do estado seguido de um número de 01 a 04): ");
    scanf(" %s", codigoCarta2);
    printf("Digite o nome da cidade referente a carta: ");
    scanf("%s", nomeCidade2);
    printf("Digite o número de habitantes da sua cidade: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade em quilometros quadrados, ex(1500,10): ");
    scanf("%f", &areaKmQuadrado2);
    printf("O produto interno bruto da cidade em bilhões de reais: "); 
    scanf("%f", &pib2);
    printf("A quantidade de pontos turísticos da cidade: ");
    scanf("%d", &numeroPontosTuristicos2);

    //dados específicos    
    float densidade1 = calculoDensidade(populacao1, areaKmQuadrado1);
    float pibPerCapita1 = calculoPib(populacao1, pib1);
    float superPoder1 = calculoSuperPoder(populacao1, areaKmQuadrado1, pib1, numeroPontosTuristicos1, pibPerCapita1, densidade1);
    float densidade2 = calculoDensidade(populacao2, areaKmQuadrado2);
    float pibPerCapita2 = calculoPib(populacao2, pib2);
    float superPoder2 = calculoSuperPoder(populacao2, areaKmQuadrado2, pib2, numeroPontosTuristicos2, pibPerCapita2, densidade2);

    //comparação das cartas
    printf("Comparação das cartas:\n");

        // População
    if (populacao1 > populacao2) {
        printf("Populacao: Carta 1 venceu (1)\n");
    } else {
        printf("Populacao: Carta 2 venceu (0)\n");
    }

    // Área
    if (areaKmQuadrado1 > areaKmQuadrado2) {
        printf("Area: Carta 1 venceu (1)\n");
    } else {
        printf("Area: Carta 2 venceu (0)\n");
    }

    // PIB
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }

    // Pontos turísticos
    if (numeroPontosTuristicos1 > numeroPontosTuristicos2) {
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");
    }

    // Densidade populacional (menor vence)
    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    // PIB per capita
    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    // Super poder
    if (superPoder1 > superPoder2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }


}

//lógicas
float calculoDensidade(int populacao, float area){
    return populacao / area;
};

float calculoPib(int populacao, float pib){
    return pib / populacao;
};

float calculoSuperPoder(unsigned long int populacao, float area, float pib, int numeroPontosTuristicos, float pibPerCapita, float densidade){
    return populacao + area + pib + numeroPontosTuristicos + pibPerCapita - densidade;
};