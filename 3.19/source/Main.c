#include <stdlib.h>
#include <stdio.h>
#pragma warning( disable : 4996 )
int main()
{
	float a, b, c, d, e;
	printf("Enter loan principal (-1 to end)\n");
	scanf("%f", &a);

	while (a != -1) {

		printf("Enter inerest rate\n");
		scanf("%f", &b);
		printf("Enter term of the loan day\n");
		scanf("%f", &c);
		d = a * b*(c / 365);
		printf("inerest charge  is %.2f\n", d);
		printf("Enter loan principal (-1 to end)\n");
		scanf("%f", &a);
	}


	return 0;
}
