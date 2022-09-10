#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,temp,sec_sml;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the values of the array: ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	
	for(i=0;i<2;i++)
	{
		sec_sml=a[i];
		for(j=i;j<n;j++)
		{
			if(j==n-1)
			    break;
			else
			    if(sec_sml>=a[j+1])
				{
					temp=sec_sml;
					sec_sml=a[j+1];
					a[j+1]=temp;
				}
		}
	}
	printf("Second smallest number from the array is %d",sec_sml);
	getch();
}
