#include<stdio.h>
int main()
{
	
	int n,temp;
	printf("Enter the Number:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the %d Elements:",n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("Bubble sorting:%d\n",arr[i]);
	}
	return 0;
}
//ascending order
