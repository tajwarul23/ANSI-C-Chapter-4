#include<stdio.h>
#include<string.h>
double s,u,a,t,v;
void distance1(double n)
{           
            printf("u = ");
            scanf("%lf",&u);
            printf("a = ");
            scanf("%lf",&a);
            printf("t = ");
            scanf("%lf",&t);
            s=u*t+.5*a*t*t;
            printf("Distance = %.2lf",s);
}
void distance2(double n)
{           
            printf("u = ");
            scanf("%lf",&u);
            printf("v = ");
            scanf("%lf",&v);
            printf("t = ");
            scanf("%lf",&a);
            s=(u+v)*t*.5;
            printf("Distance = %.2lf",s);
}
 

        
int main()
{
    char b[10];
    int num;
    printf("Are you want to work on distance : ");
    scanf("%s",&b);
    if(strcmp(b,"yes")==0 ||strcmp(b,"YES")==0 ||strcmp(b,"Y")==0 ||strcmp(b,"y")==0 )
    {
        printf("1. Have you give us the value of u , t , a  \n");
        printf("2.  Have you give us the value of u , v , t   \n");
        printf("Enter your value 1 or 2 : ");
        scanf("%d",&num);
        if(num==1)
       distance1(1);
        else if(num==2)
        distance2;
        else
        printf("Error Input \n");
        
       
    }
    else
    printf("Good Bye");
    return 0;
}
