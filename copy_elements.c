/******************C program to copy elements of the array************************/

#include<stdio.h>

void print_array(int *arr,int size);
void copy_elements(int *src,int *des,int size);


int main()
{
	int src[50],des[50],size,i;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	printf("Enter the elements of the array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",(src + i));
	}
	copy_elements(src,des,size);
	printf("First array:\n");
	print_array(src,size);
	printf("Second array:\n");
	print_array(des,size);
	return 0;
}

void print_array(int *arr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",*(arr + i));
	}
	printf("\n");
}

void copy_elements(int *src,int *des,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		*(des + i) = *(src + i);
	}
}

