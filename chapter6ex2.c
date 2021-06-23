#include <stdio.h>




float percent;    
char grade;            
char line[100];         


int main() {
	printf("Enter the percentage correct: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &percent);

	if (percent >= 91.0) {
		grade = 'A';
	} else if (percent >= 81.0) {
		grade = 'B';
	} else if (percent >= 71.0) {
		grade = 'C';
	} else if (percent >= 61.0) {
		grade = 'D';
	} else {
		grade = 'F';
	}

	printf("The grade is %c\n", grade);

	return(0);
}