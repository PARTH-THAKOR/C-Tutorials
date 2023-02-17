// Pointers

#include <stdio.h>

// value function
int fun0(int a)
{
    a = 8;
    return a;
}

// refrence function
int fun1(int *a)
{
    *a = 7;
    return *a;
}

// address change function
void fun2(int *a,int *b) {
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
    printf("value of x is %d\n",*a);
    printf("value of y is %d\n",*b);
}

int main()
{
    // Pointer declaration and output
    int a = 6;
    int *ptr = &a;
    printf("%p\n", ptr);
    printf("%p\n", &a);
    printf("%d\n", *ptr);
    printf("%d\n", *(&a));

    // pointer in function
    int b = 5;
    //// 1.call by value
    printf("%d\n", fun0(b));
    printf("%d\n", b);
    //// 1.call by refrence
    printf("%d\n", fun1(&b));
    printf("%d\n", b);

    //addres change function
    int x=6,y=9;
    printf("value of x is %d\n",x);
    printf("value of y is %d\n",y);
    fun2(&x,&y);
    printf("value of x is %d\n",x);
    printf("value of y is %d\n",y);
    return 0;
}