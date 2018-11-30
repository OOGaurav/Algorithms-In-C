#include<stdio.h>

/*void swap(int *x, int *y)
{
	int t = *x;
	*x = *y;
	*y = t;
} */

int Partition(int a[], int start, int end)
{
	int pivot = a[end];
	int pIndex = start;
	for (int i = start; i < end; ++i)
	{
		if (a[i] <= pivot)
		{
			int temp = a[i];
			a[i] = a[pIndex];
			a[pIndex] = temp;
			pIndex++;
		}
	}
	int temp = a[end];
	a[end] = a[pIndex];
	a[pIndex] = temp;
	return pIndex;
}

void QuickSort(int a[], int start, int end)
{
	if (start >= end)
		return;
	int pIndex = Partition(a, start, end);
	QuickSort(a, start, pIndex-1);
	QuickSort(a, pIndex+1, end);
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
	int start = 0, end = n-1;
	QuickSort(a, start, end);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
