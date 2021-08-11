#include <stdio.h>
#include <math.h>
main()
{
	int n, i, sum, k;
	for (n = 1; n < 1000; n++)//完数因子和,6=1+2+3，实际应用高效速度快(偏难)！！！
	{
		sum = 1; k = sqrt(n);
		for (i = 2; i <= k; i++)
		{
			if (n % i) continue;//算法中(n%i)相同于n%i!=0
			if (i == n / i) sum = sum + i;
			else sum = sum + i + n / i;
		}
		if (n == sum)
		{
			printf("%5d\n", n);
		}
	}
}
