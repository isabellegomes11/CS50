#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Take user output
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    
    // Make the piramid
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j < n - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}