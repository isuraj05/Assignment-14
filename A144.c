#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,grt;
	printf("Enter ten numbers: ");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	grt=a[0];	
	for(i=0;i<10;i++)
	{
		if(i!=9)
		{
			if(grt<a[i+1])
			    grt=a[i+1];
		}
	}
	printf("Greatest number from the array is %d",grt);
	getch();
}
