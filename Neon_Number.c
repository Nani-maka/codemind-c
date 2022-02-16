#include<stdio.h>
int main()
{
    int n,sum=0,r,temp;
    scanf("%d",&n);
    temp=n*n;
    while(temp>0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    if(n==sum){
    printf("Neon Number");
}
else
{
    printf("Not Neon Number");
    
}

return 0;
}