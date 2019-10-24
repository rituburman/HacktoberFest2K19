#include<stdio.h>
int power(int,int);
int main()
{
	int n,i,p;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Enter power limit: ");
	scanf("%d",&i);
	p=power(n,i);
	printf("Power %d",p);
	return 0;
}


int power(int n,int i)
{
	if(i==0 )
	{
		return 1;
	}
	
	else
	{
		return n*power(n,i-1);
	}
	
}
