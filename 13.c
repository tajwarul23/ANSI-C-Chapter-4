#include <stdio.h>
int main()
{
    int cus[100], i, n;
    printf("Enter the Total Customer Number : ");
    scanf("%d", &n);
    printf("Serialby Enter the Calls of the customers : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &cus[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (cus[i] > 100)

            printf("Customer %d BILL is : %.2fRs\n", i + 1, 250 + (double)cus[i] * 1.25);
        else
            printf("Customer %d BILL is : %.2fRs\n", i + 1, 250);
    }

    return 0;
}
