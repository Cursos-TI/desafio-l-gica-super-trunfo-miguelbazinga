#include <stdio.h>

int main(){

     // Área para definição das variáveis para armazenar as propriedades das cidades
  //Carta1
 char Estado1 = 'A';
 char Codigo_da_carta1[4] = "B01";
 char Nome_da_cidade1[20] = "Tokyo";
 unsigned long int População1 = 14200000;
 float Area_por_km1 = 2188;
 float PIB1 = 9110700000000;
 int Pontos_turisticos1 = 80;

  //Carta2
 char Estado2 = 'C';
 char Codigo_da_carta2[4] = "B01";
 char Nome_da_cidade2[20]; "sao_paulo";
 unsigned long int População2 = 11450000;
 float Area_por_km2 = 1521;
 float PIB2 = 650000000000;
 int Pontos_turisticos2 = 45;

 //contas

 float DensidadePopulacao1 = População1 / Area_por_km1;
 float PIBporCapt1 = PIB1 / População1;

  float DensidadePopulacao2 = População2 / Area_por_km2;
  float PIBporCapt2 = PIB2 / População2;

 //comparações e exibição dos dados
  printf("Comparação das cartas (PIB por Capital)\n");
  printf("Carta 1 - Tokyo: %f\n", PIBporCapt1);
  printf("Carta 2 - São Paulo: %f\n", PIBporCapt2);
  if(PIBporCapt1 > PIBporCapt2){
     printf("Carta 1 Venceu!");
  }  else {
     printf("Carta 2 Venceu!");
  }
  
  if (PIBporCapt1 > PIBporCapt2);

  return 0;
}