#include<stdio.h>
int main()
{
	int n,i,max=0;
	int arr[i];
	printf("Enter the Number:");
	scanf("%d",&n);
	printf("Enter the %d of Numbers:",n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	printf("largest number:%d\n",max);
	return 0;
}
