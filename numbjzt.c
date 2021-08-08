#include <stdio.h>
#include <math.h>
main()
{
	int i, j,k;	
		for (i = 1; i <= 9; i++)
		{
			for (j = 1; j < 20 - i; j++)//j这里可替换k,然后删除j变量。
				printf(" ");
			for (k = 1; k <= i; k++)
				printf("%d", k);
			for (k=i-1; k>=1; k--)
				printf("%d", k);
			printf("\n"); 
		}
/*                 1
                  121                
		 12321
                1234321
               123454321
              12345654321
             1234567654321
            123456787654321
           12345678987654321
						                       */

}
