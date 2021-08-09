/* C Program to Print the Number of Times a Function is Called. */

#include <stdio.h>

void hello_world()
{
    printf("Hello World! \n");
}

int main()
{
    int count=0;
    
    (count++, hello_world());
    (count++, hello_world());
    
    printf("The Function hello_world() was Called %d Times", count);

    return 0;
}
