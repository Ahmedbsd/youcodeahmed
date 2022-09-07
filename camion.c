#include <stdio.h>
#include <stdlib.h>
/* ce programe est fait pour decider si le camion est valide pour passer sur le pont ou pas  */

int main() {
	float Psc,Pc,Pt; /*Psc :poid sans charges / Pc :poid de la charge / Pt: poid tottale*/
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
