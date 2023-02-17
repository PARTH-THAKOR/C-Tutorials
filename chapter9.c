// Structures

#include <stdio.h>

// structure declartion
struct student
{
    int roll_number;
    char *name;
    float spi;
};

// Multi Structure declaration
struct students
{
    int id;
    int id_local;
};

// Nested structure
struct child_student
{
    int isd;
    struct student std1;
};

// function with structure
void fun(struct students v1)
{
    v1.id = 56;
    v1.id_local = 565;
    printf("%d\n", v1.id);
    printf("%d\n", v1.id_local);
}

int main()
{
    // Object of struct
    struct student s1;

    // assignment of value to structure veriables
    s1.name = "parth";
    s1.roll_number = 354;
    s1.spi = 9.99;

    // output of structure
    printf("%s\n", s1.name);
    printf("%d\n", s1.roll_number);
    printf("%f\n", s1.spi);

    // Multi structure declaeration
    struct students std[2];

    // assignment by input in multi structure
    for (int i = 0; i < 2; i++)
    {
        printf("entre id of emp %d :  ", i + 1);
        scanf("%d", &std[i].id);
        printf("entre id_local of emp %d : ", i + 1);
        scanf("%d", &std[i].id_local);
    }

    // output of multi structure
    for (int i = 0; i < 2; i++)
    {
        printf("id of emp %d is %d\n", i + 1, std[i].id);
        printf("id_local of emp %d is %d\n", i + 1, std[i].id_local);
    }

    // nested structure acsess
    struct child_student s9;
    s9.std1.roll_number = 5;
    printf("%d", s9.std1.roll_number);

    // structure acsess by pointer(arrow oprertor)
    struct child_student s10;
    struct child_student *ptr = &s10;
    ptr->isd = 10;
    printf("%d\n", ptr->isd);

    // Acsess function of structure
    struct students s15;
    fun(s15);

    return 0;
}