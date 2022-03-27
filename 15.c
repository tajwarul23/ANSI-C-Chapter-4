#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Number\t\tSquare=Root\tSquare\n");
    for (float i = 0; i <=100 ; i=i+10)
    {
        printf("%.02f\t\t",i);
        printf("%.2f\t\t",sqrt(i));
        printf("%.02f\n",pow(i,2));
    }
    return 0;
}
