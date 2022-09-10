#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,se=0,so=0;
	printf("Enter ten numbers: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		    se=se+a[i];
		else
		    so=so+a[i];
	}
	printf("Sum of the given even numbers is %d\n\n",se);
	printf("Sum of the given odd numbers is %d",so);
	getch();
}
