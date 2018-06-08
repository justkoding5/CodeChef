#include <stdio.h>

int main (void)
{
	int withdraw;
	float balance;

	scanf("%d %f", &withdraw, &balance);
	if (!(withdraw % 5))
		balance -= (withdraw + 0.50);
	if (balance <= 0)
		balance += (withdraw + 0.50);

	printf("%.2f\n", balance);

	return (0);
}
