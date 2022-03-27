#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    ((a>b)&&(a>c))?printf("Maximum= %d\n",a):((a<b)&&(b>c))?printf("Maximum= %d\n",b):printf("Maximum= %d\n",c);
    ((a<b)&&(a<c))?printf("Minimum= %d\n",a):((a>b)&&(b<c))?printf("Minimum= %d\n",b):printf("Minimum= %d\n",c);
    return 0;
}





