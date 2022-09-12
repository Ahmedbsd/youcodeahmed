#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float N[5];
	int i;
	float Mo,S;
	printf("bonjour! \n");
	for(i=0;i<5;i++){

	printf("enter la %d notes: ",i+1);
	scanf("%f",&N[i]);	}
	S=0;
   for(i=0;i<5;i++){
   
      S=S+N[i];}
    Mo=S/5; 
    printf("la somme de votre notes est: %.2f \n",S); 
    printf("la moyenne de votre notes est: %.2f",Mo);
	
	
	
	return 0;
}
