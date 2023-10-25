#include <stdlib.h>
#include <stdio.h>
#pragma warning( disable : 4996 )

int main()
{
	for (int p = 1; p < 11; p++) {
		for (int y = 0; y < p; y++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (int p = 10; p > 0; p--) {
		for (int y = 0; y < p; y++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (int p = 10; p > 0; p--) {
		for (int i = 10; i > p; i--) {
			printf(" ");
		}
		for (int y = 0; y < p; y++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (int p = 1; p < 11; p++) {
		for (int i = 10; i > p; i--) {
			printf(" ");
		}
		for (int y = 0; y < p; y++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}