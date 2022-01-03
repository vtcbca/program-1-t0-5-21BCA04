/* write a program to enter number and check it is armstrong number or
not armstrong number
author : kamlesh kumawat
date : 25/12/2021 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,c,sum=0,temp;
	clrscr();
	printf("enter a number=");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum=sum+c;
		n=n/10;
	}
	if(temp==sum)
		printf("armstrong number");
	else
		printf("not armstrong number");
	getch();
}