#include<stdio.h>
#include<conio.h>
int main()
{
	int sum[10],i,s=0;
	printf("Enter ten numbers: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&sum[i]);
		s=s+sum[i];
	}
	printf("Sum of the given array is %d",s);
	getch();
}
