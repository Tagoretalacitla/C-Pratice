#include<stdio.h>
int main()
{
	int n,key,found=0;
	int arr[20];
	int i;
	printf("Enter the Number:");
	scanf("%d",&n);
	printf("Enter %d of Elements:",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter key search:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(arr[i] == key)
		{
			found=1;
			break;
		}
	}
	if(found)
	printf("Element found\n");
	else
	printf("Element not found\n");
	return 0;
}
