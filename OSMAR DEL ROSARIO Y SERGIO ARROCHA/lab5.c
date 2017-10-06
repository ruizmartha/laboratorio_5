#include<stdio.h>

void main(){
	float nota;
		printf("introduzca una nota \n");
	scanf("%f",&nota);	
 	while(nota< 0 || nota>10 ){
		printf("ERROR,nota incorreta , debe ser >=10 y nota<=0 \n");
		printf("introduzca una nota \n");
	scanf("%f",&nota);
}
		if(nota>=5){
			printf("APROBO");
		} 
		else {
			if(nota<5)
			{
			printf("reprobo");
		}
	}
}
	
	
	

