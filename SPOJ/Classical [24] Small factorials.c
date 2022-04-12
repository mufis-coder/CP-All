#include <stdio.h>
int main()
{
	int N, angka, panjang, bawa, hasil[1000], temp, i, j;
	scanf("%d", &N);
	while(N--)
	{
		panjang=1;
		hasil[0]=1;
		bawa=0;
		scanf("%d", &angka);
		for (i=2;i<=angka;i++)
		{
			for (j=0;j<panjang;j++)
			{
				temp = bawa + hasil[j] * i;
				bawa = temp / 10;
				hasil [j] = temp % 10;
			}
			while (bawa)
			{
				hasil[j] = bawa % 10;
				bawa /= 10;
				j++;
			}
			panjang = j;
		}
		for (i = panjang-1; i>=0; i--)
		{
			printf("%d", hasil[i]);
		}
		printf("\n");
	}
	return (0);
}
