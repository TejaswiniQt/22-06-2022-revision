/*****************2d array**************************************/
#include <stdio.h>
#define row 3
#define col 3

void sum_2d(int (*arr1)[3], int (*arr2)[3], int (*sum)[3])
{
	for(int i = 0;i < row;i++)
	{
		for(int j = 0;j < col;j++)
		{
			*(*(sum + i) + j) = *(*(arr1 + i) + j) + *(*(arr2 + i) + j);
		}
	}
}

int main()
{
	int arr1[row][col];
	int arr2[row][col];
	int sum[row][col];

	printf("Enter array1 elements: \n");
	for(int i = 0;i < row;i++)
	{
		for(int j = 0;j < col;j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("Enter array2 elements: \n");
	for(int i = 0;i < row;i++)
	{
		for(int j = 0;j < col;j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	sum_2d(arr1, arr2, sum);
	printf("After adding : \n");
	for(int i = 0;i < row;i++)
	{
		for(int j = 0;j < col;j++)
		{
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
