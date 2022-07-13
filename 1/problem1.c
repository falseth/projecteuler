#include <stdio.h>

// Find the sum of all the multiples of 3 or 5 below 1000.
int main(void) {
	const int max = 1000;
	int i, sum=0;
	
	// Add all multiples of 3.
	for (i=0; i<max; i+=3) {
		sum += i;
	}
	
	// Add all multiples of 5.
	for (i=0; i<max; i+=5) {
		sum += i;
	}
	
	// Subtract multiples of both 3 and 5
	// because they're double counted.
	for (i=0; i<max; i+=15) {
		sum -= i;
	}
	
	// Print the sum.
	printf("The sum of all the multiples of 3 or 5 below %d is ", max);
	printf("%d.\n", sum);
	system("pause");
	return 0;
}
