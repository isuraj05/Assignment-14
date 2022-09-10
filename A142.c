#include<stdio.h>
#include<conio.h>
int main()
{
	int avg[10],i,s=0;
	float a;
	printf("Enter ten numbers: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&avg[i]);
		s=s+avg[i];
	}
	a=s/10.0;
	printf("Average of the given array is %f",a);
	getch();
}
