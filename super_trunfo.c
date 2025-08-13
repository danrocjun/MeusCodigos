/*
Rio de Janeiro, 13/08/2025.

Este código foi desenvolvido para permitir a inserção e armazenamento dos atributos de 2 cartas do jogo Super Trunfo de Países.
Foi desenvolvido em C.


[Curso Ciência da Computação]

Aluno: Daniel Rocha Júnior
Turma: 9001
Matrícula: 202508049686

*/

#include <stdio.h>
int main(){
    
    // Declaração de variáveis

    char card01_estado; //  Uma letra de 'A' a 'H' (representando um dos oito estados)
    char card01_cod_carta[4];// A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char card01_cidade[20];// O nome da cidade
    int card01_populacao; // O número de habitantes da cidade
    float card01_area; //  A área da cidade em quilômetros quadrados
    float card01_PIB; // O Produto Interno Bruto da cidade
    int card01_num_pontos_tur; // : A quantidade de pontos turísticos na cidade

    char card02_estado; //  Uma letra de 'A' a 'H' (representando um dos oito estados)
    char card02_cod_carta[3];// A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char card02_cidade[20];// O nome da cidade
    int card02_populacao; // O número de habitantes da cidade
    float card02_area; //  A área da cidade em quilômetros quadrados
    float card02_PIB; // O Produto Interno Bruto da cidade
    int card02_num_pontos_tur; // : A quantidade de pontos turísticos na cidade



   printf("\nBem vindo a configuração das cartas do jogo Super Trunfo de Países!!\n\nInsira os atributos da primeira carta:\n\n");


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
   printf("Digite o PIB:");
   scanf("%f",&card01_PIB);   
   printf("Digite o número de pontos turísticos:");
   scanf("%d",&card01_num_pontos_tur);            



   // Saída de dados

   printf("\n\nCarta1:\n\n");

   printf("Estado: %c\n",card01_estado);
   printf("Código: %c%s\n",card01_estado,card01_cod_carta);
   printf("Nome da Cidade: %s\n",card01_cidade);
   printf("População: %d habitantes\n",card01_populacao);
   printf("Área: %.2f km2\n",card01_area);
   printf("PIB: %.2f bilhões de reais\n",card01_PIB);
   printf("Número de pontos turísticos: %d\n",card01_num_pontos_tur);


   printf("\n\nInsira os atributos da segunda carta:\n\n");

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
   printf("Digite o PIB:");
   scanf("%f",&card02_PIB);   
   printf("Digite o número de pontos turísticos:");
   scanf("%d",&card02_num_pontos_tur);            

    // Saída de dados

   printf("\n\nCarta2:\n\n");

   printf("Estado: %c\n",card02_estado);
   printf("Código: %c%s\n",card02_estado,card02_cod_carta);
   printf("Nome da Cidade: %s\n",card02_cidade);
   printf("População: %d habitantes\n",card02_populacao);
   printf("Área: %.2f km2\n",card02_area);
   printf("PIB: %.2f bilhões de reais\n",card02_PIB);
   printf("Número de pontos turísticos: %d\n",card02_num_pontos_tur);














}
