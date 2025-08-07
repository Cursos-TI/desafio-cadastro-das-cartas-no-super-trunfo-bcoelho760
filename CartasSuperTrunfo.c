#include <stdio.h>

int main() {

    char estado1[30], estado2 [30], codigo1[10], codigo2[10], cidade1[30], cidade2[30];
    int população1, população2, turismo1, turismo2;
    float área1, área2, pib1, pib2;

    printf("Vamos registrar a primeira carta. \n");
    printf("Digite o nome do estado: \n");
    scanf("%s", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf("%d", &população1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &área1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos túristicos: \n");
    scanf("%d", &turismo1);

    printf("Estado: %s \n", estado1 );
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", população1);
    printf("Área: %f km² \n", área1);
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Pontos Túristicos: %d \n", turismo1);

    printf("Registro completo \n");
    printf("Vamos registrar a segunda carta. \n");

    printf("Digite o nome do estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população \n");
    scanf("%d", &população2);

    printf("Digite a área da cidade \n");
    scanf("%f", &área2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos túristicos: \n)");
    scanf("%d", &turismo2);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %f\n", cidade2);
    printf("População: %d\n", população2);
    printf("Área: %f km² \n", área2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Pontos Túristicos: %d\n", turismo2);

    printf("Registro completo \n");


    return 0;
}
