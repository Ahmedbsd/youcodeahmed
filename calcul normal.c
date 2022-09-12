#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a1,b1,c1,x1,a2,b2,c2,D;
void eq1(){
	printf("(aX+b=c) entrer les nombre a et b et c: ");
	scanf("%f %f %f",&a1,&b1,&c1);
 if(a1!=0)
	printf("votre resultat est : X = %.2f \n",(c1-b1)/a1);
 else 
     if(b1==c1) printf("la solution est l'ensamble IR \n"  );
     else printf ("cette equation n'a pas de solution dans IR \n");
}

void eq2(){
	if(a2==0){
		if(b2==0){	
			if(c2==0){
				printf("la solution est l'ensamble IR \n");}
			else
			    printf ("cette equation n'a pas de solution dans IR \n");
			}
		else printf("votre solution est X = %.2f \n",-c2/b2);	
		}
	else {
		D=(b2*b2)-(4*a2*c2);
		if(D<0){
			printf("votre solution est une ensamble vide\n");
		}
		else if(D>0){
			printf("votre premiere solution est X1 = %.2f \n",-(b2-sqrt(D))/2*a2);
			printf("votre deuxieme solution est X2 = %.2f \n",(b2-sqrt(D))/2*a2);
		}
		else {
				printf("votre solution est X = %.2f \n",-b2/2*a2);
		}
	}	
	
}


int main() {
	 float a,b;
	 int n,x,y,ia,ib ;
	 int fa=1 ,fb=1;
do{	
    do{
     printf(" 1) calcule simple     2) equation 1er degre \n 3) equation 2eme drgre \n ");
     scanf("%d",&n);	
	} while(n<=0 || n>3);
	switch(n){
	 case 1 :  
	 
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
		    break; }  
		 break;    
		   
	case 2 :
	  eq1();
	    break;  
	case 3 :
	 printf("(a(X*X)+bX+c=0) entrer les nombre a et b et c: \n ");
	scanf("%f %f %f",&a2,&b2,&c2);
	eq2();	    
	    break;
			 }
	printf("si vous voullez repeter press 1 : \n")	;
	scanf("%d",&y);	
	

	   				    
	}
	
	
while(y==1)	;
	return 0;
}
