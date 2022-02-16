#include <stdio.h>
int main()
{
   int n, i, count = 0;
 
 
    scanf("%d",&n);
    i=2;
    while( i<=n/2)
    {
        // check for non prime number
        if(n%i==0)
        {
            count=1;
            break;
        }
        i++;
    }
 
    if (count==0)
        printf("prime");
    else
        printf("not a prime");
 
    return 0;
    
}