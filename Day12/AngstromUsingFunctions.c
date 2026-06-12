#include <stdio.h>

int armstrong(int n)
{
    int temp,digits,sum,rem,power,i;
    temp = n;
    digits = 0;
    sum = 0;
    while (temp > 0)
    {
        digits ++;
        temp = temp / 10;
    }

    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        power = 1;
        i = 1;
        while (i <= digits)
        {
            power = power * rem;
            i++;
        }
        sum = sum + power;
        temp = temp / 10;
    }
    if (sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (armstrong(n))
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }
    return 0;
}