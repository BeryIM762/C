#include <stdio.h>
main()
{
	int n, gw, sw, bw;
	for (n = 100; n <= 999; n++)//枚举,穷举求水仙花数
	{
		gw = n % 10;
		sw = n / 10 % 10;
		bw = n / 100;
		if (gw * gw * gw + sw * sw * sw + bw * bw * bw == n)
			printf("%d\n", n);
	}

}
