#include "stdio.h"
void main()
{
	int n, x;
	float sum, term;
	sum = term = n = 1;
	printf("请输入一个小于10的整数:");
	scanf_s("%d", &x);
	printf("%.2f", term); //递推法
	while (n<=20)
	{
		term = -term * x / n;
		if (term >= 0)printf("+%.2f", term);
		else printf("%.2f", term);
		sum = sum + term;
		n++;
	}
	printf("\b=%.2f\n", sum);
}
