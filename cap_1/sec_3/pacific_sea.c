/* Measuring the Pacific Sea. */

#include "pacific_sea.h" /* Lines starting with '#' are called preprocessing directives */

int main(void)
{
    const int pacific_sea = AREA;   /* in sq kilometers*/ // 'const' means the the variable can be initialized, but cannot thereafter have its value changed.
    double    acres, sq_miles, sq_feet, sq_inches;
    printf("\nThe Pacific Sea covers an area");
    printf(" of %d square kilometers.\n", pacific_sea);
    sq_miles = SQ_MILES_PER_SQ_KILOMETERS * pacific_sea;
    sq_feet = SQ_FEET_PER_SQ_MILE * sq_miles;
    sq_inches = SQ_INCHES_PER_SQ_FEET * sq_feet;
    acres = ACRES_PER_SQ_MILE * sq_miles;
    printf("In other units of measure this is:\n");
    printf("%22.7e acres\n", acres); // The conversion specification %e causes the system to print a floating expression in an e-format with default spacing. A format of the form %m.ne, where m and n are positive integers, causes the system to print a floating expression in an e-format in m spaces total, with n digits to the right of the decimal point.
    printf("%22.7e square miles\n", sq_miles);
    printf("%22.7e square feet\n", sq_feet);
    printf("%22.7e square inches\n", sq_inches);
    return 0;
}