#include <stdio.h>
#include <math.h>
main()
{//求Π的近似值,直到最后一项的绝对值小于0.00001为止Π/4≈1-1/3+1/5-1/7+...
	int n;
	float sum = 0, term, f = 1;
	for (n = 1;; n = n + 2)
	{
		term = f / n;
		if (fabs(term) < 0.00001) break;
		sum = sum + term;
		f = -f;
	}
			printf("PI=%.5f\n",4*sum);	
}


#include <stdio.h>
#include <math.h>
main()
{//求Π的近似值,直到最后一项的绝对值小于0.00001为止Π/4≈1-1/3+1/5-1/7+...
	int n;
	float sum = 0, term = 1, f = 1;
	n = 1;
	while (fabs(term) > 0.000001)
	{
		sum = sum + term;
		n = n + 2;
		f = -f;
		term = f / n;
	}
			printf("PI=%.5f\n",4*sum);	
}
