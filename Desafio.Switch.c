#include <stdio.h>

int main() {
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pTuristico1, pTuristico2;
    float densidade1, densidade2;
    int escolha;
   

    //entrada de dados para o primeiro país

    printf("Digite o nome do primeiro país:\n");
    scanf("%s", nome1);
    printf("Digite a população de %s:\n", nome1);
    scanf("%d", &populacao1);
    printf("Digite a área da cidade %s:\n ", nome1);
    scanf("%f", &area1);
    printf("Digite o BIB de %s (km^2):\n", nome1);
    scanf("%d", &pib1);
    printf("Digite o número de pontos turisticos de %s:\n", nome1);
    scanf("%d", &pTuristico1);
    printf("Digite a densidade demográfica de %s:\n", nome1);
    scanf("%f", &densidade1);

    //entrada de dados para o segundo país

    printf("Digite o nome do segundo país:\n");
    scanf("%s", nome2);
    printf("Digite a população de %s:\n", nome2);
    scanf("%d", &populacao2);
    printf("Digite a área da cidade %s:\n ", nome2);
    scanf("%f", &area2);
    printf("Digite o BIB de %s (km^2):\n", nome2);
    scanf("%d", &pib2);
    printf("Digite o número de pontos turisticos de %s:\n", nome2);
    scanf("%d", &pTuristico2);
    printf("Digite a densidade demográfica de %s:\n", nome2);
    scanf("%f", &densidade2);

    //menu interativo

    printf("#### Menu de comparação das cartas: ####\n ");
    printf("1 - população\n");
    printf("2 - Área\n");
    printf("3 - Pib \n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o atributo para comparação:\n ");
    scanf("%d", &escolha);

    printf("\n #### Comparação: %s vs %s ####\n", nome1, nome2);

    switch (escolha)
    {
    case 1:
        printf("Atributo: população.\n");
        printf("%s: %d habitantes\n", nome1, populacao1);
        printf("%s: %d habitantes\n", nome2, populacao2);
        if (populacao1 > populacao2)
        {
            printf("Vencedor: %s\n", nome1);
        } else if (populacao2 > populacao1)
        {
            printf("Vencedor: %s\n", nome2);
        } else {
            printf("Empate!\n");
        }
        
         break;

    case 2:
        printf("Atributo: Área.\n");
        printf("%s: %f área:\n", nome1, area1);
        printf("%s: %f área\n", nome2, area2);
        if (area1 > area2)
        {
            printf("Vencedor: %s\n", nome1);
        } else if (area2 > area1)
        {
            printf("Vencedor: %s\n", nome2);
        } else {
            printf("Empate!\n");
        }
         break;
         
    case 3:
        printf("Atributo: PIB.\n");
        printf("%s: %f PIB:\n", nome1, pib1);
        printf("%s: %f PIB\n", nome2, pib2);
        if (pib1 > pib2)
        {
            printf("Vencedor: %s\n", nome1);
        } else if (pib2 > pib1)
        {
            printf("Vencedor: %s\n", nome2);
        } else {
            printf("Empate!\n");
        }       
         break;

    case 4:
        printf("Atributo: Pontos Turísticos.\n");
        printf("%s: %d Pontos Turísticos:\n", nome1, pTuristico1);
        printf("%s: %d área\n", nome2, pTuristico2);
        if (pTuristico1 > pTuristico2)
        {
            printf("Vencedor: %s\n", nome1);
        } else if (pTuristico2 > pTuristico1)
        {
            printf("Vencedor: %s\n", nome2);
        } else {
            printf("Empate!\n");
        }
        
         break;

    case 5:
        printf("Atributo: Densidade demográfica.\n");
        printf("%s: %f hab/km²\n", nome1, densidade1);      
        printf("%s: %f hab/km²\n", nome2, densidade2);
        if (densidade1 > densidade2 )
        {
            printf("Vencedor: %s\n", nome1);
        } else if (area2 > area1)
        {
            printf("Vencedor: %s\n", nome2);
        } else {
            printf("Empate!\n");
        }       
         break;

    default:
    printf("Opção inválida!");
    
    }

    return 0;

}
