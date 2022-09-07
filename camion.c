#include <stdio.h>
#include <stdlib.h>


int main() {
	float Psc,Pc,Pt;
	printf("veuillez entrer le poid du camion sans charge en kg : \n");
	scanf("%f",&Psc);
	  if (Psc<=5000)
	     printf("le camion est valde pour passer \n") ;
	   else
	     printf("le camion n'est pas valde pour passer \n") ;
	  
    printf("veuillez entrer le poid de la charge en kg : \n");
    scanf("%f",&Pc);
    Pt = Psc+Pc;
      if(Pt<=5000)
        printf("le camion est valde pour passer") ;
	   else
	    printf("le camion n'est pas valde pour passer \n") ;
	
	
	return 0;
}
