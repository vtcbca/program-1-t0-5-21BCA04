/*write a program enter any number and check it is prime number or not
author:kamlesh kumawat
date: 22/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,count=0;
	clrscr();
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		count++;
		}
	}
	if(count==2)
		printf(" prime number");
	else
		printf("not prime number");
	getch();
}
