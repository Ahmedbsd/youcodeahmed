#include <stdio.h>
#include <stdlib.h>

int main() {
	 float a,b;
	 int x,y;
	 
do{	
	 printf("entrer le premier nombre :");
	 scanf("%f",&a);
     printf("entrer le deuxieme nombre :");
     scanf("%f",&b);
    do{
	 printf("choisir l'equation que vous voulez: \n");
     printf(" 1) + \n 2) - \n 3) * \n 4) / \n");
     scanf("%d",&x);} while(x<=0 || x>4);
	 
	switch(x){
		case 1 : printf("la solution est : %.2f \n",a+b);
		    break;
		case 2 : printf("la solution est : %.2f \n",a-b);
		    break ;
		case 3 : printf("la solution est : %.2f \n",a*b);
		    break;
		case 4 : printf("la solution est : %.2f \n",a/b);
		    break;}	
	printf("si vous voullez repeter press 1 : \n")	;
	scanf("%d",&y);						    
	}
while(y==1)	;
	return 0;
}
