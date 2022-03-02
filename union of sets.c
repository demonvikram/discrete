#include<stdio.h>
int remove_repeat(int,int[]);
void main()
{
    int s1,s2,s,i,j=0,k;
    printf("enter the size of set A and B:\n");
    scanf("%d%d",&s1,&s2);
    int a[s1],b[s2],c[s1+s2];
    printf("enter the elements of set1:\n");
    for(i=0;i<s1;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("enter the elements of set2:\n");
    for(i=0;i<s2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<s1;i++)
    {
        c[j]=a[i];
        j++;
    }
     for(i=0;i<s2;i++)
    {
        c[j]=b[i];
        j++;
    }
    printf("elements of c are:\n");
    for(i=0;i<j;i++)
    {
        printf("%d:",c[i]);
    }
    s=remove_repeated(s1+s2,c);
    printf("Array afetr Union \n");
   for(i=0;i<s;i++){
      printf("%d\n",c[i]);
   }
}
int remove_repeated(int size,int a[]){
   int i,j,k;
   for(i=0;i<size;i++){
      for(j=i+1;j<size;){
         if(a[i]==a[j]){
                for(k=j;k<size;k++){
                    a[k]=a[k+1];
                }
            size--;
         }else{
            j++;
         }
      }
   }
   return(size);
}
