#include<stdio.h>

int main()
{
	int num=0,sum=0;
	do
	{
		printf("Enter number to add:");
		scanf("%d",&num);
		sum=sum+num;
	}while(num>0);
	printf("Sum of entered numbers = %d",sum);
	return 0;
}
