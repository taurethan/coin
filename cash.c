#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");       // get initial dollar amount
    }
    while (dollars < 0);
    int cents = round(dollars * 100);               // convert float(dollars) to int(cents)
    int coins = 0;                                  // place to store coins
    while (cents > 0)                               // begin sorting loop
    {
        if (cents >= 25)                            // check for quarters
        {
            cents -= 25;
            coins++;
            continue;
        }
        if (cents >= 10)                            // check for dimes
        {
            cents -= 10;
            coins++;
            continue;
        }
        if (cents >= 5)                             // check for nickels
        {
            cents -= 5;
            coins++;
            continue;
        }
        if (cents > 0)                              // check for pennies
        {
            cents -= 1;
            coins++;
            continue;
        }
    }
    printf("%i\n", coins);
}