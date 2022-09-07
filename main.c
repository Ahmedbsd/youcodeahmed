#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
int sells, price, fprice, totale, win;
printf("enter how many sells:");
scanf("%d",&sells);
printf("enter the price:");
scanf("%d",&price);
totale = sells * price ; 
printf("totale = %d \n",totale );

printf ("enter the the first price of the product: ");
scanf("%d",&fprice);
win=totale-fprice*sells;
printf("your win is : %d", win );
return 0;
};
