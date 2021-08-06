#include <stdio.h>
#include <math.h>
void main()
{
	int n, i,k;
	scanf_s("%d", &n);
	k = sqrt(n);
	for (i = 2; i <= k; i++)//判断输入数是素数高效执行！
		if (n % i == 0) break;
	if (i <= k) printf("no\n");
	else        printf("yes\n");
}
