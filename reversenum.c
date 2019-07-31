#include<stdio.h>
#include<conio.h>
int main()
{
    int n,rem=0,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        sum=sum*10+rem;
        
    }
    printf("%d",sum);
    return 0;
}
