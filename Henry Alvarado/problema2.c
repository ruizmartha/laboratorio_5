#include<stdio.h>

void main(){
	int a,b,c=1,r=1;
	
	printf("Introduzca un numero\n");
	scanf("%d",&a);
	printf("Introduzca otro numero\n");
	scanf("%d",&b);
	
	while(c<=b){
		r=r*a;
		++c;
		printf("s");
	}
	printf("%d^%d=%d ",a,b,r );
}
