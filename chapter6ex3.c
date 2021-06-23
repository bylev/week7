#include <stdio.h>




float percent;               
char line[100];         


int main() {
	printf("Enter the value\n: "); 
	
	scanf("%f", &percent);

	if (percent < 60){
 printf ("F");
	}
 if (percent >=61 && percent <=63){
		printf("D-");
	}
 if (percent >= 64 && percent <=67){
	 printf("D");
 }
	if (percent >=68 && percent <=70){
		printf ("D+");
	}
if (percent >=71 && percent <=73){
	printf ("C-");
}
if (percent >=74 && percent <=77){
	printf("C");
}
if (percent >=78 && percent <=80){
	printf ("C+");
}
if (percent >=81 && percent <=83){
	printf("B-");
}
if (percent >=84 && percent <=87){
	printf("B");
}
if (percent >=88 && percent <=90){
	printf ("B+");
}
if (percent >=91 && percent <=93){
	printf ("A-");

}
if (percent >=94 && percent <=97){
	printf("A");
}
if (percent >=98 && percent <=100){
	printf ("A+");

}


	return(0);
}