/* C Program to Control the Execution of Thread. */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void *fun(void *integer) 
{
    int i;
    
    i = (int)integer;
    
    sleep(2);
    
    printf("Thread Integer : %d \n", i);
    
    pthread_exit(NULL);
    
}

int main() 
{
    int threads[5];
    int err;
    int i;
    
    for( i = 0; i < 3; i++ ) 
    {
        usleep(1);
      
        printf("Integer : %d \n", i);
        
        err = pthread_create(&threads[i], NULL, fun, (void *)i);

        if (err)
        {
            printf("An error occured: %d", err);
            exit(0);
        }
   }
   
   pthread_exit(NULL);
}
