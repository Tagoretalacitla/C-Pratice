#include<stdio.h>
int main()
{
	int n,rev=0,temp;
	printf("Enter the Number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rev=rev*10+(n%10);
		n /= 10;
	}
	if(temp==rev)
		printf("Palindrome\n");
	else
		printf("Not palindrome\n");
	return 0;
}
