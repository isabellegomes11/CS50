/*Addition of numbers greater than 2 billion*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");
    printf("%li + %li = %li\n", x, y , x+y);
}