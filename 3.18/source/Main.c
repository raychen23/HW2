#include <stdlib.h>
#include <stdio.h>
#pragma warning( disable : 4996 )
int main()
{
	float a, b;
	printf("Enter sales in dollars (-1 to end)\n");
	scanf("%f", &a);
	while (a != -1) {
		b = a * 0.09 + 200;
		printf("salary is %.2f\n", b);
		printf("Enter sales in dollars (-1 to end)\n");
		scanf("%f", &a);
	}


	return 0;
}