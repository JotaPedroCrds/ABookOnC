#include <stdio.h>

int main(void)
{
    int     a = 1;
    void    try_to_change_it(int);

    printf("%d\n", a);      /* 1 is printed */
    try_to_change_it(a);    /* what is passed as argument to the function is the expression "a" and not the variable itself */
    printf("%d\n", a);      /* 1 is printed again! */
    return 0;
}

void try_to_change_it(int a)
{
    a = 777;
}