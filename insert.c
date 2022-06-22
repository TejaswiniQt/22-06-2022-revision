#include <stdio.h>

int main()
{
	int arr[5] = {1,2,3,5,6};
	int pos, n=5, temp,num;
	printf("Enter the element to be inserted: ");
	scanf("%d", &num);
	printf("Enter the position: ");
	scanf("%d", &pos);
	if(pos < n)
	{
		n++;
		for(int i=n-1;i>=pos;i--)
		{
			arr[i] = arr[i-1];
		}
		arr[pos]=num;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
