#include <stdio.h>
 
int main()
{
    int principal_amt, rate, simple_interest;
    int time;
    scanf("%d %d %d", &principal_amt, &rate, &time);
    simple_interest = (principal_amt * rate * time) / 100.0;
    printf("%d", simple_interest);
}