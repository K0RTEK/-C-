#include <stdio.h>
int main(void)
{
	float x, y, x1, y1, x2, y2;
	printf("x:");
	scanf("%f", &x);
	printf("y:");
	scanf("%f", &y);
	printf("x1:");
	scanf("%f", &x1);
	printf("y1:");
	scanf("%f", &y1);
	printf("x2:");
	scanf("%f", &x2);
	printf("y2:");
	scanf("%f", &y2);
	printf("%d\n", x1 < x& x < x2& y2 < y& y < y1);
	return 0;
}