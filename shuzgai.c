#include <stdio.h>
void main()
{
	int i, j, p, q, t, a[10];
	printf("\n input 10 numbers:\n");
	for (i = 0; i <= 10; i++)
		scanf_s("%d", &a[i]);
	for (i = 0; i < 10; i++)
	{
		p = i; q = a[i];
		for(j=i+1;i<10;j++)
			if (q < a[j])
			{
				p = j; q = a[j];
			}
		if (i != p)
		{
			t = a[i]; a[i] = a[p]; a[p] = t;			
		}
		printf("%d", a[i]);
	}
}
