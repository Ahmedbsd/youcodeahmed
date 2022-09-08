#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	char Pa[100];
	char Ra[100]="pizza";
    int n,i;
	printf("welcome to this lil game of guessing\n");
	printf("i'm an italien food, the most famous one , i have the same form as the circle. \n");
	printf("guess wich food I AM :\n");
    gets(Pa);
    while(strlen(Pa)!=strlen(Ra)){
        printf("the answer should have 5 charachters \n");
      gets(Pa);    
	}
     for(i = 0 ; i <strlen(Pa); i++)
	 {
    	if (Pa[i]!=Ra[i])
    	 n++;
		   	 	 
	}
    
    if(n!=0) {
      printf("Sorry!! your answer is wrong\n");}

    else 
       printf("CONGRATULATIONS !! \n Thank you for playing. ");	
	return 0;
}
