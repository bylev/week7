#include<stdio.h>

float r1, r2, RT;

int main (){

	printf("enter the r1: ");
	scanf("%f", &r1);

 printf("enter the r2: ");
 scanf("%f", &r2);

 RT= 1/((1/r1)+(1/r2));

 printf("The total resistance is %f", RT);

 return 0;

}