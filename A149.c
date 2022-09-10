#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,k=1,temp;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the values of the array: ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	
	for(j=0;j<n/2;j++)
	{
		temp=a[j];
		a[j]=a[n-k];
		a[n-k]=temp;
		k++;
	}
	
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	getch();
}

