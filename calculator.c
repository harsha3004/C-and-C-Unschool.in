#include<stdio.h>

int main()
{
int x,y;
printf("enter first number:");
scanf("%d",&x);
printf("enter second number:");
scanf("%d",&y);
int add=x+y;
int sub=x-y;
int mul=x*y;
int div=x/y;
printf("sum of  %d + %d = %d\n",x,y,add );
printf("difference of %d - %d = %d\n",x,y,sub);
printf("multiplication of %d * %d = %d\n",x,y,mul);
printf("divison of %d / %d = %d\n",x,y,div);
return 0;
}
