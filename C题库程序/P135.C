#include<stdio.h>
#include<math.h>

int main(void)
{
	double i, j;

	printf("�����뻡�� x: ");
	scanf("%lf", &i);
	j = sin(i);
	printf("\nSin(%.2lf) = %.5lf\n", i, j);
	return 0;
}
