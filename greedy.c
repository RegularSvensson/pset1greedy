// v1. check50 :)
// include libraries
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // declare dollars
    float dollars;
    
    // only accept positive numbers
    do 
    {
        // print prompt to user
        printf("Hey! How much change is owed?\n");

        // get a floating point number
        dollars = GetFloat();
    } while (dollars < 0);

    // cast as integer in cents
    int cents = (int) round(100 * dollars);

    // initalize coins to 0
    int coins = 0;
    
    // count quarters
    if (cents >= 25)
    {
        coins += cents / 25;
        cents %= 25;
    }
    
    // count dimes
    if (cents >= 10)
    {
        coins += cents / 10;
        cents %= 10;
    }
    
    // count nickels
    if (cents >= 5)
    {
        coins += cents / 5;
        cents %= 5;
    }
    
    // count pennies
    if (cents >= 1)
    {
        coins += cents / 1;
        cents %= 1;
    }
    
    // print coins
    printf("%i\n", coins);
}

