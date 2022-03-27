#include<stdio.h>
int main()
{
    double a[100],max,min,sum=0;
    int n;
    printf("Enter the numbers count : ");
    scanf("%d",&n);
    printf("Enter the %d numbers one by one : ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf",&a[i]);
    }
    min=a[0],max=a[0];
    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i];
        if(max<a[i])
        max=a[i];
        if(min>a[i])
        min=a[i];
    }
    
    printf("Sum = %.2lf\n",sum);
    printf("Average = %.2lf\n",sum/n);
    printf("Maximum Value = %.2lf\n",max);
    printf("Minimum Value = %.2lf\n",min);
    
    
    return 0;
}
