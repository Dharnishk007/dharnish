#include<stdio.h>
void main()
{
    int n,m,j;
    printf("enter the array row size=");
    scanf("%d",&n);
     printf("enter the array column size=");
    scanf("%d",&m);
    int arr[n][m];
    printf("enter the elemnts:");
     for(int i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
{
    scanf("%d",&arr[i][j]);
}
     }
    printf("the array elemnts are:");
    for(int i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {

    printf("%d ",arr[i][j]);
}
printf("\n");
}

}
