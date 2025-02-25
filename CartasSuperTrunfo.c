#include <stdio.h>

int main() {

    char Estado1[10], Estado2[10];
    char Cod_Carta1 [3], Cidade1 [50], Cod_Carta2 [3], Cidade2 [50];
    int Populacao1, Populacao2;
    int Num_Pontos_Turisticos1, Num_Pontos_Turisticos2;
    float Area1, Area2;
    float PIB1, PIB2;

    printf ("Carta 1\n");
    printf ("\n");
    
    printf ("Digite uma letra ( A - H ) para o Estado da Carta 1:\n");
    scanf("%s", &Estado1);

    printf ("Digite o código da Carta 1 iniciando com a mesma letra do Estado, (01 - 04):\n");
    scanf ("%s", &Cod_Carta1);

    printf ("Digite o nome da cidade da Carta 1:\n");
    scanf ("%s", &Cidade1);

    printf ("Digite a população da cidade da Carta 1:\n");
    scanf ("%d", &Populacao1);

    printf ("Digite a área da cidade da Carta 1:\n");
    scanf ("%f", &Area1);

    printf ("Digite o PIB da cidade da Carta 1:\n");
    scanf ("%f", &PIB1);

    printf ("Digite o número de pontos turísticos da cidade da Carta 1:\n");
    scanf ("%d", &Num_Pontos_Turisticos1);
    printf ("\n");

    printf("CARTA 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Código da Carta: %s\n", Cod_Carta1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área (km²): %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Num_Pontos_Turisticos1);
    printf ("\n");


    printf ("Carta 2\n");
    printf ("\n");
    
    printf ("Digite uma letra ( A - H ) para o Estado da Carta 2:\n");
    scanf("%s", &Estado2);

    printf ("Digite o código da Carta 2 iniciando com a mesma letra do Estado, (01 - 04):\n");
    scanf ("%s", &Cod_Carta2);

    printf ("Digite o nome da cidade da Carta 2:\n");
    scanf ("%s", &Cidade2);

    printf ("Digite a população da cidade da Carta 2:\n");
    scanf ("%d", &Populacao2);

    printf ("Digite a área da cidade da Carta 2:\n");
    scanf ("%f", &Area2);

    printf ("Digite o PIB da cidade da Carta 2:\n");
    scanf ("%f", &PIB2);

    printf ("Digite o número de pontos turísticos da cidade da Carta 2:\n");
    scanf ("%d", &Num_Pontos_Turisticos2);
    printf ("\n");

    printf("CARTA 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %s\n", Cod_Carta2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área (km²): %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Num_Pontos_Turisticos2);
    
    return 0;
}
