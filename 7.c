#include<stdio.h>
#include<math.h>
int main()
{   double eoq,tbo, dr,sc,hcpi;
    printf("Enter the Demand Rate & Setup cost & Holding cost per item :  ");
    scanf("%lf %lf %lf",&dr,&sc,&hcpi);
    eoq=sqrt((2*dr*sc)/hcpi);
    tbo=sqrt((2*sc)/(dr*hcpi));
    printf("EOQ = %.2lf\n",eoq);
    printf("TBO = %.2lf",tbo);

    
    return 0;
}
