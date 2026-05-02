#include<stdio.h>
int main()
{
	int arr[100],i=0,n;
	printf("Enter the Number:");
	scanf("%d",&n);
	printf("Enter %d of Elements:",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Reversed Array:");
	for(i=n-1;i>=0;i--)
		printf("%d\n",arr[i]);
	return 0;
}
