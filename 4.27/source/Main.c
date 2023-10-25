#include <stdlib.h>
#include <stdio.h>
#pragma warning( disable : 4996 )
#include<math.h>

int main()
{
	float c;
	for (int a = 1; a < 501; a++) {
		for (int b = 1; b < 501; b++) {
			c = sqrt((a*a) + (b*b));
			if (c - (int)c == 0) {
				printf("%d %d %.0f is Pythagorean triple\n", a, b, c);
			}
		}
	}
	return 0;
}