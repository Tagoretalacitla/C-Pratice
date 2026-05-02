#include<stdio.h>
#include <math.h>
int main()
{
	int num,temp,n=0,rem=0,result=0;
	printf("Enter the Number:");
	scanf("%d",&num);
	temp=num;
	while(temp != 0)
	{
		temp /= 10;
		n++;
	}
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		result += (int)pow(rem,n);
		temp /=10;
	}
	if(result==num)
		printf("Arm strong\n");
	else
		printf("Not an Arm strong\n");
	return 0;
}
//cc armstrong.c -lm

