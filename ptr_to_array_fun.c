/********************Passing pointer to an array to function*****************/

#include<stdio.h>

void pointer_to_array(int (*arr)[],int size);

int main()
{
	int arr[100],size;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int (*ptr)[size] = &arr;
	pointer_to_array(ptr,size);
	return 0;
}

void pointer_to_array(int (*arr)[],int size)
{
	int i;
	printf("Enter the elements of the array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",(*arr + i));
	}

	printf("The elements of the array:\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",*(*arr + i));
	}
	printf("\n");
}
