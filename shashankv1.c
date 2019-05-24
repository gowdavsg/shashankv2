#include<stdio.h>
int output(int,int,int);
int add(int,int);
int getinput(int *a,int *b)
{
	printf("\n Enter two numbers:");
	scanf("%d %d",a,b);
}
int main()
{
	int a,b,c;
	getinput(&a,&b);
	c=add(a,b);
	output(a,b,c);
}
int add(int a,int b)
{
	return (a+b);
}
int output(int a,int b,int c)
{
        printf("\n %d + %d = %d",a,b,c);
}

