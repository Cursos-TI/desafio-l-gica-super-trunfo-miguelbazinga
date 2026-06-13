#include <stdio.h>

int main(){

     // Área para definição das variáveis para armazenar as propriedades das cidades
  //Carta1
 int Carta1;
 char Estado1 = 'A';
 char Codigo_da_carta1[4] = "B01";
 char Nome_da_cidade1[20] = "Tokyo";
 unsigned long int População1 = 14200000;
 float Area_por_km1 = 2188;
 float PIB1 = 9110700000000;
 int Pontos_turisticos1 = 80;

  //Carta2
 int Carta2;
 char Estado2 = 'C';
 char Codigo_da_carta2[4] = "B01";
 char Nome_da_cidade2[20] = "sao_paulo";
 unsigned long int População2 = 11450000;
 float Area_por_km2 = 1521;
 float PIB2 = 650000000000;
 int Pontos_turisticos2 = 45;

 //contas

 float DensidadePopulacao1 = População1 / Area_por_km1;
 float PIBporCapt1 = PIB1 / População1;

  float DensidadePopulacao2 = População2 / Area_por_km2;
  float PIBporCapt2 = PIB2 / População2;

 //Inforções da inicioização do programa

 printf("==Super Trunfo==\n");
 printf("Selecione qual comparação entre cartas que você irá fazer:\n");
 printf("1 - Poppulação\n");
 printf("2 - Area por kmquadrado\n");
 printf("3 - PIB total\n");
 printf("4 - Média de Pontos turisticos\n");
 printf("5 - Densidade Populacional\n");
 printf("6 - PIB por Capital\n");
 scanf("%d", &Carta1); 
 scanf("%d", &Carta2);
 //Hub de comparação das cartas
 switch (Carta1)
 {
 case 1: printf("População: 1,420 milhões de habitantes\n");
   break;
 case 2: printf("Area por km quadrado: 2,188\n");
   break;
 case 3: printf("PIB total: 9,1107 trilhões\n");
   break;
 case 4: printf("Média de Pontos turisticos: 80\n");
   break;
 case 5: printf("Densidade Populacional: %2.f\n", DensidadePopulacao1);
   break;
 case 6: printf("PIB por Capital: %2.f\n", PIBporCapt1);
   break;

 default:
 printf("Informação Invalida \n");
  printf("Fechando o programa... \n");
   break;
 }

  switch (Carta2)
 {
 case 1: printf("População: 1,145 milhões de habitantes\n");
                if (População2 > População1){
                printf("Carta 2 Venceu!");
               } else {printf("Carta 1 Venceu!");
               }
   break;
 case 2: printf("Area por km quadrado: 1,521\n");
 if (Area_por_km2 > Area_por_km1){
                printf("Carta 2 Venceu!");
               } else {printf("Carta 1 Venceu!");
                   }
   break;
 case 3: printf("PIB total: 650 bilhões\n");
   if (PIB2 > PIB1){
                  printf("Carta 2 Venceu!");
                  } else {printf("Carta 1 Venceu!");
                     }
   break;
 case 4: printf("Média de Pontos turisticos: 45\n");
   if (Pontos_turisticos2 > Pontos_turisticos1){
                  printf("Carta 2 Venceu!");
                  } else {printf("Carta 1 Venceu!");
                     }
   break;
 case 5: printf("Densidade Populacional: %2.f\n", DensidadePopulacao2);
   if (DensidadePopulacao2 < DensidadePopulacao1){
                  printf("Carta 2 Venceu!");
                  } else {printf("Carta 1 Venceu!");
                     }
   break;

 case 6: printf("PIB por Capital: %2.f\n", PIBporCapt2);
   if (PIBporCapt2 > PIBporCapt1){
                  printf("Carta 2 Venceu!");
                  } else {printf("Carta 1 Venceu!");
                     }
   break;
 
 default:
 printf("Informação Invalida \n");
  printf("Fechando o programa... \n");
   break;
   
 }
 return 0;
}