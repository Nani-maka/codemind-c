#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        printf("%c ",i+65);
        printf("
");
    }
    return 0;
}