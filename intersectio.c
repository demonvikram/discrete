#include<stdio.h>
void main()
{
    int s1,s2,s,i,j,k=0;
    printf("enter the size of array1:\n");
    scanf("%d",&s1);
    printf("enter the size of array2:\n");
    scanf("%d",&s2);
    int a[s1],b[s2],c[s1+s2];
    printf("enter the elements of array1:");
    for(i=0;i<s1;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("enter the elements of array2:");
    for(i=0;i<s2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            if(a[i]==b[j])
            {
                c[k]=a[i];
                k++;
            }
        }
    }
    printf("elements of intersection are:");
    for(i=0;i<k;i++)
    {
        printf("%d:",c[i]);
    }

}
