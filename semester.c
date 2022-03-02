#include<stdio.h>
#include<conio.h>
int fib(int);
void main()
{
    int n,z,i;
    printf("enter the limit of series:");
    scanf("%d",&n);
    z=fib(i);
    printf("%d,",z);
}
int fib(int n)
{
    if(n==0)
    {
    return 0;
    }
    else if(n==1)
    {
      return 1;
    }
        else
        {
        return (fib(n-1)+fib(n-2));
}
}
