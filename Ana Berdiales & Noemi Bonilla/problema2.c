#include <stdio.h>
void main ()
{
	float nota;
	printf("Introduzca la nota \n");
	scanf("%f", &nota);
	while (nota>10)
    {
    printf("ERROR: Nota incorrecta, debe ser entre 0 y 10 \n");
    printf("\n");
	printf("Introduzca la nota nuevamente \n");
	scanf("%f", &nota);
	} 
 	if (nota>5)
	printf("APROBADO\n");
	else 
	printf("SUSPENDIDO");	
}
