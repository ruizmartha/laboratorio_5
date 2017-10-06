#include<stdio.h>
void main ()
{
	float nt;
	int nota;
    nota=1;
	
    printf("\nIngrese la nota\n");
	scanf("%f",&nt);
	
	while(nt<0 || nt>10)
	{
    printf("ERROR: nota incorrecta, debe ser entre 0 y 10");
	printf("\nIngrese la nota\n");
	scanf("%f",&nt);
    }
    
	if(nt>=5)
	{
		printf("APROBADO\n");
	}else
		printf("SUSPENDIDO\n");

}
  
