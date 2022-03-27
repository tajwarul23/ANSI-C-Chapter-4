#include<stdio.h>
int main()
{
    int m,n,count=0;
    printf("Enter M : ");
    scanf("%d",&m);
    printf("Enter N : ");
    scanf("%d",&n);
    if(m%n==0)
    printf("M is a multiple of n. ");
    else
    printf("M is not a multiple of n.");
    
    return 0;
}
