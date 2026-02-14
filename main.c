#include <stdio.h>

int main(){
    // Card 1 attributes
    char letterOneState[2];
    char letterOneMailCode[4];
    char letterOneCityName[50];
    int letterOnePopulationSize;
    float letterOneCitySize;
    float letterOneGDP;
    int letterOneNumberOfTouristAttractions;
    
    // Card 2 attributes
    char letterTwoState[2];
    char letterTwoMailCode[4];
    char letterTwoCityName[50];
    int letterTwoPopulationSize;
    float letterTwoCitySize;
    float letterTwoGDP;
    int letterTwoNumberOfTouristAttractions;

    printf("\n");
    printf("Super Trunfo:\n");
    printf("Por favor insira os dados da primeira carta:\n");

    printf("Insira o código do estado (A-H):\n");
    scanf(" %c", &letterOneState[0]);

    printf("Insira o código da carta (ex: A01):\n");
    scanf(" %s", letterOneMailCode);
    getchar(); // Consome o '\n' deixado pelo scanf

    printf("Insira o nome da cidade (até 15 caracteres):\n");
    fgets(letterOneCityName, sizeof(letterOneCityName) - 1, stdin);

    printf("Insira a população (Ex: 1000000):\n");
    scanf(" %d", &letterOnePopulationSize);

    printf("Insira a área (Ex: 1000.5):\n");
    scanf(" %f", &letterOneCitySize);

    printf("Insira o PIB (em bilhões de reais ex: 100.5):\n");
    scanf(" %f", &letterOneGDP);

    printf("Insira o número de pontos turísticos (Ex: 10):\n");
    scanf(" %d", &letterOneNumberOfTouristAttractions);

    printf("\n ---------- \n\n");
    printf("Por favor insira os dados da segunda carta:\n");

    printf("Insira o código do estado (A-H):\n");
    scanf(" %c", &letterTwoState[0]);

    printf("Insira o código da carta (ex: B02):\n");
    scanf(" %s", letterTwoMailCode);
    getchar(); // Consome o '\n' deixado pelo scanf

    printf("Insira o nome da cidade (até 15 caracteres):\n");
    fgets(letterTwoCityName, sizeof(letterTwoCityName) - 1, stdin);

    printf("Insira a população (Ex: 1000000):\n");
    scanf(" %d", &letterTwoPopulationSize);

    printf("Insira a área (Ex: 1000.5):\n");
    scanf(" %f", &letterTwoCitySize);

    printf("Insira o PIB (em bilhões de reais ex: 100.5):\n");
    scanf(" %f", &letterTwoGDP);

    printf("Insira o número de pontos turísticos (Ex: 10):\n");
    scanf(" %d", &letterTwoNumberOfTouristAttractions);

    printf("\n ---------- \n\n");
    printf("Cartas cadastradas com sucesso!\n");

    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", letterOneState[0]);
    printf("Código: %s\n", letterOneMailCode);
    printf("Nome da Cidade: %s\n", letterOneCityName);
    printf("População: %d\n", letterOnePopulationSize);
    printf("Área: %f km²\n", letterOneCitySize);
    printf("PIB: %f bilhões de reais\n", letterOneGDP);
    printf("Número de Pontos Turísticos: %d\n", letterOneNumberOfTouristAttractions);
    
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", letterTwoState[0]);
    printf("Código: %s\n", letterTwoMailCode);
    printf("Nome da Cidade: %s\n", letterTwoCityName);
    printf("População: %d\n", letterTwoPopulationSize);
    printf("Área: %f km²\n", letterTwoCitySize);
    printf("PIB: %f bilhões de reais\n", letterTwoGDP);
    printf("Número de Pontos Turísticos: %d\n", letterTwoNumberOfTouristAttractions);
    printf("\n");
}