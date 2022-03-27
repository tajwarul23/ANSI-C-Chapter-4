
#include <stdio.h>
int leapyear(int a)
{
    if (a % 400 == 0)
        return 0;
    else if (a % 4 == 0 && a % 100 != 0)
        return 0;
    else
        return 1;
}
void checkdatevalidity(int d, int m, int y)
{

    int year = leapyear(y);
    if ((y >= 1 && y <= 9999) && (d >= 1 && d <= 31) && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
        printf("Valid Date");
    else if ((y >= 1 && y <= 9999) && (d >= 1 && d <= 30) && (m == 4 || m == 6 || m == 9 || m == 11))
    {
        printf("Valid Date");
    }

    else if ((y >= 1 && y <= 9999) && year == 0 && m == 2 && (d >= 1 && d <= 29))
        printf("Valid Date and It's a Leap Year");
    else if ((y >= 1 && y <= 9999) && year == 1 && m == 2 && (d >= 1 && d <= 28))
        printf("Valid Date and It's not a Leap Year");
    else
        printf("Not a Valid Date");
}
int main()
{
    int d, m, y;
    printf("Enter date into DD/MM/YYYY format :: ");
    scanf("%d %d %d", &d, &m, &y);
    checkdatevalidity(d, m, y);
    return 0;
}


