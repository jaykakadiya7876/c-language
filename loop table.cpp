#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("enter the value of n:");
	scanf("%d",&n);
	while(n<=10)
	{
		printf("%d*%d=%d",i,n,n*i);
		i++;
	}
}
