#include<stdio.h>
#include<math.h>
int main()
{
    double f,l,c,r;
    printf("Enter Inductance , Resistance & Capacitance : ");
    scanf("%lf %lf %lf",&l,&r,&c);
    f=sqrt((1/(l*c))-((r*r)/(4*c*c)));
    printf("Frequency = %.2lf",f);

    return 0;
}
