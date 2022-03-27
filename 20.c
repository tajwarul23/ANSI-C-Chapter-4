#include<stdio.h>
int main()
{
    double a,b,c;
    printf("Enter the 3 sides of the triangle : ");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b>c || b+c>a || a+c>b)
    {   
        if(a==b==c)
        printf("It's a Equinox Triangle");
        else if(a==b || b==c || c==a)
        printf("It's a Isoceles Triangle");

    }
    else
    printf("It's not a triangle");
    return 0;
}
