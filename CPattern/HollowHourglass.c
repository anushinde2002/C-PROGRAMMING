// C Program to print the hourglass pattern using star * 
#include <stdio.h> 
int main() 
{ 
	int n = 5; 

	// first outer loop to iterate through each row 
	for (int i = 0; i < 2 * n - 1; i++) { 

		// assigning comparator 
		int comp; 
		if (i < n) { 
			comp = 2 * i + 1; 
		} 
		else { 
			comp = 2 * (2 * n - i) - 3; 
		} 

		// first inner loop to print leading whitespaces 
		for (int j = 0; j < comp; j++) { 
			printf(" "); 
		} 

		// second inner loop to print star * and inner 
		// whitespaces 
		for (int k = 0; k < 2 * n - comp; k++) { 
			if (k == 0 || k == 2 * n - comp - 1 || i == 0 
				|| i == 2 * n - 2) { 
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
