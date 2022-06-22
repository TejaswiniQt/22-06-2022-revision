/********************C program to find maximum element in the array*********************/

#include<stdio.h>

int find_max(int *arr,int size);


int main()
{
	int arr[50],size,i,max_element;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements of the array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",(arr + i));
	}
	max_element=find_max(arr,size);
	printf("Maximum element in the array: %d\n",max_element);
	return 0;
}

int find_max(int *arr,int size)
{
	int max = 0,i;
	for(i=0;i<size;i++)
	{
		if(arr[i] > max)
			max = arr[i];
	}
	return max;
}

