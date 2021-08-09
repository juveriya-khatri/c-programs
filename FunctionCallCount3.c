/* C Program to Print the Number of Times a Function is Called. */

#include <stdio.h>

#define func(n)  (++n, hello_world())

void hello_world()
{
    printf("Hello World! \n");
}

int main()
{
    int count = 0;
    
    func(count);
    func(count);
    
    
    printf("The Function hello_world() was Called %d Times", count);

    return 0;
}
