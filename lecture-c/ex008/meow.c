#include <stdio.h>

// Prototype
void meow(void)

int main(void)
{
    // Create a for loop
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}

// Create a function
void meow(void)
{
    printf("meow\n");
}