#include <stdio.h>
main()
{
	long n, n2, sum = 0,r;
	for (n = 1; n < 500; n++)//计算1~500之间同构数
	{
		n2 = n * n;
		if (n < 10) r = n2 % 10;
		else if (n < 100) r = n2 % 100;
		else r = n2 % 1000;
		if (n == r) 
		{
			sum = sum + n; 
			printf("%5d--%5d\n", n,n2); 
		}
	}
	printf("sum=%d\n", sum);
}
