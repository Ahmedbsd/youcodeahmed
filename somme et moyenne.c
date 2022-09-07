#include <stdio.h>
#include <stdlib.h>

int main() {
	float N1,N2,N3,N4,N5,So,Mo;
	printf("bonjour! \n");
	printf("enter les 5 notes:");
	scanf("%f%f%f%f%f",&N1,&N2,&N3,&N4,&N5);
   So= N1+N2+N3+N4+N5;
   Mo= So/5;
    printf("la somme de votre notes est: %.2f \n",So);
    printf("la moyenne de votre notes est: %.2f",Mo);
	
	
	
	return 0;
}
