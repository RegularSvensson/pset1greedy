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
    // print out amount in cents
    printf("Your change is: %i cents!\n", cents);
    
    //implement output-coins
}

