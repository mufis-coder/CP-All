#include <stdio.h>

int main()
{
	int b, i, j,  m, n, a, k=3;
	scanf("%d", &b);
	for (i=0;i<b;i++)
	{
		scanf("%d %d", &m, &n);
		for(j=m;j<=n;j++)
		{
			k = 3;
			for (a=2 ; a*a<=j ; a++)
			{
				if (j%a == 0)
				{
					k=1;
					break;
				} 
			}
		if (j!=1 && k==3)
		{
			printf("%d\n", j);
		}
		}
		printf("\n");
		
	}
	return (0);
}
