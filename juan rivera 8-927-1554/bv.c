#include<stdio.h>  
int main() 
{ 
int fact=0; 
printf("Ingresa numero para calcular el factorial "); 
scanf("%d",&fact); 
int cmp=fact-1; 
int j=fact; 
while (cmp>=1) 
{ 
j=j*cmp; 
cmp--; 
} 

printf("El factorial de %d es: %d ", fact,j); 
getch(); 
} 
