#include <stdio.h>

    int main() {

    printf("Desafio Super Trunfo - Países \n");
      
    
        char estado[50];
        char codigo[50];
        char cidade[50];
        int populacao;
        float area;
        float pib;
        int pontosturisticos;
        float densidadepopulacional;
        float pibpercapta;
    
        // Carta 1
        printf("Carta 1\n");
        printf("Informe o estado:\n");
        scanf("%s", &estado);
    
        printf("Informe o código da carta:\n");
        scanf("%s", &codigo);
    
        printf("Informe o nome da cidade:\n");
        scanf("%s", &cidade);
    
        printf("Informe a população:\n");
        scanf("%d", &populacao);
    
        printf("Informe a área:\n");
        scanf("%f", &area);
    
        printf("Informe o PIB:\n");
        scanf("%f", &pib);
    
        printf("Informe os números de pontos turísticos:\n");
        scanf("%d", &pontosturisticos);
    
        // Cálculos
        densidadepopulacional = populacao / area;
        pibpercapta = pib * 1000000000 / populacao;
    
        densidadepopulacional = 100000000 / densidadepopulacional;
    
        // Inverter a densidade populacional
        int numero_invertido = (int)densidadepopulacional; 
    
    
        // Dados a Serem Exibidos
        printf("Carta 1\n");
        printf(" Estado: %s\n Código da carta: %s\n Nome da cidade: %s\n População: %d\n", estado, codigo, cidade, populacao);
        printf(" Área: %.2f km²\n PIB: R$%.2f Bilhoes de reais\n Pontos turísticos: %d\n", area, pib, pontosturisticos);
        printf(" Densidade populacional: %.2f hab/km²\n Pib per capita: R$%.2f reais\n", densidadepopulacional, pibpercapta);
    
        // Calcular o super poder
        float poder1 = populacao + area + pib + pontosturisticos + pibpercapta + numero_invertido;
        printf(" Super Poder: %d\n", poder1);
    
            int populacao2;
            float area2;
            float pib2;
            int pontosturisticos2;
            float densidadepopulacional2;
            float pibpercapta2;
    
        // Carta 2
        printf("Carta 2\n");
        printf("Informe o estado:\n");
        scanf("%s", &estado);
    
        printf("Informe o código da carta:\n");
        scanf("%s", &codigo);
    
        printf("Informe o nome da cidade:\n");
        scanf("%s", &cidade);
    
        printf("Informe a população:\n");
        scanf("%d", &populacao2);
    
        printf("Informe a área:\n");
        scanf("%f", &area2);
    
        printf("Informe o PIB:\n");
        scanf("%f", &pib2);
    
        printf("Informe os números pontos de turísticos:\n");
        scanf("%d", &pontosturisticos2);
    
        // Cálculos
        densidadepopulacional2 = populacao2 / area2;
        pibpercapta2 = pib2 * 1000000000 / populacao2;
        
        densidadepopulacional2 = 100000000 / densidadepopulacional2;
    
        // Inverter a densidade populacional
        int numero_invertido2 = (int)densidadepopulacional2;
        
        // Dados a Serem Exibidos
        printf("Carta 2\n");
        printf(" Estado: %s\n Código da carta: %s\n Nome da cidade: %s\n População: %d\n", estado, codigo, cidade, populacao2);
        printf(" Área: %.2f km²\n PIB: R$%.2f Bilhoes de reais\n Pontos turísticos: %d\n", area2, pib2, pontosturisticos2);
        printf(" Densidade populacional: %.2f hab/km²\n Pib per capita: R$%.2f reais\n", densidadepopulacional2, pibpercapta2);
    
        // Calcular o super poder
        int poder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapta2 + numero_invertido2;
        printf(" Super poder: %d\n", poder2);
    
       // Comparação

       
        if(populacao > populacao2){ 
            printf("População 1 venceu! \n");
        }else{
            printf("População 2 venceu! \n");
        }
        if(area > area2){
            printf("Área 1 venceu! \n");
        }else{
            printf("Área 2 venceu! \n");
        }
        if (pib > pib2){
            printf("Pib 1 venceu! \n");
        }else{
            printf("Pib 2 venceu! \n");
        }
        if (pontosturisticos > pontosturisticos2){
            printf("Pontos Turísticos 1 venceu! \n");
        }else{
            printf("pontos Turísticos 2 venceu! \n");
        }
        if(densidadepopulacional < densidadepopulacional2){
            printf("Densidade populacional 1 venceu! \n");
        }else{
            printf("Densidade populacional 2 venceu! \n");
        }
        if(pibpercapta > pibpercapta2){
            printf("Pib per Capta 1 venceu! \n");
        }else{
            printf("Pib per Capta 2 venceu! \n");
        }
        if(poder1 > poder2){
            printf("Super Poder 1 venceu! \n");
        }else{
            printf("Super Poder 2 venceu! \n");
        }
    
        if(poder1 > poder2){
            printf("A cidade 1 venceu a disputa final!\n");
        }else if(poder1 < poder2){
            printf("A cidade 2 venceu a disputa final!\n");
        }else{
            printf("Houve um empate!\n");
        }
    
    return 0;
}
