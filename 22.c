#include<stdio.h>
int main()
{
    double a,b,c,d;
    printf("Enter the value of A,B,C,D = ");
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    printf("(A+B)*(C/D) = %.2lf\n",(a+b)*(c/d));
    printf("(A+B)*C/D = %.2lf\n",(a+b)*c/d);
    printf("A+(B*C)/D = %.2lf\n",a+(b*c)/d);

    return 0;
}
