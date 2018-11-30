#include<stdio.h>

void Swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void Heapify(int a[], int n, int i)
{
	int max = i;
	int l = 2*i + 1;
	int r = 2*i + 2;
	if (l < n && a[l] > a[max])
	{
		max = l;
	}
	if (r < n && a[r] > a[max])
	{
		max = r;
	}
	if (max != i)
	{
		Swap(&a[max], &a[i]);
		Heapify(a, n, max);
	}
}

void HS(int a[], int n)
{
	int x = floor(n/2)-1;
	for (int i = x; i >=0 ; i--)
	{
		Heapify(a, n, i);
	}
	for (int i = n-1; i >= 0 ; i--)
	{
		Swap(&a[0], &a[i]);
		Heapify(a, i, 0);
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	HS(a, n);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
