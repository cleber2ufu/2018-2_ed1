// teste de uso da funcao clock_gettime

#include <stdio.h>
#include <time.h>
#include <unistd.h>

#define BILLION 1000000000l

int
main ()
{
   struct timespec t1, t2;
   long long unsigned int r;

   clock_gettime (CLOCK_MONOTONIC, &t1);

   sleep (1); // experiment

   clock_gettime (CLOCK_MONOTONIC, &t2);

   r = (long long unsigned int)
       BILLION * (t2.tv_sec - t1.tv_sec) + t2.tv_nsec - t1.tv_nsec;

   printf("elapsed time = %llu nanoseconds\n", (long long unsigned int) r);

   return 0;
   
}