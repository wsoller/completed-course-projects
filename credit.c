#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //take user input
    long cardNum = get_long("Number: ");
    //get number of digits in user input
    int dn = 0;
    long cardNum2 = cardNum;
    do
    {
        cardNum2 /= 10;
        dn++;
    }
    while (cardNum2 > 0);
    //check if invalid
    if (dn != 13 && dn != 15 && dn != 16)
    {
        printf("INVALID\n");
        return 0;
    }
    //check if valid
    int a = dn - 1;
    int sumOf = 0;
    int dn0 = 0;
    int dn1 = 0;
    do
    {
        long a2 = pow(10, (dn - a));
        long a3 = pow(10, (dn - a - 1));
        long dnc = cardNum % a2;
        long dnc2 = dnc - cardNum % a3;
        dnc2 = dnc2 / a3;
        if (a == 1)
        {
            dn1 = dnc2;
        }
        if (a == 0)
        {
            dn0 = dnc2;
        }
        if (dn % 2 == 0 && a % 2 == 0 && dnc2 != 0)
        {
            dnc2 = dnc2 * 2;
            if (dnc2 >= 10)
            {
                dnc2 = dnc2 / 10 + dnc2 % 10;
            }
        }
        if (dn % 2 != 0 && a % 2 != 0 && dnc2 != 0)
        {
            dnc2 = dnc2 * 2;
            if (dnc2 >= 10)
            {
                dnc2 = dnc2 / 10 + dnc2 % 10;
            }
        }
        sumOf += dnc2;
        a--;
    }
    while (a >= 0);
    if (sumOf % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }
    //check if American Express
    if (dn0 == 3 && (dn1 == 4 || dn1 == 7))
    {
        printf("AMEX\n");
        return 0;
    }
    //check if MasterCard
    if (dn0 == 5 && (dn1 > 0 && dn1 < 6))
    {
        printf("MASTERCARD\n");
        return 0;
    }
    //else VISA
    if (dn0 == 4)
    {
        printf("VISA\n");
        return 0;
    }
    else
    {
        printf("INVALID\n");
        return 0;
    }
}