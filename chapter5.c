// function and recursion

#include <stdio.h>

// Void function
void fun1()
{
    printf("hello world\n");
}

// Int function
int fun2(int a, int b)
{
    return a + b;
}

// Float function
float fun3(float a, float b)
{
    return a + b;
}

// Recursive function
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    // callng of function
    fun1();
    printf("%d\n", fun2(2, 5));
    printf("%f\n", fun3(2.8, 5.0));
    printf("%d\n", fact(5));
    return 0;
}