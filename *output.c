#include <stdio.h>
main()
{
	int i, j,n;
	for (n = 1; n <= 9; n++)
	{
		for (i = 1; i <= n; i++)//可删除n来替换i for(i=1;i<=9;i++)
		{
			for (j = 1; j < 20 - i; j++)
				printf(" ");
			for (j = 1; j <= i * 2 - 1; j++)
				printf("*");
			printf("\n");
		}



		for (i = n - 1; i >= 1; i--)//可删除n来替换i  for(i=8;i>=1;i--)
		{
			
				for (j = 1; j < 20 - i; j++)
					printf(" ");
				for (j = 1; j <= 2 * i - 1; j++)
					printf("*");
				printf("\n");
			
		}


	}
}
