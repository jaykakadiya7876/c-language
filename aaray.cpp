#include<stdio.h>
int main()
{
	int a[5],i,mul=1;
	printf("enter the value of a[%d]:");
	for(i=0;i<5;i++)
	{
		
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
	
	mul=mul*a[i];
}
printf("answer=%d",mul);
}
