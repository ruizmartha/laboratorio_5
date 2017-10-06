#include<stdio.h>
void main ()
{
	int i,cont=1,rslt=1;
	printf("introduzca un numero:\n");
	scanf("%d",&i);
	while (cont<=i)
	{
		rslt=rslt*cont;
	    ++cont;
	}
	printf("el factorial de %d es:%d",i,rslt);
}



