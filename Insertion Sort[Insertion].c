#include<stdio.h>

void IS(int a[], int n)
{
	for (int i = 1; i < n; ++i)
	{
		int x = a[i];
		int hole = i;
		while(hole > 0 && a[hole-1] > x)
		{
			a[hole] = a[hole-1];
			hole--;
		}
		a[hole] = x;
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}
	IS(a, n);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	return 0;
}