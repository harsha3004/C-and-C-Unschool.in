#include<stdio.h>
int main()
{
	int per;
	printf("Enter Percentage:\n");
	scanf("%f",&per);
	if(per>=80)
	{
		printf("A Grade");
	}
	else if(per<80 && per>=70)
	{
		printf("B Grade");
	}
	else if(per<70 && per>=60)
	{
		printf("C Grade");
	}
	else if(per<60 && per>=45)
	{
		printf("D Grade");
	}
	else
	{
		printf("FAIL");
	}
	return 0;
}
