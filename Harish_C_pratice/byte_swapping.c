#include<stdio.h>
int main()
{
	unsigned short num=0x1234;
	unsigned short swap;
	swap=(num>>8)|(num<<8);
	printf("After swap:0X%x\n",swap);
	return 0;
}
