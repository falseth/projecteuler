#include <stdio.h>

// By considering the terms in the Fibonacci sequence
// whose values do not exceed four million,
// find the sum of the even-valued terms.
int main(void) {
	const int max = 4000000;
	int prev2=1, prev1=1, now; // Vars for generating the Fib numbers.
	int sum = 0;
	
	// Keep generating Fib numbers until it exceeds the threshold.
	while (now <= max) {
		if (now % 2 == 0) { sum += now; } // Only add the even-valued terms.
		now = prev1 + prev2; // F(n) = F(n-2) + F(n-1)
		// For the next term, m = n+1, so F(m-2) = F(n-1) and F(m-1) = F(n).
		prev2 = prev1;
		prev1 = now;
	}
	
	// Print the sum.
	printf("The sum of the even-valued terms in the Fibonacci sequence\n");
	printf("whose values do not exceed four million is %d.\n", sum);
	system("pause");
	return 0;
}
