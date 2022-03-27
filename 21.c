#include<stdio.h>
#include<stdio.h>
int main()
{
    double a,b,result;
    printf("A/B enter the value of A & B : ");
    scanf("%lf %lf",&a,&b);
    if(b!=0)
    printf("A=%.2lf\t B=%.2lf\n A/B=%.2lf",a,b,a/b);
    else 
    printf("ERROR. \t Division not possible. ");
    return 0;
}
