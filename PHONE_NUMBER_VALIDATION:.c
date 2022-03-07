#include<stdio.h>
//#include<conio.h>
#include<string.h>
int main()
{
    char s[20];
    scanf("%s",&s);
    if(s[0]==0)
    {
      printf("Invalid"); 
      return 0;
    }
    
    int a=strlen(s);
    if(a==10)
    printf("Valid");
    else
    printf("Invalid");
    return 0;
}