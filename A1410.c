#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	int b[n];
	
	printf("Enter the values of the array: ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
		printf("%d ",b[i]);
	}
	getch();
}
