// Loop stetments

#include <stdio.h>

int main()
{
    // While loop
    int i = 0;
    while (i < 10)
    {
        printf("%d\n", i);
        i++;
    }

    // do while loop
    int x = 0;
    do
    {
        printf("%d\n", x);
        x++;
    } while (x < 10);

    // for loop
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }

    //break stetment
    for (int i = 0; i < 10; i++)
    {
        if (i==5)
        {
            printf("break");
            break;
        }
        
        printf("%d\n", i);
    }

    //Continue stetment
    for (int i = 0; i < 10; i++)
    {
        if (i==5)
        {
            printf("continue");
            continue;;
        }
        
        printf("%d\n", i);
    }
    return 0;
}