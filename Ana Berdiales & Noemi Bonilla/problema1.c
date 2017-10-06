#include <stdio.h>
void main () {
	int n;
	printf("Introduzca un valor\n");
	scanf("%d", &n);
	printf("\n");
	while(n>0)
	{
		printf("%d\n", n);
		--n;
	}
}
