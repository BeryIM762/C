#include <stdio.h>
void main()
{//统计4位整数中千位与百位相同，十位与个位相同，但前两位与后两位数不同数多少罗列出来！
	int n, qw, bw, sw, gw, count = 0;//枚举法和穷举法去尝试！
	for (n = 1000; n <= 9999; n++)
	{
		qw = n / 1000;
		bw = n / 100 % 10;
		if (qw - bw)  continue;
		sw = n / 10 % 10;
		if (sw == qw) continue;
		gw = n % 10;
		if (gw == sw)
		{
			count++;
			printf("%5d", n);
		}
	}
		printf("\ncount=%d\n", count);
	
}
