// C Program to print diamond pattern using star * 
#include <stdio.h> 
int main() 
{ 
	int n = 5; 

	// first outer loop to iterate through each row 
	for (int i = 0; i < 2 * n - 1; i++) { 

		// assigning values to the comparator according to 
		// the row number 
		int comp; 
		if (i < n) { 
			comp = 2 * (n - i) - 1; 
		} 
		else { 
			comp = 2 * (i - n + 1) + 1; 
		} 

		// first inner loop to print leading whitespaces 
		for (int j = 0; j < comp; j++) { 
			printf(" "); 
		} 

		// second inner loop to print stars * 
		for (int k = 0; k < 2 * n - comp; k++) { 
			printf("* "); 
		} 
		printf("\n"); 
	} 
	return 0; 
}
