// Conditional stetments

#include <stdio.h>

int main()
{
    // if
    if (2 < 3)
    {
        printf("True");
    }

    // if else
    if (2 > 4)
    {
        printf("false");
    }
    else
    {
        printf("True");
    }

    // if else if else
    if (2 > 5)
    {
        printf("CO1");
    }
    else if (2 < 3)
    {
        printf("CO2");
    }
    else
    {
        printf("CO3");
    }

    // Ternary Opretor
    (2 > 3) ? printf("co4") : printf("co5");

    // switch statment
    int charactor = 't';
    switch (charactor)
    {
    case 'u':
        printf("u");
        break;

    case 'a':
        printf("a");
        break;

    case 'i':
        printf("i");
        break;

    case 'o':
        printf("o");
        break;

    case 'q':
        printf("q");
        break;

    case 'p':
        printf("p");
        break;

    default:
        printf("none");
        break;
    }

    return 0;
}