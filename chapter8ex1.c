#include<stdio.h>


const int SQUARE_WIDTH = 5;    
const int ROW_HEIGHT   = 3;     
const int BOARD_WIDTH  = 8;    
const int BOARD_HEIGHT = 8;     

int this_square_width;         
int this_row_width;          
int this_row_height;            
int num_rows;                


int main(void) {

	for (num_rows = 0; num_rows < BOARD_HEIGHT; ++num_rows) {
		for (this_row_width = 0; this_row_width < BOARD_WIDTH; ++this_row_width) {
			printf("+");
			for (this_square_width = 0; this_square_width < SQUARE_WIDTH; ++this_square_width) {
				printf("-");
			}
		}
		printf("+\n");

		for (this_row_height = 0; this_row_height < ROW_HEIGHT; ++this_row_height) {
			for (this_row_width = 0; this_row_width < BOARD_WIDTH; ++this_row_width) {
				printf("|");
				for (this_square_width = 0; this_square_width < SQUARE_WIDTH; ++this_square_width) {
					printf(" ");
				}
			}
			printf("|\n");
		}
	}


	for (this_row_width = 0; this_row_width < BOARD_WIDTH; ++this_row_width) {
		printf("+");
		for (this_square_width = 0; this_square_width < SQUARE_WIDTH; ++this_square_width) {
			printf("-");
		}
	}
	printf("+\n");

	return(0);
}