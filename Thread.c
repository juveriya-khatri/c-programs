/* C Program to Print Hello World using Thread. */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void fun()
{
    printf("Thread : Hello World \n");
}

int main()
{
    pthread_t thread;
    int err;
    
    printf("Hello World \n");

    err = pthread_create(&thread, NULL, fun, NULL);

    if (err)
    {
        printf("An error occured: %d", err);
        exit(0);
    }

    pthread_exit(NULL);    

    return 0;
}
