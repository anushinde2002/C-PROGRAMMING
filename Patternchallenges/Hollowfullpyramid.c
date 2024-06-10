// C program to print hollow full pyramid using star * 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 

	// first outer loop to iterate through each loop 
	for (int i = 0; i < rows; i++) { 

		// first inner loop to print leading whitespaces 
		for (int j = 0; j < 2 * (rows - i) - 1; j++) { 
			printf(" "); 
		} 

		// second inner loop to print stars * and inner 
		// whitespaces 
		for (int k = 0; k < 2 * i + 1; k++) { 
			if (k == 0 || k == 2 * i || i == rows - 1) { 
				printf("* "); 
			} 
			else { 
				printf(" "); 
			} 
		} 
		printf("\n"); 
	} 
	return 0; 
}
