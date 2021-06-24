// how to calculate x of this equation: 2x+3y=0

#include <stdio.h>

float x, y;
char number[100];

int main (){
printf("Enter the value of y: ");
fgets(number, sizeof(number), stdin);
sscanf(number, "%f", &y);

x = (-3*y/2);

printf("The value of x is: %.2f", x);

return 0;

}
