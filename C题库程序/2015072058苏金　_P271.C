#include<stdio.h>

int main(void)
{
	int i, j, sum = 0, m, n, find, num[20][20];

	printf("请输入 m 和 n: ");
	scanf("%d %d", &m, &n);
	printf("请输入 %d 行, 每行 %d 列整数:\n", m, n);
	for (i=0 ; i<m ; i++)
	{
		for (j=0 ; j<n ; j++)
		{
			scanf("%d", &num[i][j]);
		}
	}
	printf("请输入要显示列的列号: ");
	scanf("%d", &find);
	for (i=0 ; i<m ; i++)
	{
		for (j=0 ; j<n ; j++)
		{
			if (j == find)
			{
				sum += num[i][j];
			}
		}
	}
	printf("\n该列上各元素之和为: %d", sum);
	return 0;
}
	
	
	
	