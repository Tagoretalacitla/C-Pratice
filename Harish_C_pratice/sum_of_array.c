#include<stdio.h>
int main()
{
	int num,i,sum=0;
	int arr[i];
	printf("Enter the Array:");
	scanf("%d",&num);
	printf("Enter %d of Elements:",num);
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<num;i++)
		sum += arr[i];
	printf("%d\n",sum);
	return 0;
}
