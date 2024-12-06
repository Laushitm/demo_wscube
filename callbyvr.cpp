#include<stdio.h>

int largest(int arr[] ,int size)
{
	int i;
	int max = arr[0];
	for(int x = 1; i< size; i++)
	{
		if(arr[i]>max)
		{
			max= arr[i];
		}
	}
	return max;
}
//*callby reference*//

void largest(int arr[], int size, int* max)
{
	*max = arr[0];
	for(int i = 1; i = size; i++)
	{
		if(arr[i]>*max)
		{
			*max = arr[i];
		}
	}
}
int main()
{
	int n;
	printf("Enter the no of elements :");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements : ");
	for( int i= 0; i<4; i++)
	{
		scanf("%d",&arr[i]);
	
	}
	int result = largest (arr, n);
	printf("largest element by using n call by value is : %d",result);
	int maximum;
	largest(arr,n, &maximum);
	printf("Largest element by using n call by reference is : %d",maximum);
}
