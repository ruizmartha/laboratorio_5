#include<stdio.h>
void main(){
	int b ,ex,i=1;    
	long long pot=1;
		printf("introduzca un numero base: \n");
	    scanf("%d",&b);
	    printf("introduzca exponente: \n");
	    scanf("%d",&ex);
	do{
		pot=pot*b;
		i++;
	}
	while (i<=ex);

		printf("el resultado es: %lld \n",pot,ex,b);
}
