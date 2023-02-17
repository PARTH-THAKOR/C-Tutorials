// Dynamic memory alloctaion

#include <stdio.h>

// Library for Dyanmic Memory Allocation
#include <stdlib.h>

int main()
{
    // Dynamic Allocation by Malloc
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));

    // Dynamic Allocation by Calloc
    int *ptr1;
    ptr1 = (int *)calloc(5, sizeof(int));

    // Acsessing data from Dynamic Allocation
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

    // OutPut of Dynamic Allocation
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    // realloacation of daynamic memory (only use for calloc)
    int *ptr2;
    ptr2 = (int *)realloc(ptr1, 8);
    ptr2[0] = 1;
    ptr2[1] = 2;
    ptr2[2] = 1;
    ptr2[3] = 3;
    ptr2[4] = 4;
    ptr2[5] = 5;
    ptr2[6] = 6;
    ptr2[7] = 7;

    // acsess realloacate elements
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", ptr2[i]);
    }

    // free exsessive memory function
    free(ptr);
    free(ptr1);
    free(ptr2);
    return 0;
}

// THAANK YOU