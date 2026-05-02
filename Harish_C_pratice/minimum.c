#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d of Elements:",n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int min=arr[0];
	for(int i=1;i<n;i++)
		if(arr[i]<min)
		{
			min=arr[i];
		}
	printf("minimum array:%d\n",min);
	return 0;
}
