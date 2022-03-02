#include<stdio.h>
void main()
{
    int i,j,k;
    printf("Truth table of AND is\n");
    printf("A  B   A&&B\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%d  %d   %d\n",i,j,(i&&j));
        }
    }
     printf("Truth table of OR is\n");
    printf("A\t B\t A&&B\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%d\t%d\t%d\n",i,j,(i||j));
        }
    }
     printf("Truth table of NOT is\n");
    printf("A\tB\n");
    for(i=0;i<=1;i++)
    {
       printf("%d\t%d\n",i,!i);
    }
}
