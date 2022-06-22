#include<stdio.h>

int main()
{
	int arr[] = {5, 6, 1, 4 , 2};
	int size = sizeof(arr)/sizeof(int);
	printf("Middle element is %d\n", arr[size/2]);
}
