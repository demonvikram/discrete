#include<stdio.h>
void main()
void power_set(int*,int,int,int);
{
    int s1,i,j,k=0;
    printf("enter the size of array1:\n");
    scanf("%d",&s1);
    int a[s1];
    printf("enter elements of array1:\n");
    for(i=0;i<s1;i++)
    {
        scanf("%d",&a[i]);
    }
    void power_set(a,0,s1-1,s1);
    getch();
}
void power_set(int *set,int l,int h,int size)
{
    int i=l;
    for(i=l;i<h;i++)
    {
        printf("%d",&set[i]);
    }
    printf("\n");
    if(l+1<size)
    {
        power_set(set,l+1,h,size);
    }
    if(h-1>0)
    {
        power_set(set,l,h-1,size);
    }
}
