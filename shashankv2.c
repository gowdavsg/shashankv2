#include<stdio.h>
int inputarray(int a[],int *n);
int sumarray(int a[],int);
int outputarray(int);
int main()
{
	int n,s;
	int a[n];
	inputarray(a,&n);
	s=sumarray(a,n);
	outputarray(s);
}
int inputarray(int a[],int *n)
{
	int i;
	printf("\n Enter number of elements:");
	scanf("%d",n);
	printf("\n Enter elements:");
	for(i=0;i<*n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int sumarray(int a[],int n)
{
	int i,s=0;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	return s;
}
int outputarray(int s)
{
	printf("\n Sum=%d",s);
}
