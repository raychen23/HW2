#include <stdlib.h>
#include <stdio.h>
#pragma warning( disable : 4996 )
int main()
{
	float a, b, c, d, e, g;
	printf("Enter account number (-1 to end)\n");
	scanf("%f", &a);
	while (a != -1) {


		printf("Enter beginning number\n");
		scanf("%f", &b);
		printf("Enter total charges\n");
		scanf("%f", &c);
		printf("Enter total credits\n");
		scanf("%f", &d);
		printf("Enter credits limits\n");
		scanf("%f", &e);
		printf("account:    %.2f \n", a);
		printf("credits limits:    %.2f \n", e);
		g = b + c - d;
		printf("balabce:    %.2f \n", g);
		if (g > e) {
			printf("credits limits exceed\n");
			printf("Enter account number (-1 to end)\n");
			scanf("%f", &a);
		}
		else {
			printf("credits limits not exceed\n");
			printf("Enter account number (-1 to end)\n");
			scanf("%f", &a);
		}
	}
	return 0;
}
