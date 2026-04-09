#include <stdio.h>

int main()  {
    // Carta 1
    char cidade1[50];
    char estado1[50];
    char codigo1[4];
    unsigned int populacao1;
    int pturistico1;
    float area1, pib1;

    // Carta 2
    char cidade2[50];
    char estado2[50]; 
    char codigo2[4];
    unsigned int populacao2;
    int pturistico2; 
    float area2, pib2;

    printf("Digite o nome da PRIMEIRA cidade: \n");
    scanf("%s", cidade1);

    printf("Digite o código da primeira cidade: \n");
    scanf("%s", codigo1);
    
    printf("Digite o nome do estado dessa cidade: \n");
    scanf("%s", estado1);

    printf("digite a populaçao da primeira cidade: \n");
    scanf("%u", &populacao1);

    printf("Digite a quantidade de pontos turísticos da primeira cidade: \n");
    scanf("%d", &pturistico1);

    printf("Digite a área da primeira cidade: \n");
    scanf("%f", &area1);

    printf("Digite o pib da primeira cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o nome da SEGUNDA cidade: \n"); //segunda cidade
    scanf("%s", cidade2);

    printf("Digite o código da segunda cidade: \n");
    scanf("%s", codigo2);
    
    printf("Digite o nome do estado dessa cidade: \n");
    scanf("%s", estado2);

    printf("digite a populaçao da segunda cidade: \n");
    scanf("%u", &populacao2);

    printf("Digite a quantidade de pontos turísticos dessa cidade: \n");
    scanf("%d", &pturistico2);

    printf("Digite a área da segunda cidade: \n");
    scanf("%f", &area2);

    printf("Digite o pib da segunda cidade: \n");
    scanf("%f", &pib2);
 
    // Agora calculamos o PIB per capita
    float percapta1 = pib1 / populacao1;
    float percapta2 = pib2 / populacao2;
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float superpoder1 = (float)populacao1 + (float)pturistico1 + area1 + pib1 + percapta1; 
    float superpoder2 = (float)populacao2 + (float)pturistico2 + area2 + pib2 + percapta2;

    printf("\n--- Dados da Cidade 1 ---\n");
    printf("Cidade: %s\n", cidade1);
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", pturistico1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("o pib percapta da primeira cidade é: %.2f \n", percapta1);
    printf("A densidade populacional é %.2f \n", densidade1);
    printf("O super poder é %.2f \n", superpoder1);


    printf("\n--- Dados da Cidade 2 ---\n");
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pturistico2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões\n", pib2);
    printf("O pib percapta da segunda cidade é: %f \n", percapta2);
    printf("A densidade populacional é %.2f \n", densidade2);
    printf("O super poder é %.2f \n", superpoder2);

    //comparações:
    printf("\n--- Comparações das cartas --- \n");
    printf("População: %d\n", populacao1 > populacao2 ? 1 : 0);
    printf("Pontos turísticos: %d\n", pturistico1 > pturistico2 ? 1 : 0);
    printf("Área: %d\n", area1 > area2 ? 1 : 0);
    printf("Pib: %d\n", pib1 > pib2 ? 1 : 0);
    printf("Densidade populacional: %d\n", densidade1 < densidade2 ? 1 : 0);
    printf("O super poder: %d", superpoder1 > superpoder2 ? 1 : 0);

    return 0;

   }
   
   