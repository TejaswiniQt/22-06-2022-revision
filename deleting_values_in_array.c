/**********************Deleting values in the array*************************************/

#include<stdio.h>

void delete_element(int *arr,int size,int element);

int main()
{
	int arr[100],size = 0,i,element;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	printf("Enter the elements of the array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",(arr+i));
	}

	printf("The elements of the array:\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
	printf("Enter the element to be deleted in the array:");
	scanf("%d",&element);

	delete_element(arr,size,element);
	return 0;
}

void delete_element(int *arr,int size,int element)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		if((arr[i] ^ element) == 0)
		{
			for(j=i;j<size;j++)
			{
				arr[j] = arr[j+1];
			}
			size--;
		}
	}
	printf("Array after deleting:\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
}
