#include<stdio.h>


float size;
float time;
float time2;



int main(){
 printf("Introduce the amount of characters in the file \n");
 scanf("%f", &size);

// a while cycle and repeat the ex of the coin format, 
while (size > 0){
  if (size > 960){
    time ++;
    size -= 960;
  }
  //second condition when is lower or equal tan 960
  if (size <= 960){
    time2= (size*1)/960;
    break;
   
  }


}
printf("the seconds it will take to send the file are %f", time2+time);


  return 0;
}