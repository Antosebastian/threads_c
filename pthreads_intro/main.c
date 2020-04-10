//pthread

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void* yes(void* var)
{
    while(1)
    {
        sleep(1);
        printf("Yes\n");
    }
    return NULL;
}

void no()
{
    while(1)
    {
        sleep(2);
        printf("No\n");
    }
}

int main()
{
    pthread_t yn;
    pthread_create(&yn, NULL, yes, NULL);
//    yes();
    no();
    return 0;
}
