#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    long card_num;
    do
    {
        card_num = get_long("Number: ");
    }
    while (card_num < 1);
    long x = 0;
    x += card_num;
    int digits = 0;
    while (x > 0)
    {
        x = x / 10;
        digits++;
    }
    int result = 0;
    if (digits == 16)
    {
        // multiply every other digit by 2, starting with the second-to-last
        int a = ((card_num / 10) % 10) * 2;
        int b = ((card_num / 1000) % 10) * 2;
        int c = ((card_num / 100000) % 10) * 2;
        int d = ((card_num / 10000000) % 10) * 2;
        int e = ((card_num / 1000000000) % 10) * 2;
        int f = ((card_num / 100000000000) % 10) * 2;
        int g = ((card_num / 10000000000000) % 10) * 2;
        int h = ((card_num / 1000000000000000) % 10) * 2;
        int total1 = (((a / 10) % 10) + a % 10) + (((b / 10) % 10) + b % 10) + (((c / 10) % 10) + c % 10) +
                     (((d / 10) % 10) + d % 10) + (((e / 10) % 10) + e % 10) + (((f / 10) % 10) + f % 10) +
                     (((g / 10) % 10) + g % 10) + (((h / 10) % 10) + h % 10);

        // find the sum of the digits that weren't multiplied
        int i = (card_num / 1) % 10;
        int j = (card_num / 100) % 10;
        int k = (card_num / 10000) % 10;
        int l = (card_num / 1000000) % 10;
        int m = (card_num / 100000000) % 10;
        int n = (card_num / 10000000000) % 10;
        int o = (card_num / 1000000000000) % 10;
        int p = (card_num / 100000000000000) % 10;
        int total2 = i + j + k + l + m + n + o + p;

        // find remainder of final result
        result = (total1 + total2) % 10;

        // determine if card is visa or mastercard
        if ((result == 0) && ((card_num / 1000000000000000) % 10 == 5) && ((card_num / 100000000000000) % 10 == 1 ||
            (card_num / 100000000000000) % 10 == 2 || (card_num / 100000000000000) % 10 == 3 ||
            (card_num / 100000000000000) % 10 == 4 || (card_num / 100000000000000) % 10 == 5))
        {
            printf("MASTERCARD\n");
        }
        else if (((card_num / 1000000000000000) % 10 == 4) && result == 0)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (digits == 15)
    {
        // multiply every other digit by 2, starting with the second-to-last
        int a = ((card_num / 10) % 10) * 2;
        int b = ((card_num / 1000) % 10) * 2;
        int c = ((card_num / 100000) % 10) * 2;
        int d = ((card_num / 10000000) % 10) * 2;
        int e = ((card_num / 1000000000) % 10) * 2;
        int f = ((card_num / 100000000000) % 10) * 2;
        int g = ((card_num / 10000000000000) % 10) * 2;
        int total1 = (((a / 10) % 10) + a % 10) + (((b / 10) % 10) + b % 10) + (((c / 10) % 10) + c % 10) +
                     (((d / 10) % 10) + d % 10) + (((e / 10) % 10) + e % 10) + (((f / 10) % 10) + f % 10) +
                     (((g / 10) % 10) + g % 10);

        // find the sum of the digits that weren't multiplied
        int i = (card_num / 1) % 10;
        int j = (card_num / 100) % 10;
        int k = (card_num / 10000) % 10;
        int l = (card_num / 1000000) % 10;
        int m = (card_num / 100000000) % 10;
        int n = (card_num / 10000000000) % 10;
        int o = (card_num / 1000000000000) % 10;
        int p = (card_num / 100000000000000) % 10;
        int total2 = i + j + k + l + m + n + o + p;

        // find remainder of final result
        result = (total1 + total2) % 10;

        // determine if card is american express
        if ((result == 0) && ((card_num / 100000000000000) % 10 == 3) && ((card_num / 10000000000000) % 10 == 4 ||
            (card_num / 10000000000000) % 10 == 7))
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (digits == 13)
    {
        // multiply every other digit by 2, starting with the second-to-last
        int a = ((card_num / 10) % 10) * 2;
        int b = ((card_num / 1000) % 10) * 2;
        int c = ((card_num / 100000) % 10) * 2;
        int d = ((card_num / 10000000) % 10) * 2;
        int e = ((card_num / 1000000000) % 10) * 2;
        int f = ((card_num / 100000000000) % 10) * 2;
        int total1 = (((a / 10) % 10) + a % 10) + (((b / 10) % 10) + b % 10) + (((c / 10) % 10) + c % 10) +
                     (((d / 10) % 10) + d % 10) + (((e / 10) % 10) + e % 10) + (((f / 10) % 10) + f % 10);

        // find the sum of the digits that weren't multiplied
        int i = (card_num / 1) % 10;
        int j = (card_num / 100) % 10;
        int k = (card_num / 10000) % 10;
        int l = (card_num / 1000000) % 10;
        int m = (card_num / 100000000) % 10;
        int n = (card_num / 10000000000) % 10;
        int o = (card_num / 1000000000000) % 10;
        int total2 = i + j + k + l + m + n + o;

        // find remainder of final result
        result = (total1 + total2) % 10;

        // determine if card is visa
        if (result == 0 && (card_num / 1000000000000) % 10 == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}