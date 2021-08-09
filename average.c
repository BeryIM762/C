#include <stdio.h>
main()
{
	int n, score, max = 0, min = 100;//去掉一个最高分和最低分求平均分！
	float sum = 0, average;
	for (n = 1; n <= 10; n++)
	{
		printf("please input numb:");
		scanf_s("%d", &score);
		sum += score;
		if (score > max) max = score;//理解max和min初始化值！
		if (score < min) min = score;
	}
	sum = sum - max - min;
	average = sum / 8;
	printf("average=%.2f\n", average);
}
