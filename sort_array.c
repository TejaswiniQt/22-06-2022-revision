#include <stdio.h>
#define SIZE 5
void sort(int *arr, int size)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++) 
		{
			if(*(arr+i) > *(arr+j))
			{
				temp = *(arr+i);
				*(arr+i) = *(arr+j);
				*(arr+j) = temp;
			}
		}
	}
}
int main()
{
	int arr[SIZE];
	printf("Enter array elements: ");
	for(int i=0;i<SIZE;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Before sorting, array elements: ");
	for(int i=0;i<SIZE;i++)
	{
		printf("%d ", arr[i]);
	}
	sort(arr, SIZE);
	printf("\nAfter sorting, array elements: ");
	for(int i=0;i<SIZE;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


