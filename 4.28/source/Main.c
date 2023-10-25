#include <stdlib.h>
#include <stdio.h>
#pragma warning( disable : 4996 )
#include<math.h>

int main()
{
	int a, b, c, d, e, f, g, h;
	float y, u;
	printf("what is your employee?");
	scanf("%d", &a);
	switch (a) {
	case 1:
		printf("manager weekly pay\n");
		scanf("%d", &b);
		printf("salay is %d\n", b);
		break;

	case 2:
		printf("hours workers work time\n");
		scanf("%d", &c);
		printf("workers pay\n");
		scanf("%d", &d);
		if (c > 40) {
			e = 40 * d + (c - 40)*(d*1.5);
			printf("salary is %d", e);
		}
		if (c < 40) {
			e = c * d;
			printf("salary is %d", e);
		}
		break;

	case 3:
		printf("weekly sales\n");
		scanf("%f", &u);
		y = 250 + u * 0.057;
		printf("salary is %f", y);
		break;

	case 4:
		printf("type of items money\n");
		scanf("%d", &f);
		printf("how many items\n");
		scanf("%d", &g);
		h = f * g;
		printf("salary is %d", f);
		break;
	}
	return 0;
}