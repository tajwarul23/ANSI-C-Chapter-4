#include<stdio.h>
#include<math.h>
#define pi 3.1416;
int main()
{
    int a,b,i;
    printf("Degree\tsin(x)\t\tcos(x)\n");
    for ( i = 0; i <=180; i=i+15)
    {
        printf("%d\t",i);
        printf("sin(%d)=%.2lf\t",i,sin((i*3.14)/180));
        printf("cos(%d)=%.2lf\n",i,cos((i*3.14)/180));
        
    }
    
    return 0;
}
