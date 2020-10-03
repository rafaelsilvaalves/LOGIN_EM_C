#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int N1, N2, N3, N4, N5 ;
    int valor;
 
printf("\n______________________________________________________________________________________");    
printf("\n --------------------------------SENHA DE RAFAEL ALVES--------------------------------");
printf("\n ----------------------- DIGITE 1 E TECLE (ENTER) PARA LOGIN -------------------------");
printf("\n ----------------------- DIGITE 2 E TECLE (ENTER) PARA SAIR --------------------------");
printf("\n______________________________________________________________________________________");
   
   scanf("%d", &valor);
   switch ( valor )
  {
    case 1 :
printf("\n");
printf(">>>>>>>>>>>AGORA DIGITE A SENHA DE 5 DIGITOS NA SEQUENCIA CORRETA PARA ABRIR<<<<<<<<<<<");
printf("\n");
  
  printf("\nDIGITE O PRIMEIRO  DIGITO E TECLE (ENTER): ");
  scanf("%d", &N1);
  
  printf("DIGITE  O  SEGUNDO DIGITO E TECLE (ENTER): ");
  scanf("%d", &N2);
  
  printf("DIGITE O TERCEIRO  DIGITO E TECLE (ENTER): ");
  scanf("%d", &N3);
  
  printf("DIGITE  O  QUARTO  DIGITO E TECLE (ENTER): ");
  scanf("%d", &N4);
  
  printf("DIGITE  O  QUINTO  DIGITO E TECLE (ENTER): ");
  scanf("%d", &N5);
  printf("\n");
    
  if(N1 == 5)
  if(N2 == 4)
  if(N3 == 3)
  if(N4 == 2)
  if(N5 == 1)
{
    printf(">>>>>>>>>>LOGIN REALIZADO COM SUCESSO, SEJA BEM VINDO<<<<<<<<<<\n"); break;
  }
    
  else  (N1 != 5); (N2 != 4); (N3 != 3); (N4 != 2); (N5 != 1);   
  {
      printf(">>>>>>>>>>OPS! SENHA INCORRETA! VOCE TEM MAIS 2 TENTATIVAS<<<<<<<<<<\n");
  }
    break;
    
    case 2 :
    printf ("\n");
    printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>  ATE BREVE  <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< \n");
    printf ("\n");
    break;
    
    default :
    printf ("\n");
    printf (">>>>>>>>>>>>>>>>>> DIGITO NAO ACEITO! DIGITE 1 OU 2 E TECLE (ENTER) <<<<<<<<<<<<<<<<<<\n");
    printf ("\n");
  }
  system("PAUSE");
  
}
