#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,sml;
	printf("Enter ten numbers: ");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	sml=a[0];	
	for(i=0;i<10;i++)
	{
		if(i!=9)
		{
			if(sml>a[i+1])
			    sml=a[i+1];
		}
	}
	printf("Smallest number from the array is %d",sml);
	getch();
}
