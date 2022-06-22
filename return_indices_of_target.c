/*****************C program to print the indices of target****************************/

#include<stdio.h>
#include<stdlib.h>

int *return_indices(int *arr,int size,int target,int *ret_size);

int main()
{
	int arr[]={2,7,5,10};
	int *p = NULL,target = 15,size,rs;
	size = sizeof(arr)/sizeof(arr[0]);
	p = return_indices(arr,size,target,&rs);
	if(rs == 0)
	{
		printf("Target not found\n");
	}
	else
	{
		printf("Target found at indices %d and %d\n",p[0],p[1]);
		free(p);
	}
	return 0;
}

int *return_indices(int *arr,int size,int target,int *ret_size)
{
	int i,j;
	int *ptr = (int *)malloc(sizeof(int) * 2);
	if(ptr == NULL)
	{
		*ret_size = 0;
		return 0;
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i] + arr[j] == target)
			{
				*ret_size = 2;
				ptr[0] = i;
				ptr[1] = j;
				return ptr; 
			}
		}
	}
	*ret_size=0;
	free(ptr);
	return 0;
}
