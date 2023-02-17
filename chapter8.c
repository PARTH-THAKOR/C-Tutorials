// Strings

#include <stdio.h>

// library for string methods
#include <string.h>

int main()
{
    // String Declaration
    char name[] = "parth";
    char name1[] = "rakesh";
    char name2[20];

    // String Output
    printf("%s\n", name);

    // String Input
    scanf("%s", name2);

    // String Methods
    ////1.Upparcase
    printf("%s\n", strupr(name));
    ////2.Lowercase
    printf("%s\n", strlwr(name));
    ////3.copy string
    printf("%s\n", strcpy(name, name1));
    ////4.copy n charector
    printf("%s\n", strncpy(name, name2, 3));
    ////5.Length
    printf("%d\n", strlen(name));
    ////6.Concinate
    printf("%s\n", strcat(name, name2));
    ////7.concinate n charector
    printf("%s\n", strncat(name, name2, 3));
    ////8.reverce
    printf("%s\n", strrev(name));
    ////9.Comperision
    printf("%d\n", strcmp(name, name2));

    // String I/O by gets,puts,fgets
    char str[40];
    gets(str);
    fgets(str, 40, stdin);
    puts(str);

    // string by pointer
    char *strnh = "parth";
    strnh = "lol";
    printf("%s", strnh);
    return 0;
}