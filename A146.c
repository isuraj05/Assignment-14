#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,j,temp,sml;
	printf("Enter ten numbers: ");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
		
	for(i=0;i<10;i++)
	{
		sml=a[i];
		for(j=i;j<10-1;j++)
		{
			if(sml>a[j+1])
			{
				temp=sml;
				sml=a[j+1];
				a[j+1]=temp;
			}
		}
		printf("%d   ",sml);
	}
	getch();
}
