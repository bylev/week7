#include <stdio.h>

int corn;
int cornprice= 100;
int total;

int main(void){
  printf("insert the kilograms of corn \n");
  scanf("%d", &corn);



  if (corn >= 1 && corn <= 300 ){
    total = corn * cornprice;

    printf("the price of the corn is %d", total);
  }

  else if (corn > 300){
    total = corn * 90;
    printf("the price of the corn is %d", total);
  }
	return 0;
}