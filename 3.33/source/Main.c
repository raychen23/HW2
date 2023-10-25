#include <stdlib.h>
#include <stdio.h>
#pragma warning( disable : 4996 )
int main()
{
	int a, b;
	printf("enter lenght:");
	scanf("%d", &a);
	printf("enter breadth:");
	scanf("%d", &b);
	for (int c = 0; c < b; c++) {
		printf("+");
	}
	printf("\n");
	for (int d = 1; d < a - 1; d++) {

		printf("+");
		for (int c = 0; c < b - 2; c++) {
			printf(" ");
		}
		printf("+");
		printf("\n");
	}
	for (int c = 0; c < b; c++) {
		printf("+");
	}

	return 0;
}