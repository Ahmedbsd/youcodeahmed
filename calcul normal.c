#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	 float a,b;
	 int x,y,ia,ib ;
	 int fa=1 ,fb=1;
do{	
	 printf("entrer le premier nombre a :");
	 scanf("%f",&a);
     printf("entrer le deuxieme nombre b :");
     scanf("%f",&b);
    do{
	 printf("choisir l'equation que vous voulez: \n");
     printf(" 1) +      2) - \n 3) *      4) / \n 5) a puissance b      6) a! et b! \n");
     scanf("%d",&x);} while(x<=0 || x>6);
	 
	switch(x){
		case 1 : printf("la solution est : %.2f \n",a+b);
		    break;
		case 2 : printf("la solution est : %.2f \n",a-b);
		    break ;
		case 3 : printf("la solution est : %.2f \n",a*b);
		    break;
		case 4 : printf("la solution est : %.2f \n",a/b);
		    break;	
		case 5 : printf("la solution est : %.2f \n",pow (a,b));
		    break; 
		case 6 : 
		  for (ia = 1; ia <= a; ia++)
             fa = fa * ia;
		printf("la solution pour a est : %.2d \n",fa);           
		  for (ib = 1; ib <= b; ib++)
             fb = fb * ib;             
		printf("la solution pour b est : %.2d \n",fb);
		    break; 
				 }   
	printf("si vous voullez repeter press 1 : \n")	;
	scanf("%d",&y);						    
	}
while(y==1)	;
	return 0;
}
