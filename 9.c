#include<stdio.h>
int main()
{
    int a,rem,sum=0;
    printf("Enter a four digit intiger : ");
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    printf("Sum of those intiger is = %d",sum);
    return 0;
}
