
#include<stdio.h>
#include <time.h>
char date[50];

int dayi, monthi, yeari;
int dayf, monthf, yearf;
int total = 0;



int main(){

  printf("Enter a beging year and a final year in dd mm yyyy and dd mm yyyy: \n");

	fgets(date, sizeof(date), stdin);
	sscanf(date, "%d %d %d and %d %d %d", &dayi, &monthi, &yeari, &dayf, &monthf, &yearf);



  // there are leap years and these have one more day i need a part that will deduce them, i use a cycle than stops when the beging year matches de end year

while (yeari < yearf){
  if (( yeari % 4 == 0 && yeari % 100 != 0 ) || yeari % 400 == 0 ) {
  // i basically use the same format from an online answer but does the sam than the previous ex of leap years
  total += 366;
  }


  else{
    total +=365;
  }
yeari ++; //add one year and repeat
}


//now with the months
while (monthi < monthf){
  if ( monthi == 1 || monthi == 3 || monthi == 5 || monthi == 7 || monthi == 8 || monthi == 10 || monthi == 12 ) //31 days months 
  total += 31;

  if ( monthi == 4 || monthi == 6 || monthi == 9 || monthi == 11)
  total += 30;

  //for february and if its a leap year
  if (monthi == 2){if ((yeari % 4 == 0 && yeari % 100 != 0) || yeari % 400 == 0 ){
    total += 29;}

    else {total += 28;} 
     }
}

//and the days 
while (dayi < dayf){
  total += 1;
  dayi ++;}

  printf("The total days between are %d", total);


  return 0;
}