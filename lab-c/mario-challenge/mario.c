#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Getting height 1 to 8
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // Piramid
    for (int i = 0; i < n; i++)
    {
        // Left side
        for (int j = n - 1; j > i; j--)
        {
            printf(" ");
        }
        for (int k = -1; k < i; k++)
        {
            printf("#");
        }
        printf("  ");
        // Right side
        for (int m = -1; m < i; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}