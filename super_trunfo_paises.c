/*
13/08/2025

Este código foi desenvolvido para permitir a inserção e armazenamento dos atributos de 2 cartas do jogo Super Trunfo de Países.
Foi desenvolvido em C.

20/08/2025
Complementação do código anterior com os cálculos de densidade populacional e PIB per capita.

22/08/2025
Complementação do código anterior com os cálculos de densidade populacional invertida e super poder.
Resultado de comparações de cartas.

09/09/2025
Complementação do código anterior para permitir a seleção do atributo para competir no jogo.

10/09/2025
Complementação do código com a opção de escolha de 2 atributos.


[Curso Ciência da Computação]

Aluno: Daniel Rocha Júnior
Turma: 9001
Matrícula: 202508049686

*/

#include <stdio.h>
int main(){
    
    // Declaração de variáveis

    char card01_codigo; //  Uma letra de 'A' a 'H' (representando um dos oito codigos)
    char card01_codigo_carta[3];// A letra do codigo seguida de um número de 01 a 04 (ex: A01, B03)
    char card01_pais[20];// O nome da pais
    int card01_populacao; // O número de habitantes do país
    float card01_area; //  A área da pais em quilômetros quadrados
    float card01_PIB; // O Produto Interno Bruto do país
    int card01_num_pontos_tur; // : A quantidade de pontos turísticos no país
    float card01_densid_pop; // Densidade populacional
    float card01_PIB_per_cap; // PIB per capita
    float card01_densid_pop_inv; // Inverso da densidade populacional
    float card01_super_poder; // Super poder

    char card02_codigo; //  Uma letra de 'A' a 'H' (representando um dos oito codigos)
    char card02_codigo_carta[3];// A letra do codigo seguida de um número de 01 a 04 (ex: A01, B03)
    char card02_pais[20];// O nome da pais
    int card02_populacao; // O número de habitantes do país
    float card02_area; //  A área do país em quilômetros quadrados
    float card02_PIB; // O Produto Interno Bruto do pais
    int card02_num_pontos_tur; // : A quantidade de pontos turísticos no pais
    float card02_densid_pop; // Densidade populacional
    float card02_PIB_per_cap; // PIB per capita
    float card02_densid_pop_inv; // Inverso da densidade populacional
    float card02_super_poder; // Super poder

    int atrib_01, atrib_02; // seleção do atributo da rodada
    int resul_atrib01, resul_atrib02;// armazena o resultado lógico das comparações
    float card01_atrib01,card01_atrib02; // armazena os valores dos atributos selecionados da carta 01
    float card02_atrib01,card02_atrib02; // armazena os valores dos atributos selecionados da carta 02
  // 13/08/25
  

   printf("\nBem vindo a configuração das cartas do jogo Super Trunfo de Países!!\n\nInsira os atributos da primeira carta:\n\n");

   
   // Carta 01:

   // Entrada de dados
   printf("Digite o código [A - H]:");
   scanf(" %c",&card01_codigo);
   printf("Digite o código da carta [01 - 04]:");
   scanf("%s",card01_codigo_carta);
   printf("Digite o nome do país:");
   scanf("%s",card01_pais); 
   printf("Digite a população (habitantes):");
   scanf("%d",&card01_populacao); 
   printf("Digite a área do país (em km2):");
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

   printf("Código: %c\n",card01_codigo);
   printf("Código da carta: %c%s\n",card01_codigo,card01_codigo_carta);
   printf("Nome do país: %s\n",card01_pais);
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
   printf("Digite o código [A - H]:");
   scanf(" %c",&card02_codigo);
   printf("Digite o código da carta [01 - 04]:");
   scanf("%s",card02_codigo_carta);
   printf("Digite o nome da país:");
   scanf("%s",card02_pais); 
   printf("Digite a população (habitantes):");
   scanf("%d",&card02_populacao); 
   printf("Digite a área do país (em km2):");
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

   printf("Código: %c\n",card02_codigo);
   printf("Código da carta: %c%s\n",card02_codigo,card02_codigo_carta);
   printf("Nome do país: %s\n",card02_pais);
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

*/

/*
09/09/25
Seleção de um atributo para comparação

printf("\n\nEscolha o atributo da rodada conforme abaixo:\n");
printf("1.População.\n");
printf("2.Área.\n");
printf("3.PIB.\n");
printf("4.Número de pontos turísticos.\n"); 
printf("5.Densidade demográfica.\n");
printf("Selecione:\n");
scanf("%d",&seleçao);
*/


/*
10/09/25
Seleção de 2 atributos para comparação
*/
//Seleção de 2 atributos para jogar


printf("\n\nEscolha 2 atributos da rodada conforme o menu abaixo:\n\n");
printf("1.População.\n");
printf("2.Área.\n");
printf("3.PIB.\n");
printf("4.Número de pontos turísticos.\n"); 
printf("5.Densidade demográfica.\n");
printf("Selecione o primeiro atributo:\n");
scanf("%d",&atrib_01);


//Atualiza o menu conforme a escolha do primeiro atributo 
int seleçao;
seleçao = atrib_01;

switch (seleçao)
{
case 1:
  printf("O atributo [População] foi selecionado!\n");
  printf("\nAgora escolha no menu abaixo:\n");
  //printf("1.População.\n");
  printf("2.Área.\n");
  printf("3.PIB.\n");
  printf("4.Número de pontos turísticos.\n"); 
  printf("5.Densidade demográfica.\n");
  printf("Selecione o segundo atributo:\n");
  scanf("%d",&atrib_02);
  break;
case 2:
  printf("O atributo [Área] foi selecionado!\n");
  printf("\nAgora escolha no menu abaixo:\n");
  printf("1.População.\n");
  //printf("2.Área.\n");
  printf("3.PIB.\n");
  printf("4.Número de pontos turísticos.\n"); 
  printf("5.Densidade demográfica.\n");
  printf("Selecione o segundo atributo:\n");
  scanf("%d",&atrib_02);
  break; 
case 3:
  printf("O atributo [PIB] foi selecionado!\n");
  printf("\nAgora escolha no menu abaixo:\n");
  printf("1.População.\n");
  printf("2.Área.\n");
  //printf("3.PIB.\n");
  printf("4.Número de pontos turísticos.\n"); 
  printf("5.Densidade demográfica.\n");
  printf("Selecione o segundo atributo:\n");
  scanf("%d",&atrib_02);
  break;
case 4:
  printf("O atributo [Número de pontos turísticos] foi selecionado!\n");
  printf("\nAgora escolha no menu abaixo:\n");
  printf("1.População.\n");
  printf("2.Área.\n");
  printf("3.PIB.\n");
  //printf("4.Número de pontos turísticos.\n"); 
  printf("5.Densidade demográfica.\n");
  printf("Selecione o segundo atributo:\n");
  scanf("%d",&atrib_02);
  break;   
case 5:
  printf("O atributo [Densidade demógráfica] foi selecionado!\n");
  printf("\nAgora escolha no menu abaixo:\n");
  printf("1.População.\n");
  printf("2.Área.\n");
  printf("3.PIB.\n");
  printf("4.Número de pontos turísticos.\n"); 
  //printf("5.Densidade demográfica.\n");
  printf("Selecione o segundo atributo:\n");
  scanf("%d",&atrib_02);
  break;             

default:
  break;
}

switch (atrib_01){
case 1:
  printf("\n[Resultado para o primeiro atributo]\n");
  printf("Os nomes dos países são %s e %s.\n",card01_pais,card02_pais);
  printf("O atributo escolhido foi população.\n");
  printf("Para o atributo escolhido os valores são: Carta 1 com %d habitantes e Carta 2 com %d habitantes.\n",card01_populacao,card02_populacao);
  resul_atrib01 = card01_populacao>card02_populacao? 1:0;//armazena o resultado da comparação
  card01_atrib01 = card01_populacao; 
  card02_atrib01 = card02_populacao;      
  break; 

  case 2:
  printf("\n[Resultado para o primeiro atributo]\n");
  printf("Os nomes dos países são %s e %s.\n",card01_pais,card02_pais);
  printf("O atributo escolhido foi área.\n");
  printf("Para o atributo escolhido os valores são: Carta 1 com %.2f km2 e Carta 2 com %.2f km2.\n",card01_area,card02_area);
  resul_atrib01 = card01_area>card02_area? 1:0;//armazena o resultado da comparação
  card01_atrib01 = card01_area; 
  card02_atrib01 = card02_area;      
  break; 

  case 3:
  printf("\n[Resultado para o primeiro atributo]\n");
  printf("Os nomes dos países são %s e %s.\n",card01_pais,card02_pais);
  printf("O atributo escolhido foi o PIB.\n");
  printf("Para o atributo escolhido os valores são: Carta 1 com R$%.2f bilhôes de reais e Carta 2 com R$%.2f bilhões de reais.\n",card01_PIB,card02_PIB);
  resul_atrib01 = card01_PIB>card02_PIB? 1:0;//armazena o resultado da comparação
  card01_atrib01 = card01_PIB; 
  card02_atrib01 = card02_PIB;   
  break; 

  case 4:
  printf("\n[Resultado para o primeiro atributo]\n");
  printf("Os nomes dos países são %s e %s.\n",card01_pais,card02_pais);
  printf("O atributo escolhido foi número de pontos turísticos.\n");
  printf("Para o atributo escolhido os valores são: Carta 1 com %d pontos turísticos e Carta 2 com %d pontos turísticos.\n",card01_num_pontos_tur,card02_num_pontos_tur);
  resul_atrib01 = card01_num_pontos_tur>card02_num_pontos_tur? 1:0;//armazena o resultado da comparação 
  card01_atrib01 = card01_num_pontos_tur; 
  card02_atrib01 = card02_num_pontos_tur;   
  break; 

  case 5:
  printf("\n[Resultado para o primeiro atributo]\n");
  printf("Os nomes dos países são %s e %s.\n",card01_pais,card02_pais);
  printf("O atributo escolhido foi densidade demográfica.\n");
  printf("Para o atributo escolhido os valores são: Carta 1 com %.2f hab/km2 e Carta 2 com %.2f hab/km2.\n",card01_densid_pop,card02_densid_pop);
  resul_atrib01 = card01_densid_pop>card02_densid_pop? 1:0;//armazena o resultado da comparação 
  card01_atrib01 = card01_densid_pop; 
  card02_atrib01 = card02_densid_pop; 
  break; 
 }

 switch (atrib_02){
case 1:
  printf("\n[Resultado para o segundo atributo]\n");
  printf("Os nomes dos países são %s e %s.\n",card01_pais,card02_pais);
  printf("O atributo escolhido foi população.\n");
  printf("Para o atributo escolhido os valores são: Carta 1 com %d habitantes e Carta 2 com %d habitantes.\n",card01_populacao,card02_populacao);
  resul_atrib02 = card01_populacao>card02_populacao? 1:0;//armazena o resultado da comparação
  card01_atrib02 = card01_populacao; 
  card02_atrib02 = card02_populacao;      
  break; 

  case 2:
  printf("\n[Resultado para o segundo atributo]\n");
  printf("Os nomes dos países são %s e %s.\n",card01_pais,card02_pais);
  printf("O atributo escolhido foi área.\n");
  printf("Para o atributo escolhido os valores são: Carta 1 com %.2f km2 e Carta 2 com %.2f km2.\n",card01_area,card02_area);
  resul_atrib02 = card01_area>card02_area? 1:0;//armazena o resultado da comparação
  card01_atrib02 = card01_area; 
  card02_atrib02 = card02_area;        
  break; 

  case 3:
  printf("\n[Resultado para o segundo atributo]\n");
  printf("Os nomes dos países são %s e %s.\n",card01_pais,card02_pais);
  printf("O atributo escolhido foi o PIB.\n");
  printf("Para o atributo escolhido os valores são: Carta 1 com R$%.2f bilhôes de reais e Carta 2 com R$%.2f bilhões de reais.\n",card01_PIB,card02_PIB);
  resul_atrib02 = card01_PIB>card02_PIB? 1:0;//armazena o resultado da comparação
  card01_atrib02 = card01_PIB; 
  card02_atrib02 = card02_PIB;      
  break; 

  case 4:
  printf("\n[Resultado para o segundo atributo]\n");
  printf("Os nomes dos países são %s e %s.\n",card01_pais,card02_pais);
  printf("O atributo escolhido foi número de pontos turísticos.\n");
  printf("Para o atributo escolhido os valores são: Carta 1 com %d pontos turísticos e Carta 2 com %d pontos turísticos.\n",card01_num_pontos_tur,card02_num_pontos_tur);
  resul_atrib02 = card01_num_pontos_tur>card02_num_pontos_tur? 1:0;//armazena o resultado da comparação
  card01_atrib02 = card01_num_pontos_tur; 
  card02_atrib02 = card02_num_pontos_tur;     
  break; 

  case 5:
  printf("\n[Resultado para o segundo atributo]\n");
  printf("Os nomes dos países são %s e %s.\n",card01_pais,card02_pais);
  printf("O atributo escolhido foi densidade demográfica.\n");
  printf("Para o atributo escolhido os valores são: Carta 1 com %.2f hab/km2 e Carta 2 com %.2f hab/km2.\n",card01_densid_pop,card02_densid_pop);
  resul_atrib02 = card01_densid_pop>card02_densid_pop? 1:0;//armazena o resultado da comparação
  card01_atrib02 = card01_densid_pop; 
  card02_atrib02 = card02_densid_pop;    
  break; 
 }

  printf("\n[###### Resultado da rodada ######]\n");

  float card01_soma, card02_soma;
  card01_soma = card01_atrib01+card01_atrib02;
  card02_soma = card02_atrib01+card02_atrib02;

 
  printf("A soma dos atributos para a carta 1 resultou em %.f.\n",card01_soma);
  printf("A soma dos atributos para a carta 2 resultou em %.f.\n",card02_soma);
  printf("Dessa forma....");

  
  //Define a carta vencedora da rodada.
  if (resul_atrib01 == 1 && resul_atrib02 == 0){
    printf("Carta 1 venceu a rodada!!");
  }else if(resul_atrib01 == 0 && resul_atrib02 == 1){printf("Carta 2 venceu a rodada!!");
  }else{printf("Ocorreu um empate!!!");}

 return 0;

}
