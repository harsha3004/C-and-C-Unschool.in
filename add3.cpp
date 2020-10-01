#include<stdio.h>

int main()
{
	int x,y,z,add;
	printf("enter three numbers:");
	scanf("%d%d%d",&x,&y,&z);
	add=x+y+z; //adding three numbers
	printf("sum of numbers %d+%d+%d = %d",x,y,z,add);
	return 0;
}
