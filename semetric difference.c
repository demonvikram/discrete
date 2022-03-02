#include<stdio.h>
void main()
{
    int s1,s2,s,i,j,k=0,flag;
    printf("enter the size of array1:\n");
    scanf("%d",&s1);
    printf("enter the size of array2:\n");
    scanf("%d",&s2);
    int a[s1],b[s2],c[s1+s2];
    printf("enter elements of array1:\n");
    for(i=0;i<s1;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("enter elements of array2:\n");
    for(i=0;i<s2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<s1;i++)
    {
        flag=1;
        for(j=0;j<s2;j++)
        {
            if(a[i]==b[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            c[k]=a[i];
            k++;
        }
    }
     for(i=0;i<s2;i++)
    {
        flag=1;
        for(j=0;j<s1;j++)
        {
            if(b[i]==a[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            c[k]=b[i];
            k++;
        }
    }
    printf("elements after semmetric differnce:\n");
    for(i=0;i<k;i++)
    {
        printf("%d:",c[i]);
    }
}
