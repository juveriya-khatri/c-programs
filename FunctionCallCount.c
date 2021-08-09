/* C Program to Print the Number of Times a Function is Called. */

#include <stdio.h>

static int count = 0;

void hello_world()
{
    printf("Hello World! \n");
    count++;
}

int main()
{
    hello_world();
    hello_world();
    hello_world();
    
    printf("The Function hello_world() was Called %d Times", count);

    return 0;
}
