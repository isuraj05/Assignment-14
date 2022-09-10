#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,temp,sec_grt;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the values of the array: ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	
	for(i=0;i<2;i++)
	{
		sec_grt=a[i];
		for(j=i;j<n;j++)
		{
			if(j==n-1)
			    break;
			else
			    if(sec_grt<=a[j+1])
				{
					temp=sec_grt;
					sec_grt=a[j+1];
					a[j+1]=temp;
				}
		}
	}
	printf("Second Greatest number from the array is %d",sec_grt);
	getch();
}
