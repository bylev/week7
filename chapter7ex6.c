#include<stdio.h>

int main() {
	float numbers[5];

	int j, pctr=0, nctr=0;

	printf("\nEnter the first number: "); 
    scanf("%f", &numbers[0]);


    printf("\nEnter the second number: "); 
    scanf("%f", &numbers[1]);


    printf("\nEnter the third number: "); 
    scanf("%f", &numbers[2]);


	printf("\nEnter the fourth number: "); 
    scanf("%f", &numbers[3]);


  


	for(j = 0; j < 5; j++) {
		if(numbers[j] > 0)
		{
			
			pctr++;
		}
		else if(numbers[j] < 0)
		{
			nctr++;
		}
	}
	printf("\nNumber of positive numbers: %d", pctr);
	printf("\nNumber of negative numbers: %d", nctr);
	printf("\n");
	return 0;
}