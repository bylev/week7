#include <stdio.h>

int hw= 10;
int hourswork;
int overhours;
int overpay;
int payweek;

int main (){
	printf ("Enter working hours: ");
	scanf("%d", &hourswork);

if (hourswork<40){
	overhours= hourswork - 40;
	overpay = overhours*15;
	payweek = overpay + (hw * 40);

}
else if (hourswork <= 40){
payweek = hourswork * hw; 
}

printf("The total gained along this week is %d", payweek);

return 0;
}