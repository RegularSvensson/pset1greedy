// include libraries
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // print prompt to user
    printf("Hey! How much change is owed?\n");

    //get a floating point number
    float dollars = GetFloat();

    // cast as integer in cents
    int cents = (int)round(100*dollars);

    // initalize coins to 0
    int coins = 0;
    
    // count quarters
    while (cents / 25 > 0)
    {
        coins++;
        cents -= 25;
    }
    
    // count dimes
    while (cents / 10 > 0)
    {
        coins++;
        cents -= 10;
    }
    
    // count nickels
    while (cents / 5 > 0)
    {
        coins++;
        cents -= 5;
    }
 
    // count pennies
    while (cents / 1 > 0)
    {
        coins++;
        cents -= 1;
    }
 
    // print coins
    printf("%i\n", coins);
    
}

