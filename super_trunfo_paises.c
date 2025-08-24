/*
13/08/2025

Este código foi desenvolvido para permitir a inserção e armazenamento dos atributos de 2 cartas do jogo Super Trunfo de Países.
Foi desenvolvido em C.

20/08/2025
Complementação do código anterior com os cálculos de densidade populacional e PIB per capita.

22/08/2025
Complementação do código anterior com os cálculos de densidade populacional invertida e super poder.
Resultado de comparações de cartas.


[Curso Ciência da Computação]

Aluno: Daniel Rocha Júnior
Turma: 9001
Matrícula: 202508049686

*/

#include <stdio.h>
int main(){
    
    // Declaração de variáveis

    char card01_estado; //  Uma letra de 'A' a 'H' (representando um dos oito estados)
    char card01_cod_carta[3];// A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char card01_cidade[20];// O nome da cidade
    int card01_populacao; // O número de habitantes da cidade
    float card01_area; //  A área da cidade em quilômetros quadrados
    float card01_PIB; // O Produto Interno Bruto da cidade
    int card01_num_pontos_tur; // : A quantidade de pontos turísticos na cidade
    float card01_densid_pop; // Dennsidade populacional
    float card01_PIB_per_cap; // PIB per capita
    float card01_densid_pop_inv; // Inverso da densidade populacional
    float card01_super_poder; // Super poder

    char card02_estado; //  Uma letra de 'A' a 'H' (representando um dos oito estados)
    char card02_cod_carta[3];// A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char card02_cidade[20];// O nome da cidade
    int card02_populacao; // O número de habitantes da cidade
    float card02_area; //  A área da cidade em quilômetros quadrados
    float card02_PIB; // O Produto Interno Bruto da cidade
    int card02_num_pontos_tur; // : A quantidade de pontos turísticos na cidade
    float card02_densid_pop; // Dennsidade populacional
    float card02_PIB_per_cap; // PIB per capita
    float card02_densid_pop_inv; // Inverso da densidade populacional
    float card02_super_poder; // Super poder

  // 13/08/25
  

   printf("\nBem vindo a configuração das cartas do jogo Super Trunfo de Países!!\n\nInsira os atributos da primeira carta:\n\n");

   
   // Carta 01:

   // Entrada de dados
   printf("Digite o estado [A - H]:");
   scanf(" %c",&card01_estado);
   printf("Digite o código da carta [01 - 04]:");
   scanf("%s",card01_cod_carta);
   printf("Digite o nome da cidade:");
   scanf("%s",card01_cidade); 
   printf("Digite a população (habitantes):");
   scanf("%d",&card01_populacao); 
   printf("Digite a área do estado (em km2):");
   scanf("%f",&card01_area);    
   printf("Digite o PIB (em bilhões de reais):");
   scanf("%f",&card01_PIB);   
   printf("Digite o número de pontos turísticos:");
   scanf("%d",&card01_num_pontos_tur);    

   // 20/08/25
   
   // Cálculo da densidade populacional
   card01_densid_pop = (float)card01_populacao / card01_area;

   // Cálculo do PIB per capita
   card01_PIB_per_cap = (float)card01_PIB*1000000000 / card01_populacao;


  // 22/08/25

  // Cálculo do inverso da densidade populacional
  card01_densid_pop_inv = 1/card01_densid_pop;

  // Cálculo do Super Poder
  card01_super_poder = (float)(card01_populacao + card01_area + card01_PIB + card01_num_pontos_tur + card01_PIB_per_cap + card01_densid_pop_inv);
     
    
   // Saída de dados

   printf("\n\nCarta1:\n\n");

   printf("Estado: %c\n",card01_estado);
   printf("Código: %c%s\n",card01_estado,card01_cod_carta);
   printf("Nome da Cidade: %s\n",card01_cidade);
   printf("População: %d habitantes\n",card01_populacao);
   printf("Área: %.2f km2\n",card01_area);
   printf("PIB: %.2f bilhões de reais\n",card01_PIB);
   printf("Número de pontos turísticos: %d\n",card01_num_pontos_tur);
   printf("Densidade populacional: %.2f hab/km2\n",card01_densid_pop);
   printf("PIB per capita: %.2f reais\n",card01_PIB_per_cap);
   printf("Super Poder: %.1f\n",card01_super_poder);
   
  

   
   

   printf("\n\nInsira os atributos da segunda carta:\n\n");

   // Carta 02:

   // Entrada de dados
   printf("Digite o estado [A - H]:");
   scanf(" %c",&card02_estado);
   printf("Digite o código da carta [01 - 04]:");
   scanf("%s",card02_cod_carta);
   printf("Digite o nome da cidade:");
   scanf("%s",card02_cidade); 
   printf("Digite a população (habitantes):");
   scanf("%d",&card02_populacao); 
   printf("Digite a área do estado (em km2):");
   scanf("%f",&card02_area);    
   printf("Digite o PIB (em bilhões de reais):");
   scanf("%f",&card02_PIB);   
   printf("Digite o número de pontos turísticos:");
   scanf("%d",&card02_num_pontos_tur);    
   
   // 20/08/25

   // Cálculo da densidade populacional
   card02_densid_pop = (float)card02_populacao / card02_area;

  // Cálculo do PIB per capita
   card02_PIB_per_cap = (float)card02_PIB*1000000000 / card02_populacao;

  // 22/08/25

  // Cálculo do inverso da densidade populacional
  card02_densid_pop_inv =(float)1/card02_densid_pop;
  
  // Cálculo do Super Poder  
  card02_super_poder = (float)(card02_populacao + card02_area + card02_PIB + card02_num_pontos_tur + card02_PIB_per_cap + card02_densid_pop_inv);
     



   // Saída de dados

   printf("\n\nCarta2:\n\n");

   printf("Estado: %c\n",card02_estado);
   printf("Código: %c%s\n",card02_estado,card02_cod_carta);
   printf("Nome da Cidade: %s\n",card02_cidade);
   printf("População: %d habitantes\n",card02_populacao);
   printf("Área: %.2f km2\n",card02_area);
   printf("PIB: %.2f bilhões de reais\n",card02_PIB);
   printf("Número de pontos turísticos: %d\n",card02_num_pontos_tur);
   printf("Densidade populacional: %.2f hab/km2\n",card02_densid_pop);
   printf("PIB per capita: %.2f reais\n",card02_PIB_per_cap);
   printf("Super Poder: %.1f\n",card02_super_poder);

   // 22/08/25

   // Carta vencedora

   /*

   printf("\nComparação das cartas\n");
   printf("_________________________\n\n");

   printf("População:Carta 1 venceu! (%d)\n",card01_populacao>card02_populacao);
   printf("Área:Carta 1 venceu! (%d)\n",card01_area>card02_area);
   printf("PIB:Carta 1 venceu! (%d)\n",card01_PIB>card02_PIB);
   printf("Pontos turísticos:Carta 1 venceu! (%d)\n",card01_num_pontos_tur>card02_num_pontos_tur);
   printf("Densidade populacional:Carta 2 venceu! (%d)\n",card01_densid_pop<card02_densid_pop);
   printf("PIB per capita:Carta 1 venceu! (%d)\n",card01_PIB_per_cap>card02_PIB_per_cap);
   printf("Super Poder:Carta 1 venceu! (%d)\n",card01_super_poder>card02_super_poder);

*/

 // 24/08/25

 /*
 Comparação utlizando o if-else
 */

printf("\n*****Resultado do jogo*****\n\n");

 //Atributo população

 if (card01_populacao>card02_populacao){
  printf("Para o atributo população Carta 1 venceu!!\n\n");
 }else{
  printf("Para o atributo população Carta 2 venceu!!\n\n");
 }

  //Atributo PIB

 if (card01_PIB>card02_PIB){
  printf("Para o atributo PIB Carta 1 venceu!!\n\n");
 }else{
  printf("Para o atributo PIB Carta 2 venceu!!\n\n");
 }

  //Atributo densidade populacional

 if (card01_densid_pop<card02_densid_pop){
  printf("Para o atributo densidade populacional Carta 1 venceu!!\n\n");
 }else{
  printf("Para o atributo densidade populacional Carta 2 venceu!!\n\n");
 }

 //Atributo PIB per capita

 if (card01_PIB_per_cap>card02_PIB_per_cap){
  printf("Para o atributo PIB per capita Carta 1 venceu!!\n\n");
 }else{
  printf("Para o atributo PIB per capita Carta 2 venceu!!\n\n");
 }

  //Atributo pontos turísticos

 if (card01_num_pontos_tur>card02_num_pontos_tur){
  printf("Para o atributo pontos turísticos Carta 1 venceu!!\n\n");
 }else{
  printf("Para o atributo pontos turísticos Carta 2 venceu!!\n\n");
 }

 //Atributo área

 if (card01_area>card02_area){
  printf("Para o atributo área Carta 1 venceu!!\n");
 }else{
  printf("Para o atributo área Carta 2 venceu!!\n");
 }

  printf("\n*****Fim do jogo*****\n");


 return 0;







}