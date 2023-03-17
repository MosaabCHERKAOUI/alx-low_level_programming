#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 *this is a function that tests if the variable is positive or negative or null
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

/*my code*/
if (n > 0)
{
printf("%d is positive ", n);
}
if (n < 0)
{
printf("%d is negative ", n);
}
if (n == 0)
{
printf("%d is zero ", n);
}

return (0);
}
