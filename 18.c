#include<stdio.h>
int main()
{
    double a,b,c;
    printf("A : ");
    scanf("%lf",&a);
    printf("B : ");
    scanf("%lf",&b);
    printf("C : ");
    scanf("%lf",&c);
    float x=a-b/3+c*2-1;
    printf("Result = %.2lf",x);
    return 0;
}
