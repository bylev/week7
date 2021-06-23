#include <stdio.h>

char line[100];             
int cents;                  
int quarters = 0;           
int dimes = 0;              
int nickels = 0;            
int pennies = 0;            

int main() {
	printf("Enter the number of cents we have: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &cents);

	 if (cents > 99) {
		printf("Error: has to be less than $1.00\n");
		return(1);
	}  
	else if (cents < 1) {
		printf("Error: can not be less than a penny\n");
		return(1);
	}

	while (1) {
		if (cents >= 25) {
			++quarters;
			cents -= 25;
		}
		 else if (cents >= 10) {
			++dimes;
			cents -= 10;
		} 
		else if (cents >= 5) {
			++nickels;
			cents -= 5;
		} 
		else if (cents >= 1) {
			++pennies;
			--cents;
		}
		 else if (cents == 0) {
			break;
		}
	}

	printf("%d quarters %d dimes %d nickels %d pennies\n",
		quarters, dimes, nickels, pennies);

	return(0);
}