#include <stdio.h>

float degrees, rad, pi= 3.1416;
char num [100];

int main (){
printf("Enter degrees: ");
fgets(num, sizeof(num), stdin);
sscanf(num, "%f", &degrees);

rad= (degrees * pi)/180;

printf("The equivalent to rad is: %.3f", rad);


}