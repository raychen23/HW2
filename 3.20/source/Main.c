#include <stdlib.h>
#include <stdio.h>
#pragma warning( disable : 4996 )
int main()
{
	float a, b, c;
	printf("enter straight time of work (-1 to end )\n");
	scanf("%f", &a);
	while (a != -1) {
		printf("enter hourly rate of worker:\n");
		scanf("%f", &b);
		if (a <= 40) {
			c = a * b;
			printf("salary is %.2f\n", c);
			printf("enter straight time of work (-1 to end )\n");
			scanf("%f", &a);
		}
		else if (a >= 40) {
			c = (40 * b) + ((a - 40)*(b*1.5));
			printf("salary is %.2f\n", c);
			printf("enter straight time of work (-1 to end )\n");
			scanf("%f", &a);
		}
	}
	return 0;
}