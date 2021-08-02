#include <stdio.h>
void main()
{
	int sum = 0,i = 1,k=0;
	for (;;k++)
	{
		if (i > 100) break;//实验测试最好if写前面因为达成后面不做了，这样k值为100而不99.
		sum += i++;
		
		
	}
	printf("k=%d\n", k);
	printf("sum=%d\n", sum);
}
