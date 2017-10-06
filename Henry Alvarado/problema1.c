#include<stdio.h>

void main(){
	int n,r=1,a=1,s;
	
	printf("Introduzca un numero\n");
	scanf("%d",&n);
	while(a<=n){
		r=a*r;
		++a;
	}
	printf("%d!= %d",n,r);
}
