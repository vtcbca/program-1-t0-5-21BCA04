/* write a program to enter number and check it is palimdrome number or
not palimdrome number
author : kamlesh kumawat
date : 25/12/2021 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,sum=0,t;
	clrscr();
	printf("enter a number=");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(t==sum)
		printf("palimdrome number");
	else
		printf("not palimdrome number");
	getch();
}