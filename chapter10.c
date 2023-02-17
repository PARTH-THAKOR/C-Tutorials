// File input/output

#include <stdio.h>

int main()
{
    // File pointer declaration
    FILE *fptr;

    // Modes
    ////1.r for reading --> if dose not exist then print null
    ////2.rb for reading binary file --> if dose not exist then print null
    ////3.w for writing --> always create new file or overwrite currunt file
    ////4.wb for writing binary file --> always create new file or overwrite currunt file
    ////4.a for append --> to add new content in exist file

    // open
    FILE *fptr1;
    fptr1 = fopen("dummy.txt", "r");

    // read by fscanf
    char ch;
    fscanf(fptr1, "%c", &ch);
    printf("%c\n", ch);
    fscanf(fptr1, "%c", &ch);
    printf("%c\n", ch);
    fscanf(fptr1, "%c", &ch);
    printf("%c\n", ch);
    fscanf(fptr1, "%c", &ch);
    printf("%c\n", ch);
    fscanf(fptr1, "%c", &ch);
    printf("%c\n", ch);

    // read by fgetc (only for chareactors)
    printf("%c\n", fgetc(fptr1));
    printf("%c\n", fgetc(fptr1));
    printf("%c\n", fgetc(fptr1));
    printf("%c\n", fgetc(fptr1));
    printf("%c\n", fgetc(fptr1));

    // read by EOF
    char ch2;
    ch2 = fgetc(fptr1);
    while (ch2 != EOF)
    {
        printf("%c", ch2);
        ch2 = fgetc(fptr1);
    }

    // write in file
    FILE *fptr2;
    fptr2 = fopen("newdummy.txt", "w");
    fputc('M', fptr2);
    fputc('a', fptr2);
    fputc('n', fptr2);
    fputc('g', fptr2);
    fputc('o', fptr2);

    // File close
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}