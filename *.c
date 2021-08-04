#include <stdio.h>
main()
{
	int i, j;
	for (i = 1; i <= 9; i++)// 乘法口诀表
	{
		for (j = 1; j <= i; j++)
			printf("%d*%d=%-3d", i, j, i * j);
		printf("\n");
	}

}
