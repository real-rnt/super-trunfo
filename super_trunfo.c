#include <stdio.h>
#include <locale.h>

float calculoDensidade(int populacao, float area);
float calculoPib(int populacao, float pib);

int main(){
    //define o encoding
    setlocale(LC_ALL, "pt_BR.UTF-8");

    //primeira carta
    char estado1, codigoCarta1[40], nomeCidade1[40];
    int populacao1, numeroPontosTuristicos1;
    float areaKmQuadrado1, pib1;

    //segunda carta
    char estado2, codigoCarta2[40], nomeCidade2[40];
    int populacao2, numeroPontosTuristicos2;
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
    scanf("%d", &populacao1);
    printf("Digite a área da cidade em quilometros quadrados, ex(1500,10): ");
    scanf("%f", &areaKmQuadrado1);
    printf("O produto interno bruto da cidade: "); 
    scanf("%f", &pib1);
    printf("A quantidade de pontos turísticos da cidade: ");
    scanf("%d", &numeroPontosTuristicos1);

    //coleta de dados da segunda carta
    printf("Perfeito!! Agora vamos inserir os dados da segunda carta:\n");

    printf("Digite uma letra de 'A' a 'H' para representar o estado da sua carta: ");
    scanf("%c", &estado2);
    printf("Digite o código da sua carta(letra do estado seguido de um número de 01 a 04): ");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da cidade referente a carta: ");
    scanf("%s", nomeCidade2);
    printf("Digite o número de habitantes da sua cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade em quilometros quadrados, ex(1500,10): ");
    scanf("%f", &areaKmQuadrado2);
    printf("O produto interno bruto da cidade em bilhões de reais: "); 
    scanf("%f", &pib2);
    printf("A quantidade de pontos turísticos da cidade: ");
    scanf("%d", &numeroPontosTuristicos2);

    //dados específicos    
    float densidade1 = calculoDensidade(populacao1, areaKmQuadrado1);
    float pibPerCapita1 = calculoPib(populacao1, pib1);
    float densidade2 = calculoDensidade(populacao2, areaKmQuadrado2);
    float pibPerCapita2 = calculoPib(populacao2, pib2);

    //print dos dados das cartas
    printf("Tudo pronto! essas são suas cartas:\n");
    printf("Carta 1:\nEstado: %c \nCódigo: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %f km² \nPIB: %f bilhões de reais \nNúmero de Pontos Turísticos: %d\nDensidade populacional: %.2f hab/km2 \nPIB per Capita : %.2f reais \n", estado1, codigoCarta1, nomeCidade1, populacao1, areaKmQuadrado1, pib1, numeroPontosTuristicos1, densidade1, pibPerCapita1);
    printf("\n");
    printf("Carta 2:\nEstado: %c \nCódigo: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %f km² \nPIB: %f bilhões de reais \nNúmero de Pontos Turísticos: %d\nDensidade populacional: %.2f hab/km2 \nPIB per Capita : %.2f reais \n", estado2, codigoCarta2, nomeCidade2, populacao2, areaKmQuadrado2, pib2, numeroPontosTuristicos2, densidade2, pibPerCapita2);
}

//lógicas
float calculoDensidade(int populacao, float area){
    return populacao / area;
};

float calculoPib(int populacao, float pib){
    return pib / populacao;
};