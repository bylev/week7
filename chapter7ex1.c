#include <stdio.h>

float km, l, m, cm;

float mi, gal, ft, inches;

int main (){

	printf ("enter miles: ");
 scanf("%f", &mi);


  printf ("enter gallon: ");
	scanf ("%f", &gal);

	printf("enter feet: ");
	scanf ("%f", &ft);

	printf("enter inches: ");
	scanf("%f", &inches);


	km= mi*1.609;
	l=gal*3.79;
	m=ft*.305;
	cm=inches*2.54;


 printf("in the metric system:  \n %.3f  km\n %.2f l\n %.3f m\n %.2f cm\n", km, l, m, cm);
	return 0;
}