/* write a program to enter any number and print sum of it number
author:kamlesh kumawat
date:22/12/2021
*/#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,sum=0;
	clrscr();
	printf("enter any number:");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;
	}
	printf("sum is %d",sum);
	getch();
}
