#include <stdio.h>
#include <stdlib.h>

/* tableau de multiplication */

int main() {
	
	int N,i,R;
	printf("entrer le nombre que vous voulez :");
	scanf("%d",&N);
	for(i=0;i<=10;i++){ 
	  R=i*N;
	  printf("%d * %d = %d \n",i,N,R);
	}
	
	
	
	return 0;
}
