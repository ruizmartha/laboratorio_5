#include<stdio.h>
#include<math.h>
void main ()
{
  int b, expo, i, juan=1;
printf("Programa para hacer potencias\n");
printf("Introduce la base de la potencia: ");
scanf("%i",&b);
printf("\nIntroduce el exponente de la potencia: ");
scanf("%i",&expo);
for (i=0;i<expo;i++)
{
juan=juan*b;
}
printf("\nResultado: %i\n",juan);
return 0;

}
