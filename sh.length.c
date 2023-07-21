#include<stdio.h>
int main()
{
    char sh[50]={};
int i;
    int length=0;
    for(i=0;sh[i]!='\0';i++)
    {

        length++;
    }
    printf("%d",length);
    return 0;
}
