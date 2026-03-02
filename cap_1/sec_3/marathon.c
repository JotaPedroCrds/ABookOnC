/* The distance of a marathon in kilometers. */

#include <stdio.h>

int main(void)
{
    int miles, yards;
    float kilometers;

    miles = 26;
    yards = 385;
    kilometers = 1.609 * (miles + yards / 1760.0); /* If instead of '1760.0' was '1760', the result of the expression 'yards / 1760' would result in 0, as a division of two integers is also treated as integer, therefore the use of 1760.0 as a float point (or real value). */
    printf("\nA marathon is %f kilometers.\n\n", kilometers);
    return 0;
}