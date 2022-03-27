#include<stdio.h>
int main()
{
    float a;
    printf("Enter a float number : ");
    scanf("%f",&a);
    int b = (int) a % 10;
    printf("Right most one digit of the intiger number is : %d",b);
    return 0;
}
