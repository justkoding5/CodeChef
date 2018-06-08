#include <stdio.h>

int main(void)
{
	int testcases, count = 0;
	unsigned long number, divisor;

	scanf("%d %lu", &testcases, &divisor);
	while(testcases--) {
		scanf("%lu", &number);
		count += !(number % divisor);
	}
	printf("%d\n", count);
	return (0);
}
