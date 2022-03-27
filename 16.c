#include<stdio.h>
int main()
{
    int sum=0,a,b;
    float avg;
    printf("Enter two integer number to see their sum & average : ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    avg=(float)sum/2;           // // casting __ converting from one datatype to another datatype
    printf("SUM = %d\n",sum);
    printf("AVERAGE = %.2f",avg);
    return 0;

}
