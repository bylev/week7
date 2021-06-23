#include<stdio.h>

float amount;
float tax;
float total;
float Tax = .08;


int main(void)
{
       
  printf("Enter the value of your item\n");
  scanf("%f", &amount); 
  tax = amount * Tax;
  total = amount + tax;
 
printf("With sales tax your item costs is %.2f",total);

 getchar(); //this rounds my value
 return 0;
}

